#include <bits/stdc++.h>

using namespace std; 

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	vector<int> v; 

	for(int i = 0; i < 10; i++) {
		v.push_back(i+1); 
	}

	for(int i = 0; i < v.size(); i++) {
		cout << v[i]+1 << '\n'; 
	}
	
	return 0; 
}