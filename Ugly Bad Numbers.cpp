#include <iostream>
#include<limits.h>
using namespace std;
int a[10000];
int actr = 0;
 
void solve(int t){
    while(t--){
        int a;
        cin>>a;
        if(a==1){
            cout<<"-1";
        }
        else{
            cout<<"2";
            for(int i=0;i<a-1;i++){
                cout<<"3";
            }
        }
        cout<<endl;
    }
    return;
}
 
 
int main(){
    int test;
    cin>>test;
    solve(test);
    return 0;
}
