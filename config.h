
#ifndef _CONFIG_H_
#define _CONFIG_H_

/*
    Enable debug output generated by DbgMsg() function.
    See src/debug.c for more details.
*/
#define BACKDOOR_DEBUG

/*
    Write debug messages into the OVMF debug output port.
    Uncomment this option if you're planning to run backdoor on QEMU.
*/
// #define BACKDOOR_DEBUG_OVMF

/*
    Write debug messages into the ttyS0 using 0x3F8 I/O port.
    Most likely you will never need this option because COM port of
    modern computers usually connected to PCH via dedicated Super I/O 
    chip and during PEI phase it's not initialized yet.
*/
#define BACKDOOR_DEBUG_SERIAL

// serial port configuration for BACKDOOR_DEBUG_SERIAL
#define SERIAL_BAUDRATE 115200
#define SERIAL_PORT_NUM SERIAL_PORT_0

/* 
    Debug messages buffer size 
*/
#define DEBUG_OUTPUT_SIZE (PAGE_SIZE * 0x10)

/*
    Use periodic timer software SMI handler to communicate with
    the backdoor from low privileged user.    
*/
#define USE_PERIODIC_TIMER

#endif