#include <stdio.h>
int main(){
     int n;
     printf("Enter the number:");
     scanf("%d",&n);
     int m=n-1;
     
     for(int i=0;i<=n;i++){
           for(int j=0;j<i;j++){
                 printf("* ");
                 }
           
           printf("\n");
           
           }
      for(int i=0;i<=m;i++){
           for(int j=m;j>i;j--){
                 printf("* ");
                 }
            printf("\n");
            }
       return 0;
       }
