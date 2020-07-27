#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    string t;
    cin>>s;
    if(s.size()<26){
        cout<<"-1"<<endl;
        return;
    }
    char c = 'a';
    for(int i=0;i<s.size();i++){
        if(s[i] <= c){
            t.push_back(c);
            c++;
        }
        else{
            t.push_back(s[i]);
        }
        if(c > 'z'){
            cout<<t;
            for(int j = i+1;j<s.size();j++){
                cout<<s[j];
            }
            return;
        }
    }
    cout<<"-1"<<endl;
    return;
}

int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
