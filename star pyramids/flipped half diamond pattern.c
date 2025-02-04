#include <stdio.h>
int main(){
     int n;
     printf("Enter the number:");
     scanf("%d",&n);
     int x=(n-1)*2;
     int m=n-1;
     int y=2;
  
     
     for(int i=0;i<n;i++){
           for(int g=0;g<x;g++){
                 printf(" ");
                 }
            x=x-2;
           for(int j=0;j<=i;j++){
                 printf("* ");
                 }
           
           printf("\n");
           
           }
       for(int i=0;i<m;i++){
            for(int g=0;g<y;g++){
                  printf(" ");
                  }
           for(int j=m;j>i;j--){
                 printf("* ");
                 }
            y=y+2;
            printf("\n");
            
                }
       return 0;
       }
