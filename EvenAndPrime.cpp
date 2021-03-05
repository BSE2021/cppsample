// Example program
#include <iostream>
using namespace std;

int main() {
    int myNumber;
    float divisibleBy;

    // Checking for even or odd
    cout << " \n Enter a number ";
    cin >> myNumber;
     if ( myNumber % 2 == 0){
         cout << "\n Your number is even \n ";
     } else {
         cout << " \n Your number is odd \n ";
     }

     // Checking for prime or not 
     int i = 2;

     while (i < (myNumber-1) ) {
         divisibleBy = myNumber % i ;
         
     if ( divisibleBy ==  0){
         cout << myNumber << " is divisible by " << i << endl ;
         cout << "\n So your number is not prime \n ";
         break;
     } else {
         i += 1 ;
     }
     }
        cout << " \n The value of i  is " << i;

     if ( i == (myNumber-1)) {
          cout << "\n Your number is prime  because it was not divisible by any number other than 1 and itself \n ";
     }
    
    return 0;
}
