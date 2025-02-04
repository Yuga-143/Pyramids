#include <stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int x =(n-1)*2;
    
    for(int i=0;i<n;i++){
         for(int g=0;g<x;g++){
               printf(" ");
               }
         for(int j=0;j<=i;j++){
              printf("* ");
              }
         x=x-2;
         printf("\n");
         }
      return 0;
      }
