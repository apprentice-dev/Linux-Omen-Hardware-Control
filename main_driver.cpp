#include "models/driver_interface.h"



MODULE_DEVICE_TABLE(wmi, foo_id_table);

static struct wmi_driver foo_driver = {
      .driver = {
              .name = driver_name,
              .probe_type = PROBE_PREFER_ASYNCHRONOUS,       /* recommended */
      },
      .id_table = omen_id_table,
      .probe = omenprobe,
      .remove = omenremove,        
      .no_singleton = true,
};
module_wmi_driver(foo_driver);





//importing bunch of headers that i dont even know if its useful, but as long as it works
//vibe coder in the blood


//Kernel module doesnt have a main method :nerd:
/*int main(){

}*/
