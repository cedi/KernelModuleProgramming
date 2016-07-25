#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("hello world");
MODULE_AUTHOR("Cedric Kienzler");

int init_module() {
    printk(KERN_INFO "initialize kernel modulen");
    printk(KERN_INFO "hello world!n");
    return 0;
}

void cleanup_module() {
    printk(KERN_INFO "kernel module unloaded.n");
}
