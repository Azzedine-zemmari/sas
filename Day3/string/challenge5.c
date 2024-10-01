#include <stdio.h>
#include <string.h>
int main(){
char str[50] ;
printf("entrer string ");
gets(str);
char start = 0;
char end = strlen(str)-1;
while (start < end){
    char tmp = str[start];
    str[start] = str[end];
    str[end] = tmp;

    start++;
    end--;
}

printf("the reversed char now is %s ",str);
return 0;
}

