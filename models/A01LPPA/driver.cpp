#include "../driver_interface.h" //this already imports all the necessary definitions

#define FUNCTION_GUID "5FB7F034-2C63-45e9-BE91-3D44E2C707E4"
#define FUNCTION_INSTANCE_INDEX 8
#define FUNCTION_METHOD_INDEX 3


bool enabled = false;

const wmi_device_id omen_id_table[2] = {

  {FUNCTION_GUID,NULL},
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


uint8_t execute(int command, int commandType, int inputDataSize, void *inputData, void *returnData){
      
}
