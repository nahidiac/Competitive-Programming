#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string str; 
	cin >> str; 

	int sz = str.size(), cnt = 0; 

	for(int i = 0; i < sz; i++) {
		if(str[i] - 48 == 4 || str[i] - 48 == 7) {
			cnt++; 
		}
	}

	bool isNearlyLucky = true;

	if(cnt == 0) {
		isNearlyLucky = false;
	}

	while(cnt > 0) {
		if(cnt % 10 == 4 || cnt % 10 == 7) {
			cnt /= 10; 
		} else {
			isNearlyLucky = false; 
			break;
		}
	}

	if(isNearlyLucky) {
		printf("YES\n");
	} else {
		printf("NO\n"); 
	}
 

	return 0; 
}