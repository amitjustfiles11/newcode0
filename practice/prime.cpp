// Online C++ compiler (editor)
// Write and run C++ online using this editor.
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 2)
      return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n))
        cout << "prime";
    else
        cout << "Not prime";

    return 0;
}