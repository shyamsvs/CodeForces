#include <bits/stdc++.h>
using namespace std;
int gl[50];
int glc = 0;
void solve(int t){
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int ans;
        ans = min(max((a*2),b),max(a,2*b));
        cout<<ans*ans;
        cout<<endl;
    }
    
}
int main(){
    int test;
    cin>>test;
    solve(test);
    return 0;
}
