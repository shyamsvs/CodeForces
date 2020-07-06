#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	int a;
	cin>>a;
	int val[a];
	for(int i=0;i<a;i++)cin>>val[i];
	int left=0;
	int right = a-1;
	int s1 = 0;
	int s2 = 0;
	int play=1;
	bool first = true;
	while(left<=right){
		if(first){
			if(val[left] > val[right]){
				s1 += val[left];
				left++;
			}		
			else{
				s1 += val[right];
				right--;
			}
			first = false;
		}
		else{
			if(val[left] > val[right]){
				s2 += val[left];
				left++;
			}		
			else{
				s2 += val[right];
				right--;
			}
			first = true;
		}
	}
	cout<<s1<<" "<<s2<<endl;
	return;
}
int main(){
	int test;
	//cin>>test;
	//while(test--)
	solve();
	return 0;
}
