//codec by Prasanna
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
     int n,i,max,res=0;
    cin>>n;
    int a[n];
    cin>>a[0];
    max=a[0];
    res=res|a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
        res=res|a[i];
    }
    cout<<max<<" "<<res;
    return 0;
}
