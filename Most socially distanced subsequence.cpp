#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
   int n;
   int p[100005];
        scanf("%d",&n);
        for (int i=1;i<=n;i++)
        scanf("%d",&p[i]);
        vector<int> ans;
        for (int i=1;i<=n;i++)
        {
            if (i==1 || i==n || (p[i-1]<p[i])!=(p[i]<p[i+1]))
            ans.push_back(p[i]);
        }
        printf("%d\n",ans.size());
        for (int i:ans)
        printf("%d ",i);
        printf("\n");
   return;
}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
