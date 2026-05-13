#include <stdio.h>

int main(){
    int vec[5]=(2,4,6,8,10);
    int *ptr;
    ptr=&vec[0];
    // printf("%d", ptr);
    for(int i=0;i<5;i++){
        printf("%d ",vec[i]);
        printf("%d\n ",*ptr++i);
    }
    return 0;
}
