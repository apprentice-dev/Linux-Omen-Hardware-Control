#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/types.h>
#include <linux/acpi.h>
#include <linux/wmi.h>
#include <acpi/acpi_bus.h>
#include <acpi/acpi_drivers.h>


#define OMEN_WMI_DRIVER_GUID



static const struct wmi_device_id foo_id_table[] = {
       { "5FB7F034-2C63-45e9-BE91-3D44E2C707E4", NULL },
       { }
};

MODULE_DEVICE_TABLE(wmi, foo_id_table);


static struct wmi_driver foo_driver = {
      .driver = {
              .name = "foo",
              .probe_type = PROBE_PREFER_ASYNCHRONOUS,        /* recommended */
              .pm = pm_sleep_ptr(&foo_dev_pm_ops),            /* optional */
      },
      .id_table = foo_id_table,
      .probe = foo_probe,
      .remove = foo_remove,         /* optional, devres is preferred */
      .shutdown = foo_shutdown,     /* optional, called during shutdown */
      .notify = foo_notify,         /* optional, for event handling */
      .no_notify_data = true,       /* optional, enables events containing no additional data */
      .no_singleton = true,         /* required for new WMI drivers */
};
module_wmi_driver(foo_driver);

//importing bunch of headers that i dont even know if its useful, but as long as it works
//vibe coder in the blood


//Kernel module doesnt have a main method :nerd:
/*int main(){

}*/
