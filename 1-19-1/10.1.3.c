/*
From:ITC

Simple type defects
10.1
bool
10.1.3
Bool type variable increment
*/
#include <stdio.h>
#include <xkeycheck.h>
#include<stdbool.h>                                                                            
bool f(int x, int y) {
 if (x > y) {
  return true;
 }
 else
  return false;
}                                                                                                           
void bool_003() {
 int x = 3;
 bool y = f(1, 2);
 x=y++;/*Tool should detect this line as error*/ /*ERROR:Simple type error*/
}    