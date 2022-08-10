#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c,d;
	    cin >> a >> b >> c >>d;
	    int p1 = a-c;
	    int p2 = b-d;
	    if(p1 < p2)
	        cout << "First" << endl;
	    else if(p1 > p2)
	        cout << "Second" << endl;
	    else
	        cout<< "Any" << endl;
	}
	return 0;
}
