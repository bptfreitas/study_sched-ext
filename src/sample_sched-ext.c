#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/wait.h>
#include <linux/tty.h>
#include <linux/tty_driver.h>
#include <linux/tty_flip.h>
#include <linux/serial.h>
#include <linux/sched.h>
#include <linux/sched/signal.h>
#include <linux/seq_file.h>
#include <linux/uaccess.h>
#include <linux/version.h>

#include <linux/circ_buf.h>
#include <linux/string.h>

#define DRIVER_VERSION "v0.0.0"
#define DRIVER_AUTHOR "Nobody"
#define DRIVER_DESC "Workqueue study"

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");

static int __init sample_wq_init(void){

    printk("Hello world!");


    return 0;
}

static void __exit sample_wp_exit(void){

    printk("Goodbye world!");


}

module_init(sample_wq_init);
module_exit(sample_wp_exit);