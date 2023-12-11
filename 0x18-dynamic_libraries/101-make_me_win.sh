#!/bin/bash
wget -P /tmp https://github.com/iygeal/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libwinjack.so
export LD_PRELOAD=/tmp/libwinjack.so
