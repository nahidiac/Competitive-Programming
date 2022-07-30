#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n, temp, total = 0, agree; 
	scanf("%d", &n); 

	for(int tc = 1;  tc <= n; tc++) {

		agree = 0; 
		 for(int i = 0; i < 3; i++) {
		 	scanf("%d", &temp);
		 	if(temp == 1) {
		 		agree++; 
		 	}
		 } 

		 if(agree >= 2) {
		 	total++; 
		 }
	}

	printf("%d\n", total);
	
	return 0; 
}