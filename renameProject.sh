#!/bin/sh

rename ''s/$1/$2/'' *
sed -i ''s/$1/$2/g'' *.sln *.vcxproj* Makefile
