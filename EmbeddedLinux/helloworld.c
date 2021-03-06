#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static char * myname = "nn";

static int module_init_function(void)
{
    printk(KERN_INFO "Module? Hello! %s \n", myname);
    return 0;
}

static void module_exit_function(void)
{
    printk(KERN_INFO "Module? Bye %s !\n", myname);
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel Module");
module_param(myname, charp, 0);

module_init(module_init_function);
module_exit(module_exit_function);
