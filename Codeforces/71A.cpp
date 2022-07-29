#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n; 
	scanf("%d", &n); 

	string word; 

	for(int tc = 1;  tc <= n; tc++) {

		cin >> word; 

		if(word.size() <= 10) {
			cout << word << '\n'; 
		} else {
			cout << word[0] << word.size() - 2 << word[word.size() - 1] << '\n'; 
		}
	}
	
	return 0; 
}