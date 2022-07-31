#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int x, res = 0; 
	scanf("%d", &x); 

	if(x >= 5) {
		res += (x / 5); 
		x %= 5; 
	} 
	if(x >= 4) {
		res += (x / 4); 
		x %= 4; 
	} 
	if(x >= 3) {
		res += (x / 3); 
		x %= 3; 
	} 
	if(x >= 2) {
		res += (x / 2); 
		x %= 2; 
	} 

	res += x; 

	printf("%d\n", res);

	return 0; 
}