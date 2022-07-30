#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n, x = 0; 
	scanf("%d", &n);

	string str; 

	for(int i = 0; i < n; i++) {
		cin >> str; 

		if(str[1] == '+') {
			x++;
		} else {
			x--;
		}
	}

	printf("%d\n", x);
	
	return 0; 
}