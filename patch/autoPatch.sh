#!/bin/bash

if [ ! -d device ];then
    echo "Error! no device dir"
    exit 1
fi

echo "========= Patch start ============"

# patch build
cd build/
patch -p1 < ../hardware/interfaces/test/patch/build.diff
cd - > /dev/null 2>&1

# patch device
cd device/
patch -p1 < ../hardware/interfaces/test/patch/device.diff
cd - > /dev/null 2>&1

# patch system
cd system/
patch -p1 < ../hardware/interfaces/test/patch/system.diff
cd - > /dev/null 2>&1

echo "========= Patch complete ============"
