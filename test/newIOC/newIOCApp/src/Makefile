TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS BELOW HERE

# Use typed rset structure (see 3.16.1 release notes)
USR_CPPFLAGS += -DUSE_TYPED_RSET

# xxxRecord.h will be created from xxxRecord.dbd
DBDINC += xxxRecord

# Install xxxSupport.dbd into <top>/dbd
DBD += xxxSupport.dbd

# Build an IOC support library
LIBRARY_IOC += newIOCSupport

# Compile and add code to the support library
newIOCSupport_SRCS += xxxRecord.c
newIOCSupport_SRCS += devXxxSoft.c

# Link locally-provided code into the support library,
# rather than directly into the IOC application, that
# causes problems on Windows DLL builds
newIOCSupport_SRCS += dbSubExample.c
newIOCSupport_SRCS += devnewIOCVersion.c
newIOCSupport_SRCS += newIOCHello.c
newIOCSupport_SRCS += initTrace.c

newIOCSupport_LIBS += $(EPICS_BASE_IOC_LIBS)

# Auto-generate a header file containing a version string.
# Version comes from the VCS if available, else date+time.
GENVERSION = newIOCVersion.h
# Macro name
GENVERSIONMACRO = newIOCVERSION

# Build the IOC application
PROD_IOC = newIOC

# newIOC.dbd will be created and installed
DBD += newIOC.dbd

# newIOC.dbd will include these files:
newIOC_DBD += base.dbd
newIOC_DBD += xxxSupport.dbd
newIOC_DBD += dbSubExample.dbd
newIOC_DBD += devnewIOCVersion.dbd
newIOC_DBD += newIOCHello.dbd
newIOC_DBD += initTrace.dbd

# newIOC_registerRecordDeviceDriver.cpp derives from newIOC.dbd
newIOC_SRCS += newIOC_registerRecordDeviceDriver.cpp

# Build the main IOC entry point where needed
newIOC_SRCS_DEFAULT += newIOCMain.cpp
newIOC_SRCS_vxWorks += -nil-

# Link in the code from our support library
newIOC_LIBS += newIOCSupport
newIOC_LIBS += stream
newIOC_LIBS += asyn
newIOC_LIBS += modbus

# To build SNL programs, SNCSEQ must be defined
# in the <top>/configure/RELEASE file
ifneq ($(SNCSEQ),)
    # Build sncExample into newIOCSupport
    sncExample_SNCFLAGS += +r
    newIOC_DBD += sncExample.dbd
    # A .stt sequence program is *not* pre-processed:
    newIOCSupport_SRCS += sncExample.stt
    newIOCSupport_LIBS += seq pv
    newIOC_LIBS += seq pv

    # Build sncProgram as a standalone program
    PROD_HOST += sncProgram
    sncProgram_SNCFLAGS += +m
    # A .st sequence program *is* pre-processed:
    sncProgram_SRCS += sncProgram.st
    sncProgram_LIBS += seq pv
    sncProgram_LIBS += $(EPICS_BASE_HOST_LIBS)
endif

# Link QSRV (pvAccess Server) if available
ifdef EPICS_QSRV_MAJOR_VERSION
    newIOC_LIBS += qsrv
    newIOC_LIBS += $(EPICS_BASE_PVA_CORE_LIBS)
    newIOC_DBD += PVAServerRegister.dbd
    newIOC_DBD += qsrv.dbd
endif

# Finally link IOC to the EPICS Base libraries
newIOC_LIBS += $(EPICS_BASE_IOC_LIBS)

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD EXTRA GNUMAKE RULES BELOW HERE

# Explicit dependency needed for generated header file
devnewIOCVersion$(DEP): $(COMMON_DIR)/$(GENVERSION)
