#!/bin/bash
wget -qO /tmp/jackpot.so https://github.com/Yordanos111/alx-low_level_programming/tree/master/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=/tmp/jackpot.soi
