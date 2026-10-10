#include <iostream>
using namespace std;

int cdr (int n)
{
    if (n==0);
 int rds = cdr (n/10);

 return rds +1 ;
}



int main (){
    int n ; cin >> n;
    int ct=0 ; 
    while (n){
        ct++;
        n/=10;

    // cout << cdr(n);
    }
    cout << endl;
    return 0;
}






