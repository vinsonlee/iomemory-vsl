#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe89b6b83, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x61b7b126, __VMLINUX_SYMBOL_STR(simple_strtoull) },
	{ 0x164f8fc, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbfc397c5, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x53732db4, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node) },
	{ 0xe44e3f36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf0279a28, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xa556183f, __VMLINUX_SYMBOL_STR(blk_delay_queue) },
	{ 0xe6fb675c, __VMLINUX_SYMBOL_STR(node_to_cpumask_map) },
	{ 0x33d9b97e, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x5824d124, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x463ab225, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x851a73b5, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x8bbd41b6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xa498447a, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x11a6be77, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xbd100793, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x8e74e192, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xec33210d, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x5c19ea38, __VMLINUX_SYMBOL_STR(blk_queue_bounce) },
	{ 0x4d974b9c, __VMLINUX_SYMBOL_STR(register_sysrq_key) },
	{ 0x9aa5f728, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x8ed89873, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x86f16a4e, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x36ef98b5, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x8348674b, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x448e085f, __VMLINUX_SYMBOL_STR(prepare_to_wait_exclusive) },
	{ 0xaef5ca84, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa59e738b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x4ed703a4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7552fc0, __VMLINUX_SYMBOL_STR(blk_alloc_queue_node) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xb105377b, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa46665e7, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x78009ced, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x944da5b0, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0x3904d1a6, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xc9783233, __VMLINUX_SYMBOL_STR(kthread_bind) },
	{ 0x78951312, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x989e4b76, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x14411c0b, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0xc0e833f1, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xc701ef09, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xe8ef0ff0, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xe86ba3de, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xb8e7ce2c, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0x13ab76f1, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x864d541d, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x8b81418e, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0xfbda6258, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x1250c7e1, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x27fcade3, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x9fbf467a, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xce223d19, __VMLINUX_SYMBOL_STR(blk_peek_request) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4e5be98, __VMLINUX_SYMBOL_STR(elevator_exit) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xbf8ba54a, __VMLINUX_SYMBOL_STR(vprintk) },
	{ 0x4115ffd9, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9ca9bd6d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xc3aaf0a9, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0x899ddc4f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x626422d4, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x80fc7c8d, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x5096973b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xa6137a0e, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xf5074ce, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xef3124d1, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x6b56b6e0, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xc227151a, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x7f0fd20f, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0x9184cf18, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0xef392333, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb9249d16, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xa29ffcf9, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe016fb64, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x389e9f11, __VMLINUX_SYMBOL_STR(elevator_init) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2413cedd, __VMLINUX_SYMBOL_STR(blk_init_queue_node) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xdd03b6e8, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x765a37d2, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6770047d, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xe5e611f0, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x40cfdfbe, __VMLINUX_SYMBOL_STR(down_read_trylock) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xb14f552d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3928efe9, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x435fa4ed, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xca5e20e5, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0xd813562f, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xc6b397ae, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xb2c96ed, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6cfbca76, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xbd1b40a0, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x57394c85, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xbddbc7c6, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x68c39459, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x5f49b179, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x9a1b0ffa, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe9e3b8e2, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x5a4896a8, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x9a815bd3, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x1d1e66c2, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xafa9a68c, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x21f33f75, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xbd7ec418, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x47f80417, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xffd5a8eb, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x95b276f8, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0xcbc9557f, __VMLINUX_SYMBOL_STR(unregister_sysrq_key) },
	{ 0x78667153, __VMLINUX_SYMBOL_STR(__blk_end_request) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x7a838142, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xb6da5069, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x78996740, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x3e7c9952, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001AEDd00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00002001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0F5872531B00577E07B0D0A");
