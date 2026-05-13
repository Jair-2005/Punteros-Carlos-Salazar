#include <stdio.h>
int main(){
    char vocales[]={'a','e','i','o','u'};
    char *ptr;
    ptr=&vocales[0];
    for(int i=0;i<5;i++){
        printf("vocales[%d] %c\n ",i,vocales[i]);
        printf("%c\n ",*(ptr++));
    }
    return 0;
}