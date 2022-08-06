#include <iostream>

using namespace std;

int main()
{
//Maximum Number among three numbers
    cout << "Enter three numbers separated with space to figure out which number is greatest  ";
   int a,b,c;
   cin >> a >> b >> c;

    cout << "\n\nGreatest among these numbers is: ";
   if (a > b) {
        if(a > c) {
            cout << a << endl;
        }
        else{
            cout << c << endl;
        }
   }
   else {
        if (b > c) {
            cout << b << endl;
        }
        else {
            cout << c << endl;
        }
   }


    return 0;
}
