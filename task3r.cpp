#include <iostream>
using namespace std;
void f(int n) {
    int c = 2;
    while (pow(c,2) <= n){
        if (n % c == 0)
        {
            cout << c << " ";
            n = n / c;
        }
        else {
            c++;
        }
    }
    if (n > 1)
        cout << n;
}
int main()
{
    int n;
    cin >> n;
    f(n);
}
