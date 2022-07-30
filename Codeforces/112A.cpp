#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	string a, b;  
	int res = 0; 

	cin >> a >> b;

	transform(a.begin(), a.end(), a.begin(), ::tolower); 
	transform(b.begin(), b.end(), b.begin(), ::tolower); 

	
	if(a < b) {
		res = -1;
	} else if( b < a) {
		res = 1; 
	}

	printf("%d\n", res);

	
	return 0; 
}