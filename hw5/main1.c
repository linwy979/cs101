/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n =7;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%2d", i);
        }
        printf("\n");
    }
        
    
    return 0;
}
