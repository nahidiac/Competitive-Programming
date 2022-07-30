#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int x, y, temp; 

	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <= 5; j++) {
			scanf("%d", &temp); 

			if(temp == 1) {
				x = i; 
				y = j; 
			}
		}
	}

	int res = abs(x - 3) + abs(y - 3); 

	printf("%d\n", res);
	
	return 0; 
}