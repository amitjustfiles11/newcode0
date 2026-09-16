#include <iostream>
using namespace std;
int printhello (){
    cout << "hello\n";
    return 8;

}
int sum(int b, int c){
    int sum = b + c;
     return sum;

}

int minOfTwo(int a, int t){
   
    if (a<t){
        return a;
    } else {
        return t;
    }
}
 
    int main (){
        
    printhello ();
  int val = printhello ();
     int val2 = sum(55,103);
   cout << val2 << endl;
  

  cout << val << endl;
  
   
  int val3 = minOfTwo(45, 60);
   cout << val3 << endl;
  return 0;
}


// int main2 (){
//     cout << minOfTwo(44,90) << endl;
//     return 0;
// }