#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int n,m,a[100002],x,y,cnt=0,cnt2=0,f=0;
bool ck=false;
signed main () {
	cin>>m>>n;
	for (int i=1;i<=n;i++) {
		cin>>x>>y;a[x]++;a[y]++;
	}
	for (int i=1;i<=m;i++) {
		if (a[i]==1) cnt++;
		else if (a[i]==2) cnt2++;
		else if (a[i]==m-1) f=1;
	}
	if (cnt==2&&cnt2==m-2) {
		cout<<"bus topology";ck=true;
	}
	if (cnt2==m) {
		cout<<"ring topology";ck=true;
	}
	if (f=1&&cnt==m-1) {
		cout<<"star topology";ck=true;
	}
	if (ck==false) cout<<"unknown topology";
}
						 	 	  		     		 			 	  	
