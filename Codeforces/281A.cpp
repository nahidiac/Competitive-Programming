#include <bits/stdc++.h>

using namespace std; 

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	string str;  
	cin >> str;
	
	str[0] = toupper(str[0]); 

	cout << str << '\n'; 
	
	return 0; 
}