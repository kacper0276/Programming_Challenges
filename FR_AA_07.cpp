#include <bits/stdc++.h>
using namespace std;
int main() {
    int k = 0, n = 0, pom = 0;
    
    cin >> k >> n;
    for(int i = 0; i < k; i++) {
    	pom+=i;
	}
    
    for(int i = 1; i <= n - k + 1; i++) {
    	if(i * k + pom == n) {
    		for(int j = 0; j < k; j++) {
    			cout << i + j << " ";    			
			}
			return 0;
		}
	}
}