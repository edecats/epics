# 1 "../testCpuUse.st"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "../testCpuUse.st"
program testCpuUse("")

option -c;

%%#include "math.h"

int i;

ss testCpuUse
{
 state testCpuUseInit
 {
     when (delay(0.1)) {
  for (i=0; i<100000; i++) {
      sqrt(i);
  }

     } state testCpuUseInit
 }
}
exit{}
