// Example program
#include <iostream>
using namespace std;

int main() {
    bool myExp;
    float a = 0, b = 3, c = 5, d = 2;
    std::cout << std::boolalpha;
    myExp = a < b;
    cout << " a < b is " << bool(myExp) << endl;
   
    myExp =  b == d;
     cout << " b == d is " << myExp << endl;
  
    return 0;
}
