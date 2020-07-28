#include <algorithm>
#include <assert.h>
#include <bitset>
#include <chrono>
#include <cstring>
#include <functional>
#include <iostream>
#include <istream>
#include <map>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <array>
#include <complex>

using namespace std;
vector<int> v[2001];
int mx=-1;
void dfs(int x,int level){
    mx=max(mx,level);
    for(int i=0;i<v[x].size();i++){
        dfs(v[x][i],level+1);
    }
}
int main(){
    int n,i,x;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++){
        cin>>x;
        a[i]=x;
        if(x!=-1)v[x].push_back(i);
        else v[0].push_back(i);
    }
    for(i=0;i<v[0].size();i++){
        dfs(v[0][i],1);
    }
    cout<<mx<<endl;
    return 0;
}
