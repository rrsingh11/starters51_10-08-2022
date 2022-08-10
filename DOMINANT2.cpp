#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    unordered_map<int,int> mp;
	    int n,a,max=0,flag=0,temp;
	    cin >> n;
	    for(int i=0;i<n;i++)
	    {
	        cin >> a;
	        mp[a]++;
	        if(mp[a] > mp[max])
	        {
	            max = a;
	        }
	    }
	    temp = mp[max];
	    mp.erase(max);
	   // cout << "Max" << temp << endl;
	    for(auto it:mp)
	    {
	       // cout << it.first << " " << it.second;
	        if(it.second == temp)
	            flag = 1;
	    }
	    
	    cout << ((flag)?"NO":"YES")<< endl;

	}
	return 0;
}