#include <bits/stdc++.h>

using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n, k, temp, total = 0, threshold, i; 
	scanf("%d%d", &n, &k); 

	vector<int> v; 

	for(int tc = 1;  tc <= n; tc++) {
		 scanf("%d", &temp); 
		 v.push_back(temp); 
	}

	threshold = v[k-1];

	if(threshold > 0) {
		total = k;
		i = k;
	} else {
		i = 0; 
	}

	while(i < v.size()) {

		if(v[i] >= v[k-1] && v[i] > 0) {
			total++;
		} else {
			break; 
		}

		i++; 
	}

	printf("%d\n", total);
	
	return 0; 
}