#include <stdio.h>

int main(){
    int n , reversed = 0 , lastN ;
    printf("entrer un nomber ");
    scanf("%d",&n);
    for(int i = 0; i< n; i++){
        lastN = n % 10;
        reversed = reversed * 10 + lastN;
        n = n/10;
    }
    printf("reversed number is : %d",reversed);
    return 0;
}
