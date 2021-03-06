struct fs_type {
        long type;
        char *desc;
} fs_table[] = {
	0x002f, "QNX4_SUPER_MAGIC",
	0x002f,"QNX4_SUPER_MAGIC",
	0x00c0ffee,"HOSTFS_SUPER_MAGIC",
	0x01021994,"TMPFS_MAGIC",
	0x01021997,"V9FS_MAGIC",
	0x0187, "AUTOFS_SUPER_MAGIC",
	0x0187,"AUTOFS_SUPER_MAGIC",
	0x09041934,"ANON_INODE_FS_MAGIC",
	0x11307854,"MTD_INODE_FS_MAGIC",
	0x13661366,"BALLOON_KVM_MAGIC",
	0x137F, "MINIX_SUPER_MAGIC",
	0x137F,"MINIX_SUPER_MAGIC",
	0x138F, "MINIX_SUPER_MAGIC2",
	0x138F,"MINIX_SUPER_MAGIC2",
	0x15013346,"UDF_SUPER_MAGIC",
	0x19800202,"MQUEUE_MAGIC",
	0x1cd1, "DEVPTS_SUPER_MAGIC",
	0x1cd1,"DEVPTS_SUPER_MAGIC",
	0x2468, "MINIX2_SUPER_MAGIC",
	0x2468,"MINIX2_SUPER_MAGIC",
	0x2478, "MINIX2_SUPER_MAGIC2",
	0x2478,"MINIX2_SUPER_MAGIC2",
	0x27e0eb, "CGROUP_SUPER_MAGIC",
	0x27e0eb,"CGROUP_SUPER_MAGIC",
	0x28cd3d45,"CRAMFS_MAGIC",
	0x3434, "NILFS_SUPER_MAGIC",
	0x3434,"NILFS_SUPER_MAGIC",
	0x414A53, "EFS_SUPER_MAGIC",
	0x414A53,"EFS_SUPER_MAGIC",
	0x42494e4d,"BINFMTFS_MAGIC",
	0x43415d53,"SMACK_MAGIC",
	0x453dcd28,"CRAMFS_MAGIC_WEND",
	0x4d44, "MSDOS_SUPER_MAGIC",
	0x4d44,"MSDOS_SUPER_MAGIC",
	0x4d5a, "MINIX3_SUPER_MAGIC",
	0x4d5a,"MINIX3_SUPER_MAGIC",
	0x50495045,"PIPEFS_MAGIC",
	0x517B, "SMB_SUPER_MAGIC",
	0x517B,"SMB_SUPER_MAGIC",
	0x52654973,"REISERFS_SUPER_MAGIC",
	0x5346414F,"AFS_SUPER_MAGIC",
	0x534F434B,"SOCKFS_MAGIC",
	0x564c, "NCP_SUPER_MAGIC",
	0x564c,"NCP_SUPER_MAGIC",
	0x57AC6E9D,"STACK_END_MAGIC",
	0x58295829,"ZSMALLOC_MAGIC",
	0x58465342,"XFS",
	0x5a3c69f0,"AAFS_MAGIC",
	0x6165676C,"PSTOREFS_MAGIC",
	0x62646576,"BDEVFS_MAGIC",
	0x62656570,"CONFIGFS",
	0x62656572,"SYSFS_MAGIC",
	0x63677270,"CGROUP2_SUPER_MAGIC",
	0x64626720,"DEBUGFS_MAGIC",
	0x64646178,"DAXFS_MAGIC",
	0x68191122,"QNX6_SUPER_MAGIC",
	0x6969, "NFS_SUPER_MAGIC",
	0x6969,"NFS_SUPER_MAGIC",
	0x6B414653,"AFS_FS_MAGIC",
	0x6e736673,"NSFS_MAGIC",
	0x72b6, "JFFS2_SUPER_MAGIC",
	0x72b6,"JFFS2_SUPER_MAGIC",
	0x73636673,"SECURITYFS_MAGIC",
	0x73717368,"SQUASHFS_MAGIC",
	0x73727279,"BTRFS_TEST_MAGIC",
	0x73757245,"CODA_SUPER_MAGIC",
	0x7461636f,"OCFS2_SUPER_MAGIC",
	0x74726163,"TRACEFS_MAGIC",
	0x7655821, "RDTGROUP_SUPER_MAGIC",
	0x7655821,"RDTGROUP_SUPER_MAGIC",
	0x794c7630,"OVERLAYFS_SUPER_MAGIC",
	0x858458f6,"RAMFS_MAGIC",
	0x9123683E,"BTRFS_SUPER_MAGIC",
	0x958458f6,"HUGETLBFS_MAGIC",
	0x9660, "ISOFS_SUPER_MAGIC",
	0x9660,"ISOFS_SUPER_MAGIC",
	0x9fa0, "PROC_SUPER_MAGIC",
	0x9fa0,"PROC_SUPER_MAGIC",
	0x9fa1, "OPENPROM_SUPER_MAGIC",
	0x9fa1,"OPENPROM_SUPER_MAGIC",
	0x9fa2, "USBDEVICE_SUPER_MAGIC",
	0x9fa2,"USBDEVICE_SUPER_MAGIC",
	0xabba1974,"XENFS_SUPER_MAGIC",
	0xadf5, "ADFS_SUPER_MAGIC",
	0xadf5,"ADFS_SUPER_MAGIC",
	0xadff, "AFFS_SUPER_MAGIC",
	0xadff,"AFFS_SUPER_MAGIC",
	0xBAD1DEA, "FUTEXFS_SUPER_MAGIC",
	0xBAD1DEA,"FUTEXFS_SUPER_MAGIC",
	0xcafe4a11,"BPF_FS_MAGIC",
	0xde5e81e4,"EFIVARFS_MAGIC",
	0xEF53, "EXT2/EXT3/EXT4_SUPER_MAGIC",
	0xEF53,"EXT2_SUPER_MAGIC",
	0xEF53,"EXT3_SUPER_MAGIC",
	0xEF53,"EXT4_SUPER_MAGIC",
	0xf15f, "ECRYPTFS_SUPER_MAGIC",
	0xf15f,"ECRYPTFS_SUPER_MAGIC",
	0xF2F52010,"F2FS_SUPER_MAGIC",
	0xf97cff8c,"SELINUX_MAGIC",
	0xf995e849,"HPFS_SUPER_MAGIC",
};
