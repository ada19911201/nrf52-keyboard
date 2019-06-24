#ifndef __SYSTEM_H__
#define __SYSTEM_H__

#include <stdint.h>


void InitUART();
void CfgSysClock();
void DelayMs(uint16_t n);
void PrintHex(uint8_t *data, uint8_t len);
int putchar(int c);

#endif // __SYSTEM_H__
