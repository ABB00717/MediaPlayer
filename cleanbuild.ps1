#!/bin/bash

rm -rf binary

mkdir binary
cd binary

cmake -G "Unix Makefiles" ..
make

cd ..