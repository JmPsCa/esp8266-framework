#ifndef _GLOBAL_CONFIG_H_
#define _GLOBAL_CONFIG_H_

#include <Arduino.h>

/**
 * common default configurations for all ewings stack
 */
#define CONFIG_START      5
#define CONFIG_VERSION    "1.0"
#define FIRMWARE_VERSION  2019041100
#define RELEASE           "uEOS-A"    
#define LAUNCH_YEAR       19
#define LAUNCH_UNIX_TIME  1546300800  // 2019 Unix time stamp

struct global_config {
  char version[4];
  uint8_t current_year;
};


const global_config PROGMEM _global_config_defaults = {
  CONFIG_VERSION, LAUNCH_YEAR
};

const int global_config_size = sizeof(global_config) + 5;

using global_config_table = global_config;

#endif