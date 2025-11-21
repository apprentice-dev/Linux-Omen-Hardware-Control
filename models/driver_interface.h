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

//I hate microsoft :sob:

#ifndef _BSTR_DEFINITION_
#define _BSTR_DEFINITION 6767676767
struct BSTR
{
     //char16_t string literal exmaple: U"Hello World"
     const unsigned int size;//does not include terminator, contains number of bytes in the str
     char16_t *str; //the actual string with a terminator
};
#endif

#ifndef _quick_char16_t_strlen_utility_
#define _quick_char16_t_strlen_utility_

uint32_t u16strlen(const char16_t *str) {
    if (str == nullptr) {
        return 0; // Or handle as an error, depending on requirements
    }
    uint32_t length = 0;
    while (*str != u'\0') {
        length++;
        str++;
    }
    return length;
}

#endif


extern BSTR instance_name; 

extern const wmi_device_id omen_id_table[2];

extern const char *driver_name;

extern int omenprobe (struct wmi_device *wdev, const void *context);

extern void omenremove(struct wmi_device *wdev);

//ok, these functions are recoded with reference directly to the omen gaming hub driver fourzonelighting.cs, as my main focus was getting keyboard lighting work in linux first, cuz it cool and immediate satisfaction
//i mean, bricking the led driver probably wont do that much... right?

//signed int by default? 32 bits? i forgor x86-64
extern uint8_t execute(int command, int commandType, int inputDataSize, void *inputData, void *returnData);




//gonna add more constraints and interfaces if i ever advances with my linux learning




 
