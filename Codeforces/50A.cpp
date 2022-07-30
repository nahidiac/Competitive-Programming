#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int m, n; 
	scanf("%d%d", &m, &n);

	int res = m * n / 2;  

	printf("%d\n", res);
	
	return 0; 
}