/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int x=1;
   for(int y=1;(y<=9&&x<=9);y++){
       printf("%d*%d=%d\t",x,y,x*y);
       if(y==9){
           x++;
           y=0;
           printf("\n");
       }
   }
        
    
    return 0;
}
