/*
                         Filesystem|           Filesystem type|  Block size| Filesystem size(GB)| Free space(GB)
----------------------------------------------------------------------------------------------------------------
                                  /|                       XFS|        4096|                6.19|           3.18
                               /sys|               SYSFS_MAGIC|        4096|                0.00|           0.00
                              /proc|          PROC_SUPER_MAGIC|        4096|                0.00|           0.00
                               /dev|               TMPFS_MAGIC|        4096|                0.89|           0.89
               /sys/kernel/security|          SECURITYFS_MAGIC|        4096|                0.00|           0.00
                           /dev/shm|               TMPFS_MAGIC|        4096|                0.90|           0.90
                           /dev/pts|        DEVPTS_SUPER_MAGIC|        4096|                0.00|           0.00
                               /run|               TMPFS_MAGIC|        4096|                0.90|           0.89
                     /sys/fs/cgroup|               TMPFS_MAGIC|        4096|                0.90|           0.90
             /sys/fs/cgroup/systemd|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                     /sys/fs/pstore|            PSTOREFS_MAGIC|        4096|                0.00|           0.00
               /sys/fs/cgroup/blkio|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
         /sys/fs/cgroup/cpu,cpuacct|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
    /sys/fs/cgroup/net_cls,net_prio|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
          /sys/fs/cgroup/perf_event|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                /sys/fs/cgroup/pids|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
             /sys/fs/cgroup/freezer|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
              /sys/fs/cgroup/cpuset|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
             /sys/fs/cgroup/hugetlb|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
             /sys/fs/cgroup/devices|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
              /sys/fs/cgroup/memory|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                 /sys/kernel/config|                  CONFIGFS|        4096|                0.00|           0.00
                                  /|                       XFS|        4096|                6.19|           3.18
                    /sys/fs/selinux|             SELINUX_MAGIC|        4096|                0.00|           0.00
           /proc/sys/fs/binfmt_misc|            BINFMTFS_MAGIC|        4096|                0.00|           0.00
                  /sys/kernel/debug|             DEBUGFS_MAGIC|        4096|                0.00|           0.00
                     /dev/hugepages|           HUGETLBFS_MAGIC|     2097152|                0.00|           0.00
                        /dev/mqueue|              MQUEUE_MAGIC|        4096|                0.00|           0.00
           /proc/sys/fs/binfmt_misc|            BINFMTFS_MAGIC|        4096|                0.00|           0.00
                              /boot|                       XFS|        4096|                0.99|           0.73
                        /run/user/0|               TMPFS_MAGIC|        4096|                0.18|           0.18
----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <mntent.h>
#include <sys/vfs.h>
#include "fs_magic.h"


void print_line(void) {

        int i;

        for(i=0; i < 125; i++)
                printf("%c", '-');

        printf("\n");
}

void print_label(void) {
        printf("%45s|%26s|%12s|%20s|%15s\n", "Filesystem", "Filesystem type", "Block size", "Filesystem size(GB)", "Free space(GB)");
}

char *return_fs_type(struct statfs *s) {

        int i = 0;

        char *unknown="UNKNOWN";

        while(fs_table[i].type != 0) {
                if (fs_table[i].type == s->f_type)
                        return fs_table[i].desc;
                i++;
        }

        return unknown;
}

void print_fs_stats(struct mntent *mnt) {

        char *path;
        char *fs_type;
        struct statfs s;

        path = mnt->mnt_dir;

        if (statfs(path, &s) < 0) {
                printf("Error: %s\n", strerror(errno));
                exit(1);
        }

        fs_type = return_fs_type(&s);

        printf("%45s|%26s|%12ld|%20.2f|%15.2f\n", path, fs_type, s.f_bsize, ((float)(s.f_blocks*s.f_bsize))/1024/1024/1024, ((float)(s.f_bavail*s.f_bsize))/1024/1024/1024);

}

int main(void) {

	FILE *mntf;
	struct mntent *mnt;

	mntf = setmntent("/etc/mtab", "r");

	if (mntf == NULL) {
                perror("setmntent");
                exit(1);
	}

	print_label();
	print_line();

	while((mnt = getmntent(mntf)) != NULL)  {
                if( strncmp(mnt->mnt_fsname,"none",4) != 0 )
                        print_fs_stats(mnt);
	}

	endmntent(mntf);
	print_line();

	return(0);
}
