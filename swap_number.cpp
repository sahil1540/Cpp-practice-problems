#include <iostream>
using namespace std ;

int main() {
    int num_1 , num_2 , temp ;

    cout << "Enter First Number : " ;
    cin >> num_1 ;

    cout << "Enter Second Number : " ;
    cin >> num_2 ;
    num_1 = num_1 + num_2 ; // num_1 becomes sum 
    num_2 = num_1 - num_2 ; // num_2 becomes original num_1 value 
    num_1 = num_1 - num_2 ; // Here num_1 becomes original num_2 value 

    cout << "After swapping without third variable :"<<endl ;

    cout << "num_1 = "<<num_1 <<endl ;
    cout << "num_2 = "<<num_2 <<endl ;

 
 return 0 ;
}
