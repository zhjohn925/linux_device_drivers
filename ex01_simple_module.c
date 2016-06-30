#include <linux/init.h>
#include <linux/module.h>

/***************************************************************
 *  $ make -C /lib/modules/$(uname -r)/build M=$PWD modules
 * --One terminal to run 
 *  $ sudo tail -f /var/log/syslog
 * --Another terminal to load and unload module
 *  $ sudo insmod ex01_simple_module.ko
 *  $ lsmod | grep ex
 *  $ sudo rmmod ex01_simple_module.ko
 ***************************************************************/

int ex01_simple_module_init(void) {
	printk(KERN_ALERT "Inside the %s function\n", __FUNCTION__);
	return 0;
}

void ex01_simple_module_exit(void) {
	printk(KERN_ALERT "Inside the %s function\n", __FUNCTION__);
}

module_init(ex01_simple_module_init);
module_exit(ex01_simple_module_exit);