#!/bin/bash

wget -O /tmp/win.so https://github.com/Engedasew-Haile/alx-low_level_programming/tree/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
