#!/bin/sh 

find . -type f -name "*.sh" | awk -F"/" '{print $NF}' | rev | cut -c 4- | rev 
