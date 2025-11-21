//boiler plate imports :sigh:, cuz i know nothing about the kernel...
//just gotta get that motivations going yk? iykyk

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/types.h>
#include <linux/acpi.h>
#include <linux/wmi.h>
#include <acpi/acpi_bus.h>
#include <acpi/acpi_drivers.h>
#include <cstdint>

//i declare extern for every function, for style

extern const wmi_device_id id_table[2];

extern const char *driver_name;

extern int probe (struct wmi_device *wdev, const void *context);
extern void remove(struct wmi_device *wdev);

//ok, these functions are recoded with reference directly to the omen gaming hub driver fourzonelighting.cs, as my main focus was getting keyboard lighting work in linux first, cuz it cool and immediate satisfaction
//i mean, bricking the led driver probably wont do that much... right?

//signed int by default? 32 bits? i forgor x86-64
extern uint8_t execute(int command, ){

} 


//gonna add more constraints and interfaces if i ever advances with my linux learning




 
