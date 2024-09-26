#include <stdio.h>

int main(){
    int t[]={1, 2, 3, 4, 5};
    for(int i=0;i<5;i++){
        printf("t[%d] = %d\n",i+1,t[i]);
    }
    return 0;
}