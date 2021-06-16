#include<stdio.h>
int main()
{
int x=10,y=3;
{
  int x=100,z=10;
  printf("%d %d",x,z);
 }
  
 printf("%d%d",x,z);
 
 }
 
 
 //output:
 
 /*error: ‘z’ undeclared (first use in this function)
   10 |  printf("%d%d",x,z);
      |                  ^
program1.c:10:18: note: each undeclared identifier is reported only once for each function it appears in */

