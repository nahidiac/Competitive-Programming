#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t, a, b, c; 
	cin >> t; 

	while(t--)
	{
		cin >> a >> b >> c; 
		if(a == b+c || b == c+a || c == a+b) cout << "YES\n"; 
		else cout << "NO\n"; 
	}


	return 0;
}