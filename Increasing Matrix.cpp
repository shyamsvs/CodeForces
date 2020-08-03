#include <algorithm>
#include <assert.h>
#include <bitset>
#include <chrono>
#include <cstring>
#include <functional>
#include <iostream>
#include <istream>
#include <map>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <array>
#include <complex>

using namespace std;
#define ll long long
int c[3];

void solve(){
  int m,n;
  cin>>m>>n;
  vector<vector<int>> matrix(m, vector<int> (n));
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>matrix[i][j];
    }
  }
  for(int i=m-1;i>=0;--i){
    for(int j=n-1;j>=0;--j){
	  if(matrix[i][j] != 0){
          continue;
      }
      else{
        int check;
        check = matrix[i][j+1] - 1;
        if(check >= matrix[i+1][j])
          check = matrix[i+1][j] - 1;
        matrix[i][j] = check;
      }
    }
  }
    // for(int i=0;i<m;i++){
    // for(int j=0;j<n;j++){
	// 	cout<<matrix[i][j]<<" ";
	// }
	// cout<<endl;
	// }


  for(int i=m - 1;i>=0;--i){
	  for(int j=n- 1;j>=0;--j){
		   if(i!= 0 && j!=0){
			   if((matrix[i][j] <= matrix[i][j-1]) || (matrix[i][j] <= matrix[i-1][j])){
				//  cout<<i<<" "<<j<<endl;
		  cout<<"-1"<<endl;
		  return;
			   }
	  }
	  }
  }

  int sum = 0;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      sum += matrix[i][j];
    }
  }
  cout<<sum<<endl;
  return; 
}

int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
