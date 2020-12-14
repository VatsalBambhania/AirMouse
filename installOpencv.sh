#!/bin/bash

cd opencv
cp opencv /usr/local/include -r
cp opencv2 /usr/local/include -r
cd lib
cp . /usr/local/lib -r
cd ..
cd ..
rm opencv -rf