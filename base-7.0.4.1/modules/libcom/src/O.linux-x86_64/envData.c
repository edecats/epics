/* Generated file envData.c
 *
 * Created from
 *   /opt/epics/base-7.0.4.1/modules/libcom/src/env/envDefs.h
 *   /opt/epics/base-7.0.4.1/configure/CONFIG_ENV
 *   /opt/epics/base-7.0.4.1/configure/CONFIG_SITE_ENV
 */

#include <stddef.h>
#define epicsExportSharedSymbols
#include "envDefs.h"

const ENV_PARAM EPICS_CA_ADDR_LIST =
    {"EPICS_CA_ADDR_LIST", ""};
const ENV_PARAM EPICS_CA_CONN_TMO =
    {"EPICS_CA_CONN_TMO", "30.0"};
const ENV_PARAM EPICS_CA_AUTO_ADDR_LIST =
    {"EPICS_CA_AUTO_ADDR_LIST", "YES"};
const ENV_PARAM EPICS_CA_REPEATER_PORT =
    {"EPICS_CA_REPEATER_PORT", "5065"};
const ENV_PARAM EPICS_CA_SERVER_PORT =
    {"EPICS_CA_SERVER_PORT", "5064"};
const ENV_PARAM EPICS_CA_MAX_ARRAY_BYTES =
    {"EPICS_CA_MAX_ARRAY_BYTES", "16384"};
const ENV_PARAM EPICS_CA_AUTO_ARRAY_BYTES =
    {"EPICS_CA_AUTO_ARRAY_BYTES", "YES"};
const ENV_PARAM EPICS_CA_MAX_SEARCH_PERIOD =
    {"EPICS_CA_MAX_SEARCH_PERIOD", "300.0"};
const ENV_PARAM EPICS_CA_NAME_SERVERS =
    {"EPICS_CA_NAME_SERVERS", ""};
const ENV_PARAM EPICS_CA_MCAST_TTL =
    {"EPICS_CA_MCAST_TTL", "1"};
const ENV_PARAM EPICS_CAS_INTF_ADDR_LIST =
    {"EPICS_CAS_INTF_ADDR_LIST", ""};
const ENV_PARAM EPICS_CAS_IGNORE_ADDR_LIST =
    {"EPICS_CAS_IGNORE_ADDR_LIST", ""};
const ENV_PARAM EPICS_CAS_AUTO_BEACON_ADDR_LIST =
    {"EPICS_CAS_AUTO_BEACON_ADDR_LIST", ""};
const ENV_PARAM EPICS_CAS_BEACON_ADDR_LIST =
    {"EPICS_CAS_BEACON_ADDR_LIST", ""};
const ENV_PARAM EPICS_CAS_SERVER_PORT =
    {"EPICS_CAS_SERVER_PORT", ""};
const ENV_PARAM EPICS_CA_BEACON_PERIOD =
    {"EPICS_CA_BEACON_PERIOD", "15.0"};
const ENV_PARAM EPICS_CAS_BEACON_PERIOD =
    {"EPICS_CAS_BEACON_PERIOD", ""};
const ENV_PARAM EPICS_CAS_BEACON_PORT =
    {"EPICS_CAS_BEACON_PORT", ""};
const ENV_PARAM EPICS_BUILD_COMPILER_CLASS =
    {"EPICS_BUILD_COMPILER_CLASS", "gcc"};
const ENV_PARAM EPICS_BUILD_OS_CLASS =
    {"EPICS_BUILD_OS_CLASS", "Linux"};
const ENV_PARAM EPICS_BUILD_TARGET_ARCH =
    {"EPICS_BUILD_TARGET_ARCH", "linux-x86_64"};
const ENV_PARAM EPICS_TZ =
    {"EPICS_TZ", "CST6CDT,M3.2.0/2,M11.1.0/2"};
const ENV_PARAM EPICS_TS_NTP_INET =
    {"EPICS_TS_NTP_INET", ""};
const ENV_PARAM EPICS_IOC_IGNORE_SERVERS =
    {"EPICS_IOC_IGNORE_SERVERS", ""};
const ENV_PARAM EPICS_IOC_LOG_PORT =
    {"EPICS_IOC_LOG_PORT", "7004"};
const ENV_PARAM EPICS_IOC_LOG_INET =
    {"EPICS_IOC_LOG_INET", ""};
const ENV_PARAM EPICS_IOC_LOG_FILE_LIMIT =
    {"EPICS_IOC_LOG_FILE_LIMIT", "1000000"};
const ENV_PARAM EPICS_IOC_LOG_FILE_NAME =
    {"EPICS_IOC_LOG_FILE_NAME", ""};
const ENV_PARAM EPICS_IOC_LOG_FILE_COMMAND =
    {"EPICS_IOC_LOG_FILE_COMMAND", ""};
const ENV_PARAM IOCSH_PS1 =
    {"IOCSH_PS1", "epics> "};
const ENV_PARAM IOCSH_HISTSIZE =
    {"IOCSH_HISTSIZE", "50"};
const ENV_PARAM IOCSH_HISTEDIT_DISABLE =
    {"IOCSH_HISTEDIT_DISABLE", ""};

const ENV_PARAM* env_param_list[] = {
    &EPICS_CA_ADDR_LIST, &EPICS_CA_CONN_TMO, &EPICS_CA_AUTO_ADDR_LIST,
    &EPICS_CA_REPEATER_PORT, &EPICS_CA_SERVER_PORT,
    &EPICS_CA_MAX_ARRAY_BYTES, &EPICS_CA_AUTO_ARRAY_BYTES,
    &EPICS_CA_MAX_SEARCH_PERIOD, &EPICS_CA_NAME_SERVERS,
    &EPICS_CA_MCAST_TTL, &EPICS_CAS_INTF_ADDR_LIST,
    &EPICS_CAS_IGNORE_ADDR_LIST, &EPICS_CAS_AUTO_BEACON_ADDR_LIST,
    &EPICS_CAS_BEACON_ADDR_LIST, &EPICS_CAS_SERVER_PORT,
    &EPICS_CA_BEACON_PERIOD, &EPICS_CAS_BEACON_PERIOD,
    &EPICS_CAS_BEACON_PORT, &EPICS_BUILD_COMPILER_CLASS,
    &EPICS_BUILD_OS_CLASS, &EPICS_BUILD_TARGET_ARCH, &EPICS_TZ,
    &EPICS_TS_NTP_INET, &EPICS_IOC_IGNORE_SERVERS, &EPICS_IOC_LOG_PORT,
    &EPICS_IOC_LOG_INET, &EPICS_IOC_LOG_FILE_LIMIT,
    &EPICS_IOC_LOG_FILE_NAME, &EPICS_IOC_LOG_FILE_COMMAND, &IOCSH_PS1,
    &IOCSH_HISTSIZE, &IOCSH_HISTEDIT_DISABLE, NULL
};
