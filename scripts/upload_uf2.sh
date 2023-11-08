#!/bin/bash

media_folder="/media/$(echo $HOME | rev | cut -d / -f1 | rev)"
pico_folder="${media_folder}/RPI-RP2"

if [ ! -f "liac.uf2" ]; then
    echo "Error: Cannot find file liac.uf2 ... Please, build first."
    exit 1
fi

if [ -d "$pico_folder" ]; then
    cp liac.uf2 "$pico_folder"
else
    echo "Error: Cannot detect pico..."
    exit 2
fi
