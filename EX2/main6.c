/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=1599;
    if(i<=1500){
        printf("70元");
    }
    else{
        int n=i-1500;
        if(n%100){
            int h=((n/100)+1)*10;
            printf("%d 元", 70+h);
        }
        else{
            printf("%d 元", 70+(n/100)*10);
        }
        
    }

    return 0;
}
