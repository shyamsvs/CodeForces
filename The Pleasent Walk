#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int n,k,a[maxn];
int main()
{
    cin>>n>>k;
    int res=0;
    for(int i=1,len;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(i==1 || a[i]==a[i-1]) len=1;
        else len++;
        res=max(len,res);
    }
    cout<<res<<endl;
}
