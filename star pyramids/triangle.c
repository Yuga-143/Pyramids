#include <stdio.h>


int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
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
   
    return 0;
}
