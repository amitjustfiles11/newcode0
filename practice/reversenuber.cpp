#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;

    while (n > 0) {
        int dig = n % 10;
        rev = rev * 10 + dig;
        n = n / 10;
    }

    return rev;
}

int main() {
    int n;
    cin >> n;

    cout << reverseNumber(n);

    return 0;
}