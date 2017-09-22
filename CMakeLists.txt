cmake_minimum_required(VERSION 2.8)
project(predict)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wall -Wno-unused-variable -pthread")

include_directories("./include")
include_directories("./caffe_predict")

add_library(ka-predict SHARED
    caffe_predict/PredictCaffeImpl.cpp
)
