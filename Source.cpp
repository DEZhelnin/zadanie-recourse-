#include <iostream>
using namespace std;
void f(int a) {
    if (a>=0 && a<=9) cout << a<<" ";
    if (a / 10 == 0) return;
    f(a / 10);
    cout << a % 10<<" ";
}
int main() {
    int n;
    cin >> n;
    f(n);
}