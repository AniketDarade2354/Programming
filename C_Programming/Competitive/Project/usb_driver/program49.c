#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/usb.h>

/*-------------------------------------------------------
 * USB Device ID Table
 *------------------------------------------------------*/
static const struct usb_device_id my_usb_table[] =
{
    { USB_DEVICE(0x0781, 0x5567) },   /* Example VID & PID */
    { }                               /* End of table */
};

MODULE_DEVICE_TABLE(usb, my_usb_table);

/*-------------------------------------------------------
 * Probe Function
 * Called when matching USB device is connected
 *------------------------------------------------------*/
static int my_probe(struct usb_interface *interface,
                    const struct usb_device_id *id)
{
    printk(KERN_INFO "USB Device Connected\n");

    return 0;
}

/*-------------------------------------------------------
 * Disconnect Function
 * Called when USB device is removed
 *------------------------------------------------------*/
static void my_disconnect(struct usb_interface *interface)
{
    printk(KERN_INFO "USB Device Removed\n");
}

/*-------------------------------------------------------
 * USB Driver Structure
 *------------------------------------------------------*/
static struct usb_driver my_usb_driver =
{
    .name       = "my_usb_driver",
    .probe      = my_probe,
    .disconnect = my_disconnect,
    .id_table   = my_usb_table,
};

/*-------------------------------------------------------
 * Module Initialization
 *------------------------------------------------------*/
static int __init my_init(void)
{
    printk(KERN_INFO "Registering USB Driver\n");

    return usb_register(&my_usb_driver);
}

/*-------------------------------------------------------
 * Module Exit
 *------------------------------------------------------*/
static void __exit my_exit(void)
{
    printk(KERN_INFO "Unregistering USB Driver\n");

    usb_deregister(&my_usb_driver);
}

/*-------------------------------------------------------
 * Entry / Exit
 *------------------------------------------------------*/
module_init(my_init);
module_exit(my_exit);

/*-------------------------------------------------------
 * Module Information
 *------------------------------------------------------*/
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Aniket Darade");
MODULE_DESCRIPTION("Simple Linux USB Driver");
MODULE_VERSION("1.0");