#include <bits/stdc++.h>

using namespace std; 

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	string str;  
	cin >> str;
	
	vector<int> v; 

	for(int i = 0; i < str.size(); i++) {
		if(str[i] != '+') {
			v.push_back( (int) str[i]-48); 
		}
	}

	sort(v.begin(), v.end()); 

	for(int i = 0; i < v.size(); i++) {
		printf("%d", v[i]);

		if(i != v.size() - 1) {
			printf("+"); 
		}
	}

	printf("\n"); 

	
	return 0; 
}