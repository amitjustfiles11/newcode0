#include <iostream>
using namespace std;
void swap (int x ,int y){
x = x+y -(y+x);
cout << x <<" "<<y<<"/n";

}
int main (){
 int a = 40 ,  b = 78;
  swap(a ,b);


 return 0;
}