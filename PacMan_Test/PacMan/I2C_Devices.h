#ifndef I2C_Devices_h
#define I2C_Devices_h

// #ifdef __cplusplus
// extern "C" {
// #endif

#include "Arduino.h"
#include "Wire.h"
#include "PacMan.h"


// Generic
void i2cWriteByteToMem(uint8_t addr, uint8_t reg, uint8_t value);
uint8_t i2cReadByteFromMem(uint8_t addr, uint8_t reg);


// MCP23008
void MCP23008_setup();
uint8_t MCP23008_readGPIO();


// LTC4151

extern uint16_t  LTC4151_Vsense;
extern uint16_t  LTC4151_Vin;
extern uint16_t  LTC4151_ADin;
extern float 	 LTC4151_Current;
extern float 	 LTC4151_Voltage;

void LTC4151_setup();
void LTC4151_update();

float LTC4151_getVoltage();
float LTC4151_getCurrent();

// #ifdef __cplusplus
// }
// #endif /*__cplusplus*/

#endif