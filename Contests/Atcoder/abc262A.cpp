#include <bits/stdc++.h>

using namespace std; 

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int year; 
	scanf("%d", &year);


	while(year % 4 != 2) {
		year++; 
	}

	printf("%d\n", year);
	
	return 0; 
}