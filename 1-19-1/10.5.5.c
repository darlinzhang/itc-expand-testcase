/*
From:ITC
10
Simple type defects
10.5
Use of Externally-Controlled Format String
10.5.5
Use of Externally-Controlled Format String
*/
#include <stdio.h>
void printWrapper(char *string) {
printf(string);
}
int string_001(int argc, char **argv) {
char buf[5012];
memcpy(buf, argv[1], 5012);
printWrapper(argv[1]);
return (0);
}
