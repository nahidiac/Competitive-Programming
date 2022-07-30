#include <bits/stdc++.h>

using namespace std; 

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int a, b; 
	scanf("%d%d", &a, &b);

	int year = 0; 

	while(a <= b) {
		year++; 

		a *= 3;
		b *= 2;  
	}

	printf("%d\n", year);
	
	return 0; 
}