#include<linux/module.h>
#include<linux/sched.h>

MODULE_LICENSE("Dual BSD/GPL");

static int __init my_init_fun(void)
{
  printk("init fun\n");
  return 0;
}

static void __exit my_exit_fun(void)
{
  printk("exit fun\n");
}

module_init(my_init_fun);
module_exit(my_exit_fun);


