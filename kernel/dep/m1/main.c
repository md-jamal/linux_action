#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
extern int adder(int a,int b);

//必选
//模块许可声明
MODULE_LICENSE("GPL");
//模块加载函数
static int hello_init(void)
{
	adder(1,3);
	printk(KERN_ALERT "hello,I am edsionte\n");
	return 0;
}
//模块卸载函数
static void hello_exit(void)
{
	printk(KERN_ALERT "goodbye,kernel\n");
}
//模块注册
module_init(hello_init);
module_exit(hello_exit);
//可选
MODULE_AUTHOR("edsionte Wu");
MODULE_DESCRIPTION("This is a simple example!\n");
MODULE_ALIAS("A simplest example");