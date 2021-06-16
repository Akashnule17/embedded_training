#include<stdio.h>
int main()
{
int a=2;
int b=1;
int x;

x=(a++ && (!b) && b|| ++a);
printf("%d", x);
return 0;
}
