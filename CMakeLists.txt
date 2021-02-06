cmake_minimum_required(VERSION 3.15)
project(SVG_Creator)

set(CMAKE_CXX_STANDARD 14)

add_executable(SVG_Creator main.cpp Formes/Rectangle/Rectangle.cpp Formes/Rectangle/Rectangle.h Utils/Point/Point.cpp Utils/Point/Point.h Formes/Polygone/Polygone.cpp Formes/Polygone/Polygone.h Formes/Forme.cpp Formes/Forme.h Draw/Draw.cpp Draw/Draw.h Formes/Circle/Circle.cpp Formes/Circle/Circle.h Formes/Line/Line.cpp Formes/Line/Line.h Utils/Color/Color.cpp Utils/Color/Color.h)