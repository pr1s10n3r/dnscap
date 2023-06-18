# DnsCap

## Dependencies

1. [libuv](https://libuv.org/) as asynchronous runtime.
2. [spdlog](https://github.com/gabime/spdlog) for logging.
3. [libpcap](https://www.tcpdump.org/) for packets capture.

## Install Third-Party Dependencies

```shell
git submodule update --init
```

## Build using CMake

```shell
# Create build directory
mkdir cmake-build-debug

# Generate build files
cmake -S . -B ./build

# Build
cmake --build ./cmake-build-debug --config [Debug|Release] -j
```

## Usage

_TODO_
