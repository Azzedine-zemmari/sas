#include <stdio.h>
#include <string.h>

void reversedchar(char str[]){
    int start = 0;
    int end = strlen(str)-1;
    char tmp;
    while(start<end){
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    
}

int main(){
    char world[] ="azzedine";
    reversedchar(world);
    printf("%s\n",world);
    return 0;
}