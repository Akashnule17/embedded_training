#include <stdio.h> 
void main() 
{ 
    int n,sum=0,num=10; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
    
    while(num/10 != 0) 
     { 
        if(n==0) 
        { 
            num = sum; 
            n = sum; 
            sum = 0; 
        } 
        else 
        { 
             sum += n%10 ; 
             n /= 10; 
        } 
    } 
    printf("%d\n", num);
    
}

