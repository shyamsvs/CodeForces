#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    //cout<<arr<<endl;
    int count = 0;
    for(int i=0;i<n-2;i++){
        if(arr[i] == 'x' && arr[i+1] == 'x' && arr[i+2] == 'x'){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
