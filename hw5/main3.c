/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int z = 0;
    int x = 1;

    for (int y = 1, i = 1; y <= 9,i <= 81;y++,i++) {
        printf("%d*%d=%d\t", x, y, x * y);
        z++;
        if (z % 9 == 0) {
            printf("\n");
            x++;  
            z = 0; 
            y = 0;
        }
    }

    return 0;
}

