#include <iostream>

using namespace std;

#define pi 3.14159

int main(){
      double a, r;
      cin>>r;
      a = pi * r * r;

      cout.precision(4);
      cout.setf(ios::fixed);

      cout << "A=" << a << "\n";
}
