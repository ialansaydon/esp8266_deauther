/*
   Copyright (c) 2020 Stefan Kremser (@Spacehuhn)
   This software is licensed under the MIT License. See the license file for details.
   Source: github.com/spacehuhn/esp8266_deauther
 */

#pragma once

#include "StringList.h"
#include "MACList.h"

typedef struct result_filter_t {
    uint16_t          channels;
    const StringList* ssids;
    const MACList   * bssid;
    const StringList* vendors;
} result_filter_t;