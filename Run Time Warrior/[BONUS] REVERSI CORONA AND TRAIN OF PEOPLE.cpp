#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /*Solution 1*/
    long int n,res;
    cin>>n;
    res = floor(sqrtl(n));
    cout << res << " " << n-res << endl;
    
    /*Solution 2*/
    // int n,c;
    // cin>>n;
    // int a[n+1];
    // for(int i=1;i<=n;i++)
    // {
    //     a[i]=1;
    // }
    // for(int i=2;i<=n;i++)
    // {
    //     for(int j=i;j<=n;j=j+i)
    //     {
    //         a[j]=a[j]?0:1;
    //         /*if(a[i]==0)
    //             a[i]=1;
    //         else
    //             a[i]=0;*/
    //     }
    // }
    // for(int i=1;i<=n;i++)
    // {
    //     if(a[i]==1)
    //         c++;
    // }
    // cout<<c<<" "<<n-c;
    
    /*Solution 3*/
    // long int n,c;
    // cin>>n;
    // long int a[n+1];
    // for(long int i=1;i<=n;i++)
    // {
    //     a[i]=1;
    // }
    // for(long int i=2;i<=n;i++)
    // {
    //     for(long int j=i;j<=n;j=j+i)
    //     {
    //         a[j]=a[j]?0:1;
    //         /*if(a[i]==0)
    //             a[i]=1;
    //         else
    //             a[i]=0;*/
    //     }
    // }
    // for(long int i=1;i<=n;i++)
    // {
    //     if(a[i]==1)
    //         c++;
    // }
    // cout<<c<<" "<<n-c;
    
    return 0;
}
