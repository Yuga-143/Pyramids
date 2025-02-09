#include <stdio.h> 

void simplePyramid(int n){
    
    for(int i=0;i<n;i++){
         for(int j=0;j<=i;j++){
              printf("* ");
              }
         printf("\n");
         } 
  }
  
void flippedSimplePyramid(int n){
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
}

void invertedPyramid(int n){
     for(int i=0;i<n;i++){
         for(int j=n;j>i;j--){
               printf("* ");
         }
         printf("\n");
         }
}

void flippedInvertedPyramid(int n){
    int x=0;
    for(int i=0;i<n;i++){
         for(int g=0;g<x;g++){
             printf(" ");
         } 
         for(int j=n;j>i;j--){
               printf("* ");
         }
         printf("\n");
         
         x=x+2;
         }
}

void triangle(int n){
    int y=n-1;    
    for(int i=0;i<n;i++){        
        for(int g=0;g<y;g++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        y=y-1;        
    }
}

void invertedTriangle(int n){
     int x=0;
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
}

void diamond(int n){
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
}

void halfDiamond(int n){
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
}

void flippedHalfDiamond(int n){
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
}

void hourGlass(int n){
    int x=0;
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
}

int main(){
    int pattern;
    int n;
    printf("Which pattern do you wants to print?\n\n");
    printf("1 ==>   simplePyramid\n2 ==>   flippedSimplePyramid\n3 ==>   invertedPyramid\n4 ==>   flippedInvertedPyramid\n5 ==>   triangle\n6 ==>   invertedTriangle\n7 ==>   diamond\n8 ==>   halfDiamond\n9 ==>   flippedHalfDiamond\n10==>   hourGlass\n\n");
    printf("Enter the number to choose the pattern:");
    scanf("%d",&pattern);
    printf("Enter the size of the pattern:");
    scanf("%d",&n);
    
    switch(pattern){
    case 1:
    simplePyramid(n);
    break;
    case 2:
    flippedSimplePyramid(n);
    break;
    case 3:
    invertedPyramid(n);
    break;
    case 4:
    flippedInvertedPyramid(n);
    break;
    case 5:
    triangle(n);
    break;
    case 6:
    invertedTriangle(n);
    break;
    case 7:
    diamond(n);
    break;
    case 8:
    halfDiamond(n);
    break;
    case 9:
    flippedHalfDiamond(n);
    break;
    case 10:
    hourGlass(n);
    break;
    default:
    printf("ERROR OCCURED. CHECK THE NUMBER YOU ENTERED");
}
    
    return 0;
    }
    
        
