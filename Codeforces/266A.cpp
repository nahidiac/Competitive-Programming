#include <bits/stdc++.h>

using namespace std; 

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n; 
	scanf("%d", &n);

	string str; 
	cin >> str;

	stack<char> st; 
	int cnt = 0; 

	for(int i = 0; i < n; i++) {
		if(!st.empty() && str[i] == st.top()) {
			cnt++; 
		} else {
			st.push(str[i]); 
		}
	} 

	printf("%d\n", cnt);
	
	return 0; 
}