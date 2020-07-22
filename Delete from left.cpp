#include <bits/stdc++.h>
using namespace std;

#define ll long long
string a,b,c;
string answer;

void solve(){
	string x,y;
    cin>>x;
    cin>>y;
    int xlen = x.length() - 1;
    int ylen = y.length() - 1;
    int count = 0;
    while((xlen >= 0) && (ylen >= 0)){
        if(x[xlen--] == y[ylen--]){
            count++;
        }
        else{
            break;
        }
    }
    cout<<((x.length() - count) + (y.length() - count))<<endl;
    return; 
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
