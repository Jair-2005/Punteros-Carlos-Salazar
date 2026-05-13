#include <stdio.h>
int main(){
    printf("This computing enviroment uses:\n");
    printf("%zu bytes for chars\n", sizeof(char));
    printf("%zu bytes for shorts\n", sizeof(short int));
    printf("%zu bytes for ints\n", sizeof(int));
    printf("%zu bytes for longs\n", sizeof(long int));
    printf("%zu bytes for long longs\n", sizeof(long long int));
    printf("%zu bytes for floats\n", sizeof(float));
    printf("%zu bytes for doubles\n", sizeof(double));
    printf("%zu bytes for pointers\n", sizeof(int *));
}