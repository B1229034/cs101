/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int n = 7831045;
    int unit = (n / 1)% 10;
    int ten = (n / 10)% 10;
    int hund = (n / 100)% 10;
    int thou = (n / 1000)% 10;
    int above = (n / 10000);
    printf("%d%d%d%d%d",above,unit,hund,ten,thou);
    
    return 0;
}
