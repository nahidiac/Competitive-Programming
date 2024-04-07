#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t; 
	cin >> t; 
	string s; 

	while(t--)
	{
		cin >> s; 
		transform(s.begin(), s.end(), s.begin(), ::toupper); 

		if(s == "YES") cout << "YES\n";
		else cout << "NO\n"; 
	}

	return 0;
}