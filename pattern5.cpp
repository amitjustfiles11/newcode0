#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) { // here i add new call to excute it 

        int n;
        cin >> n;

        bool rowflag = true;

        for (int row = 1; row <= 2 * n; row++) {

            bool flag = rowflag;

            for (int col = 1; col <= 2 * n; col++) {

                if (flag)
                    cout << "#";
                else
                    cout << ".";

                flag = !flag;
            }

            cout << endl;
            rowflag = !rowflag;
        }
    }

    return 0;
}