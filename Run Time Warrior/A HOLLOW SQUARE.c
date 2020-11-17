//coded by Prasanna 
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
            if(i<=n&&j<=n&&i+j<=n+1)
                printf("%d ",i<j?i:j);
            else if(i<=n&&j>n&&(2*n-j+1)+i<=n+1)
                printf("%d ",(2*n-j+1)<i?(2*n-j+1):i);
            else if(i>n&&j<=n&&(2*n-i+1)+j<=n+1)
                printf("%d ",(2*n-i+1)<j?(2*n-i+1):j);
            else if(i>n&&j>n&&(2*n-i+1)+(2*n-j+1)<=n+1)
                printf("%d ",(2*n-i+1)<(2*n-j+1)?(2*n-i+1):(2*n-j+1));
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
