#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int w; 
	scanf("%d", &w); 

	if(w > 2 && w % 2 == 0) {
		printf("YES\n");
	} else {
		printf("NO\n"); 
	}
	
	return 0; 
}