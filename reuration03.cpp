#include <iostream>
using namespace std;

void plton (int a ,int b ){
    if (a>b){
    return  ;
    }
    
 plton(a+1,b);
 cout << a <<endl;

}
void gaw (int a ,int b ){
    if (a>b){
    return  ;
    }
    
 gaw(a,b-1);
 cout << b <<endl;

}
int main (){
    int a ,  b;
    cin >> a>> b;
    plton(a ,b);
     gaw(a ,b);
    return 0;
} 