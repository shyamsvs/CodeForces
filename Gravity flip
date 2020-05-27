#include<iostream>
using namespace std;
int main(){
    int cols;
    cin>>cols;
    int hei[cols];
    for(int i=0;i<cols;i++){
        cin>>hei[i];
    }
    for(int i=0;i<cols-1;i++){
        for(int j =i+1;j<cols;j++){
            if(hei[i] > hei[j]){
                int temp;
                temp = hei[i];
                hei[i] = hei[j];
                hei[j] = temp;
            }
        }
    }
    for(int i=0;i<cols;i++){
        cout<< hei[i]<<" ";
    }
    return 0;
}
