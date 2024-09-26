#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    char days[7][20] = {"monday","tuesday","wednesday","tuersday","friday","saturday","sunday"};

    srand(time(NULL));  
    int r = rand() % 7;

    printf("day %s ",days[r]);
    return 0;     

}