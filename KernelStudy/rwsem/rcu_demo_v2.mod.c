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
	{ 0xa2f7d132, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xfe47ae29, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xf263b82d, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x77daf871, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x297058e5, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe8145f50, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1882ac14, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x1d98b22a, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AEBA4FA1FC79D02FD4EC6A5");
