#include <iostream>
using namespace std;
int memo[1000];

int f(int n){
	memo[1] = 1;
	memo[2] = 2;

	if(n == 1) return memo[1];
	if(n == 2) return memo[2];
	for(int i = 3 ; i <= n ; i++){
		memo[i] = (memo[i-1] + memo[i-2]) % 10007;
	}

	return memo[n];
}

int main(void){
	int n;
	cin >> n;
	cout << f(n) << endl;	

	return 0;
}


