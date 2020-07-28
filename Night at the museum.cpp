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
int main()
{
    char s[1000];
    int  rotation=0,flag,difference,i;
    cin>>s;
    flag=97;
    for(i=0;i<strlen(s);i++){
        difference=abs(flag-s[i]);
        if(difference>13){
            difference=26-difference;
        }
        rotation+=difference;
        flag=s[i];
    }
    cout<<rotation<<endl;
    return 0;
}
