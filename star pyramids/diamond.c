#include <stdio.h>

int main(){
     int n;
     printf("Enter the number:");
     scanf("%d",&n);
     int x=n-1;
     
     int m=n-1;
     int y=1;
     int z=m;
     
     for(int i=0;i<n;i++){
          for(int g=0;g<x;g++){
                printf(" ");
                }
          for(int j=0;j<=i;j++){
               printf("* ");
          }
          x=x-1;
          printf("\n");
          }
          
     for(int i=0;i<m;i++){
          for(int g=0;g<y;g++){
               printf(" ");
               }
          y=y+1;
          for(int j=0;j<z;j++){
               printf("* ");
               }
          z=z-1;
          printf("\n");
          }
          return 0;
          }
          
