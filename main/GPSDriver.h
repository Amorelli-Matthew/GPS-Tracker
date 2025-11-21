#ifndef GPS_Driver_H
#define GPS_Driver_H

#include "esp_random.h"

void generateRandomGPRMC(char* buffer, short len);
void ParseGPRMCMessage(char* buffer);

void generateRandomGPGGA(char* buffer, short len);
void ParseGPGGAMessage(char* buffer, short len);

 void generateRandomGPVTG(char* buffer, short len);
 void ParseGPVTGMessage(char* buffer, short len);
 

uint8_t nmea_checksum_payload(const char *payload);
 void add_checksum(char *out, size_t outlen);

#endif