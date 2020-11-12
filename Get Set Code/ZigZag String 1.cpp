#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    string s;
    int nRows;
    cin>>s>>nRows;
    if(nRows==1) {
        cout<<s;
        return 0;    
    }
    string temp[nRows];
    int idx=-1;
    int step=1;
    for(int i=0;i<s.size();i++){
        idx +=step;
        if(idx==nRows){
            idx=nRows-2;
            step=-1;
        }
        else if(idx==-1){
            idx=1;
            step=1;
        }
        temp[idx] +=s[i];
    } 
    string ret;
    for(int i=0;i<nRows;i++) 
        ret+=temp[i];
    cout<<ret;
    return 0;
}
