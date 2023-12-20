/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=12345;
    int temp;
    int thousands=(i/1000)%10;
    int units=i%10;
    temp=thousands;
    thousands=units;
    units=temp;
    int result=((i/10000)*10000)+(thousands*1000)+((i/100)%10*100)+((i/10)%10*10)+units;
    printf("原始数字:%d\n", i);
    printf("更改後的數字:%d\n",result);

        
    
    return 0;
}
