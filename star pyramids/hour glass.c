#include <stdio.h>

int main(){
    int n; 
    int x=0;
    printf("Enter the number:"); 
    scanf("%d",&n);
    int m=n-1;
    int s=m-1;
    int k=2;
    
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
      for(int i=0;i<m;i++){
           for(int g=0;g<s;g++){
                printf(" ");
                }
           s=s-1;
           for(int j=0;j<k;j++){
                printf("* ");
                }
           k=k+1;
           printf("\n");
           }

return 0;
          }
