cmake_minimum_required(VERSION 3.15)
project(SVG_Creator)

set(CMAKE_CXX_STANDARD 14)

add_executable(SVG_Creator main.cpp Formes/Rectangle.cpp Formes/Rectangle.h Point.cpp Point.h Formes/Segment.cpp Formes/Segment.h Formes/Polygone.cpp Formes/Polygone.h Formes/Circle.cpp Formes/Circle.h Color.cpp Color.h Forme.cpp Forme.h)