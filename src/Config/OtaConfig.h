#ifndef _OTA_CONFIG_H_
#define _OTA_CONFIG_H_

#include <Arduino.h>

#define OTA_HOST_BUF_SIZE 50

struct ota_configs {
  uint32_t firmware_version;
  char ota_host[OTA_HOST_BUF_SIZE];
  int ota_port;
};

const ota_configs PROGMEM _ota_config_defaults = {
  FIRMWARE_VERSION, {0}, 80
};

const int ota_config_size = sizeof(ota_configs) + 5;

using ota_config_table = ota_configs;

#endif