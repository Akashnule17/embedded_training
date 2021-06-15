/* factorial program */

#include<stdio.h>   // standard for getting input and output 

int main()  
 {
 //program statements starts here 
   int n=6,result=1;     // declaring two "int" variables as "n" and "result" 
   while(n!=0)          // checking the condition equals to zero if yes go to output 
   {
     result = result*n;      //multipling the result with n 
     n--;                   //post decrementing 
   }
      
       /*output*/
  printf("%d\n",result);        // printing the factorial result 
  return 0;                    // returing the integer value to zero 
  
 }        

