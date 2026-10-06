#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n < 2)
      
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

    if (Prime(n))
        cout << "prime";
    else
        cout << "Not prime";

    return 0;
}