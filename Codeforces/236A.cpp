#include <bits/stdc++.h>

using namespace std; 

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	string str;  
	cin >> str;

	int arr[26]; 
	memset(arr, 0, sizeof(arr)); 
	
	for(int i = 0; i < str.size(); i++) {
		arr[str[i] - 97] = 1; 
	}

	int cnt = 0; 
	for(int i = 0; i < 26; i++) {
		if(arr[i] == 1) {
			cnt++; 
		}
	}

	if(cnt % 2 == 0) {
		printf("CHAT WITH HER!\n");
	} else {
		printf("IGNORE HIM!\n"); 
	}
	
	return 0; 
}