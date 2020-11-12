#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int i,j,k,l,n,c=65;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i+1;j--)
            printf(" ");
        c=c+i;
        for(k=0;k<=i;k++)
        {
            if(i%2==1)
                printf("%c",c--);
            else 
                printf("%c",(c--)+32);
        }
        c++;
        for(l=0;l<i;l++)
        {
            if(i%2==1)
                printf("%c",++c);
            else 
                printf("%c",(++c)+32);
        }
        printf("\n");
        c=65;
    }
    c=65;
    for(i=n-1;i>=1;i--)
    {
        c=c+i-1;
        for(j=0;j<n-i;j++)
            printf(" ");
        for(j=i;j<=2*i-1;j++)
        {
            if(i%2==1)
                printf("%c",(c--)+32);
            else 
                printf("%c",c--);
        }
        c++;
        for(j=0;j<i-1;j++)
        {
            if(i%2==1)
                printf("%c",(++c)+32);
            else 
                printf("%c",++c);
        }
        printf("\n");
        c=65;
    }
    return 0;
}
