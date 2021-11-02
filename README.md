# Get-FS-Type

Simple program to print information about monted filesystems, filesystem type, block size and space.
Should support most of the popular FS types in Linux systems.

##### Compilation and usage:

```bash
$ gcc -o get_fs_type get_fs_type.c

$ sudo ./get_fs_type

                                   Filesystem|           Filesystem type|  Block size| Filesystem size(GB)| Free space(GB)
-----------------------------------------------------------------------------------------------------------------------------
                                         /sys|               SYSFS_MAGIC|        4096|                0.00|           0.00
                                        /proc|          PROC_SUPER_MAGIC|        4096|                0.00|           0.00
                                         /dev|               TMPFS_MAGIC|        4096|                0.45|           0.45
                                     /dev/pts|        DEVPTS_SUPER_MAGIC|        4096|                0.00|           0.00
                                         /run|               TMPFS_MAGIC|        4096|                0.10|           0.09
                                            /|EXT2/EXT3/EXT4_SUPER_MAGIC|        4096|               61.80|          56.61
                         /sys/kernel/security|          SECURITYFS_MAGIC|        4096|                0.00|           0.00
                                     /dev/shm|               TMPFS_MAGIC|        4096|                0.48|           0.48
                                    /run/lock|               TMPFS_MAGIC|        4096|                0.00|           0.00
                               /sys/fs/cgroup|               TMPFS_MAGIC|        4096|                0.48|           0.48
                       /sys/fs/cgroup/unified|       CGROUP2_SUPER_MAGIC|        4096|                0.00|           0.00
                       /sys/fs/cgroup/systemd|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                               /sys/fs/pstore|            PSTOREFS_MAGIC|        4096|                0.00|           0.00
                   /sys/fs/cgroup/cpu,cpuacct|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                       /sys/fs/cgroup/hugetlb|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                       /sys/fs/cgroup/devices|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                    /sys/fs/cgroup/perf_event|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
              /sys/fs/cgroup/net_cls,net_prio|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                          /sys/fs/cgroup/pids|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                        /sys/fs/cgroup/cpuset|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                          /sys/fs/cgroup/rdma|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                        /sys/fs/cgroup/memory|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                         /sys/fs/cgroup/blkio|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                       /sys/fs/cgroup/freezer|        CGROUP_SUPER_MAGIC|        4096|                0.00|           0.00
                     /proc/sys/fs/binfmt_misc|            BINFMTFS_MAGIC|        4096|                0.00|           0.00
                            /sys/kernel/debug|             DEBUGFS_MAGIC|        4096|                0.00|           0.00
                                  /dev/mqueue|              MQUEUE_MAGIC|        4096|                0.00|           0.00
                               /dev/hugepages|           HUGETLBFS_MAGIC|     2097152|                0.00|           0.00
                           /sys/kernel/config|                  CONFIGFS|        4096|                0.00|           0.00
                     /sys/fs/fuse/connections|                   UNKNOWN|        4096|                0.00|           0.00
                              /run/rpc_pipefs|                   UNKNOWN|        4096|                0.00|           0.00
                               /var/lib/lxcfs|                   UNKNOWN|         512|                0.00|           0.00
                               /run/user/1000|               TMPFS_MAGIC|        4096|                0.10|           0.10
                /mnt/vagrant-mounts/1000-1000|                   UNKNOWN|        1024|              931.55|         446.37
                                     /vagrant|                   UNKNOWN|        1024|              931.55|         446.37
                     /proc/sys/fs/binfmt_misc|            BINFMTFS_MAGIC|        4096|                0.00|           0.00
                                      /raiser|         BTRFS_SUPER_MAGIC|        4096|                5.00|           4.48
-----------------------------------------------------------------------------------------------------------------------------
```
