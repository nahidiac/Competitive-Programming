#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string str; 
	cin >> str; 

	int sz = str.size(), upper = 0, lower = 0; 

	for(int i = 0; i < sz; i++) {
		if(isupper(str[i])) {
			upper++; 
		} else {
			lower++; 
		}
	}

	if(lower >= upper) {
		transform(str.begin(), str.end(), str.begin(), ::tolower); 
	} else {
		transform(str.begin(), str.end(), str.begin(), ::toupper); 
	}

	cout << str << '\n'; 
	
	return 0; 
}