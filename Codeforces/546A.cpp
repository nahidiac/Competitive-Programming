#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int k, n, w, res;
	scanf("%d%d%d", &k, &n, &w); 

	int need = k * w * (w+1);
	need /= 2;

	if(n >= need) {
		res = 0; 
	} else {
		res = need - n; 
	}

	printf("%d\n", res);
	
	return 0; 
}