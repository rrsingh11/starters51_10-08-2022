#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,count=0;
	    cin >> n;
	    while(n != 0)
        {
            n = n&n-1;
            count++;
        }
	    cout << count-1 << endl;
	}
	return 0;
}
