#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,two=0,four=0;
	cin>>n;
	map<int,int>m;
	for(i=0;i<n;i++)
	{
		int a;
		cin>>a;
		m[a]++;
		if(m[a]%2==0)two++;
		if(m[a]%4==0)four++;
	}
	int t,l;
	char c;
	cin>>t;
	while(t--)
	{
		cin>>c>>l;
		if(c=='+'){
				m[l]++;
			if(m[l]%2==0)two++;
			if(m[l]%4==0)four++;
		}
		else{
			m[l]--;
			if(m[l]%2==1)two--;
			if(m[l]%4==3)four--;

		}
		if(four>=1&&two>=4)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
