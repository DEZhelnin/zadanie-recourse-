#include <iostream>
using namespace std;
int f(long long n){
	if (n == 0) return 0;
	return n % 10 + 2 * f(n / 10);
}
int main() {
	int n;
	cin >> n;
	cout << f(n);
}
