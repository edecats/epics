#!/bin/bash

dirs=(
	base
	modules/seq
	modules/autosave
	modules/devIocStats
	modules/asyn
	modules/dynamicAsyn
	modules/stream
	modules/modbus
	modules/ads	)

for d in ${dirs[@]}
do
	make -C $d $@
	if [ $? -ne 0 ]; then
		echo "ERROR: Build failed"
		pwd
		ls -al
		exit 1
	fi
done
