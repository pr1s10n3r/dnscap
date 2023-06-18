cmake_minimum_required(VERSION 3.25)
project(dnscap
  VERSION 1.0.0
  DESCRIPTION "Asynchronous DNS packets sniffer"
  HOMEPAGE_URL https://astagg.me
  LANGUAGES CXX)

add_subdirectory(thirdparty/libuv)

add_subdirectory(src)
