/*
 * hello-1.c - the simplest kernel module.
 */

#include <linux/module.h>  // Needed by all modules
#include <linux/printk.h>  // Needed for `pr_info()`

// The following functions have established prototypes and are standard kernel enter/exit functions:

int init_module(void)
{
	pr_info("Hello, World!\n");  // "print info"; alternative for `printk(KERN_INFO [str])`

	// A non-zero return code means `init_module` failed; module can't be loaded
	return 0;
}

void cleanup_module(void)
{
	pr_info("Goodbye, World!\n");
}

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("The simplest kernel module.");
