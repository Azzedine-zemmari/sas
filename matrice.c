#include<stdio.h>
int main(){
   /* 2D array declaration*/
  int dep[2][3];
  for(int i = 0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("entrer valeur pour dep[%d][%d]",i,j);
        scanf("%d",&dep[i][j]);
    }
  }
   for(int i = 0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d ",dep[i][j]);
        if(j==2){
            printf("\n");
        }
    }}
   return 0;
}