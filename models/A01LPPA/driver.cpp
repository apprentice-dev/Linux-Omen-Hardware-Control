#include "../driver_interface.h" //this already imports all the necessary definitions

bool enabled = false;

const wmi_device_id omen_id_table[2] = {

  {"936DA01F-9ABD-4D9D-80C7-02AF85C822A8",NULL},
  {}

};



const char *driver_name = "A01LPPA_driver";
//const char *instance_name = R"ACPI\\PNP0C14\\0_0"
const char16_t *instance_name_literal = U"ACPI\\PNP0C14\\0_0";
const BSTR instance_name = {u16strlen(instance_name_literal),instance_name_literal};

int *omenprobe(struct wmi_device *wdev, const void *context) {
  printk("OMEN wmi device found and bound to driver.");
enabled = true;
}
void *omenremove(struct wmi_device *wdev) {
  printk("OMEN wmi device unbinded from the driver. This shouldnt happen from my pea-sized experience. It can happen just not the way I perceive it to be.");
  enabled = false;
}
