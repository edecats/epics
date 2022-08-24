#!../../bin/linux-x86_64/newIOC

#- You may have to change newIOC to something else
#- everywhere it appears in this file

< envPaths

cd "${TOP}"

## Register all support components
dbLoadDatabase "dbd/newIOC.dbd"
newIOC_registerRecordDeviceDriver pdbbase
# modbus specific stuff
drvAsynIPPortConfigure("M1833","192.168.1.64:502",0,0,0)
asynSetOption("M1833",0, "disconnectOnReadTimeout", "Y")
modbusInterposeConfig("M1833",0,5000,0)
drvModbusAsynConfigure("ReadInputRegister", "M1833", 0, 4, -1, 1, 0, 100, "ScandiCAT")
drvModbusAsynConfigure("WriteHoldingRegister", "M1833", 0, 6, -1, 1, 0, 100, "ScandiCAT")
drvModbusAsynConfigure("ReadInputRegisterFloat","M1833", 0, 4, -1, 2, 0, 100, "ScandiCAT")
drvModbusAsynConfigure("WriteHoldingRegisterFloat","M1833", 0, 16, -1, 2, 0, 100, "ScandiCAT")

## Load record instances
dbLoadRecords("db/scandinova.db")
#- Set this to see messages from mySub
#var mySubDebug 1

#- Run this to trace the stages of iocInit
traceIocInit

cd "${TOP}/iocBoot/${IOC}"
iocInit

## Start any sequence programs
#seq sncExample, "user=root"
