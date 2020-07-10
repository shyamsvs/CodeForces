#include <bits/stdc++.h>
using namespace std;

#define ll long long
string a,b,c;
string answer;

void dostuff(char todo){
	int i;
	bool cap = isupper(todo);
	todo = tolower(todo);
	for(i=0;i<a.length();i++){
		if(a[i] == todo){
			break;
		}
	}
	if(cap){
		answer.push_back(toupper(b[i]));
	}
	else{
		answer.push_back(b[i]);
	}
}


void solve(){
	cin>>a;
	cin>>b;
	cin>>c;
	for(int i=0;i<c.length();i++){
		if(isalpha(c[i])){
			dostuff(c[i]);
		}
		else{
			answer.push_back(c[i]);
		}
	}
	cout<<answer<<endl;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
