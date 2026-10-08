void change(int x) {
    x = 100;
}

int main() {
    int a = 10;

    change(a); //how change function work 

    
    return 0;
}
// void change(int &x) {
//     x = 100;
// }

// int main() {
//     int a = 10;

//     change(a);

//     cout << a;
// }