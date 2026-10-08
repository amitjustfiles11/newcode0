#include <iostream>
using namespace std;

int add(int, int);   // why we not use return

int main() {
    cout << add(10, 20);
}

int add(int a, int b) {
    return a + b;
}