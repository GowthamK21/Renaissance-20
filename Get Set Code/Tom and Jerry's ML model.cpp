#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,count=1,max=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]-1)
            count++;
        else
        {
            if(max<count)
                max=count;
            count=1;
        }
    }
    if(count>max)
        cout<<count;
    else
        cout<<max;
   
    return 0;
}
