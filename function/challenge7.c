#include <stdio.h>
#include <string.h>

void reversedchar(char str[]){
    int start = 0;
    int end = strlen(str-1);
    char tmp;
    while(start<end){
        tmp = str[start];
        str[start] = str[end];
        str[end] = str[start];
        start++;
        end--;
    }
    
}

int main(){
    char world[100] ="helloworld";
    reversedchar(world);
    printf("%s\n",world);
    return 0;
}