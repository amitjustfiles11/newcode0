#include <iostream>
using namespace std;

void plton (int n){
    if (n==0){
    return  ;
    }
    cout << n <<" ";
 plton(n-1) ;
 cout << n  <<"\n"<< " " << "\n";
 cout << n  << " " << "\n"<< " "; 
}

int main (){
    int n;
    cin >> n;
    plton(n);
    return 0;
}
