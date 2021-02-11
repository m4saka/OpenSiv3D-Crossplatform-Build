#!/bin/bash
cp /mingw64/x86_64-w64-mingw32/include/msctf.idl .
patch -u < msctf.idl.diff
widl --win64 -h -o msctf.h msctf.idl
