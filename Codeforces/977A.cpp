#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n, k; 
	scanf("%d%d", &n, &k); 

	while(k--) {
		if(n % 10 == 0) {
			n /= 10; 
		} else {
			n--; 
		}
	}

	printf("%d\n", n);

	return 0; 
}