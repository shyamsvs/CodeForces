#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n,k;
		cin >> n >> k;
		if(n%2==0)
		{
			cout << n+2*k << endl;
			continue;
		}
		int p = 0;
		for(int i = n; i>=2; i--)
			if(n%i==0)
		    	p = i;
		cout << n+p+2*(k-1) << endl;
	}
	return 0;
}
