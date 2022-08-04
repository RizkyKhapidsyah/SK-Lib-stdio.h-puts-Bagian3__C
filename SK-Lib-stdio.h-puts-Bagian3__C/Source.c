#include <stdio.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    int rc = puts("Hello World");

    if (rc == EOF) {
        perror("puts()"); // POSIX requires that errno is set
    }
        
    _getch();
    return 0;
}