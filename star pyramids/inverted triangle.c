#include <stdio.h>
int main(){
     int n; 
     int x=0;
     printf("Enter the number:");
     scanf("%d",&n);
     
     for(int i=0;i<n;i++){
          for(int g=0;g<x;g++){
                printf(" ");
                }
          for(int j=n;j>i;j--){
               printf("* ");
               }
          printf("\n");
          x=x+1;
          }
          return 0;
          }
