#include<iostream>
#include<math.h>
using namespace std;
void solve(){
    int k,l,m,n,d;
    int count = 0;
    cin>>k >>l >>m >>n >>d;
    if(k == 1){
        cout<<d<<endl;
        return;
    }
    for(int i=1;i<=d;i++){
        if(i%k == 0 || i%l ==0 || i%m ==0 || i%n ==0){
            count++;
        }
    }
    cout<<count;
    cout << endl;
}
int main(){
    solve();
    return 0;
}
