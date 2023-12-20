/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    double PI =4.0;
    double epsilon=1e-5;
    double term=0.0;
    for(int x=3; fabs(term)>epsilon || x%2==1;x+=2){
        term=4.0/x;
        if(x/2%2==0){
            PI+=term;
        }
        else{
            PI-=term;
        }
    }
    printf("計算出的PI值: %.5f\n", PI);
    
    return 0;
}
