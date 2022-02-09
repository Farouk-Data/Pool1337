#!/bin/sh 

ifconfig | grep "ether " | awk '{print $NF}' 
