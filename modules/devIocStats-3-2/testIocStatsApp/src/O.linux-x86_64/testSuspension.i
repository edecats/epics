# 1 "../testSuspension.st"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "../testSuspension.st"
program testSuspension("")

option -c;

%%#include "epicsAssert.h"

ss testSuspension
{
 state testSuspensionInit
 {
     when (delay(0.1)) {
  assert(0);

     } state testSuspensionInit
 }
}
exit{}
