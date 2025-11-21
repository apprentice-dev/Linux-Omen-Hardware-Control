#include "../driver_interface.h"

const wmi_device_id id_table[2] = {

  {"936DA01F-9ABD-4D9D-80C7-02AF85C822A8",NULL},
  {}

};

const char *driver_name = "A01LPPA_driver";


int *probe(struct wmi_device *wdev, const void *context) {
  printk("OMEN wmi device found and bound to driver.");
}
void *remove(struct wmi_device *wdev) {
  printk("OMEN wmi device unbinded from the driver. This shouldnt happen from my pea-sized experience. It can happen just not the way I perceive it to be.");
}


