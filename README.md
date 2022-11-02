JAMMA Game Boilerplate
======================

CMake
------


Set JAMMAGAME_SDK to the path of the jammagame project

cmake .. -DCMAKE_BUILD_TYPE=Debug -DJAMMAGAME_SDK=/home/ade/source/jammagame/jammagame   

####STM32 CMake configuration

#####Build for internal flash

```bash
mkdir build.stm32.debug
cd build.stm32.debug
cmake .. -DCMAKE_BUILD_TYPE=Debug -DJAMMAGAME_SDK=/home/ade/source/jammagame/jammagame -DCMAKE_TOOLCHAIN_FILE=/home/ade/source/jammagame/jammagame/cmake/toolchain_stm32.cmake -D TOOLCHAIN_PREFIX=/home/ade/armtools/
```

#####Build for external executable

```bash
mkdir build.cart
cd build.cart
cmake .. -DCMAKE_BUILD_TYPE=Debug -DJAMMAGAME_SDK=/home/ade/source/jammagame/jammagame -DJAMMACART=1 -DCMAKE_TOOLCHAIN_FILE=/home/ade/source/jammagame/jammagame/cmake/toolchain_stm32.cmake -D TOOLCHAIN_PREFIX=/home/ade/armtools/ 
```


####STM32 Manual Build

```
CC=~/armtools/bin/arm-none-eabi-gcc CPP=~/armtools/bin/arm-none-eabi-g++ AS=~/armtools/bin/arm-none-eabi-as make
```


Manually Build Assets
----------------------

```bash
cd assets
gap assets.gap 
```
