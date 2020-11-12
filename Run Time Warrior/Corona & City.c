#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int m,n;
    int i,j,count_aff=0,count_free=0,count_dur =0;
    int a[50][50];
    int edge_flag=0,rot = 0,rot1 = 0;
    scanf("%d%d",&m,&n);
    // printf("%d%d\n",m,m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] == 1 )
                count_free++;
            else if(a[i][j] == -1)
                count_aff++;
        }
    }
    printf("%d,%d\n",count_free,count_aff);
    
    i=0;j=0;    
    do
    {
        // printf("(%d,%d)\n",i,j);
        
        // printf("\n%d",a[i][j]);
        if(a[i][j] == 1){
                rot = rot - 90 ;
                rot1 = rot1 -90;
                a[i][j] = -1;
                count_dur++;
        }
        else if(a[i][j] == -1)
        {
            rot = rot +90;
            rot1 = rot1 +90;
        }
        
        rot = rot + 360;
        
        rot = rot % 360;
        // printf("\n%d\n",rot) ;
        switch(rot)
        {
            case 0:
                i++;
                j++;
                // printf("\n%d%d ------1\n",i,j);
                break;
                    
            case 90:
                i++;
                j--;
                // printf("\n%d%d ------2\n",i,j);
                break;
            
            case 180:
                i--;
                j--;
                // printf("\n%d%d -----3\n",i,j);
                break;
                
            case 270:
                i--;
                j++;
                // printf("\n%d%d ------4\n",i,j);
                break;
                
        }
        if( i == 0 || j == 0 || i == m || j == n){ 
            if(rot1 < 0){
                rot = rot - 90;
            }
            else if (rot1>= 0){
                rot = rot +90;
            }
            edge_flag ++;
        }
    }
    while(!(( i == 0 && j==0 ) ||( i == m && j==0 )||( i == 0 && j==n )||( i == m && j==n )||edge_flag == 2));
    
    // for(i=0;i<m;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    
    count_free = 0 ;
    count_aff = 0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] == 1 )
                count_free++;
            else if(a[i][j] == -1)
                count_aff++;
        }
    }
    printf("%d\n",count_dur);
    printf("%d,%d",count_free,count_aff);
}
