#include <stdio.h>

int main(){
    char vocales[5]={'a','e','i','o','u'};
    char *ptr;
    ptr=&vocales[4];
    *ptr='x';
    for(int i=0;i<5;i++){
        printf("vocales[%d] %c\n ",i,vocales[i]);
        printf("%c\n ",*(ptr++));
    }
    return 0;
}