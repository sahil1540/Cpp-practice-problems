#include <iostream>
using namespace std ;

int main() {
  int balance = 10000 ;
  int choice ;
  int amount ;
  int withd ;

cout << "       -------------ATM MACHINE------------      " << endl ;

cout << "1. Check Balance " << endl ;
cout << "2. Deposit Money " << endl ;
cout << "3. Withdraw Money " << endl ;
cout << "4. Exit " << endl ;

cout << "Enter Your Choice " ; 
cin >> choice ;

if (choice == 1 ) {
cout << "Your Balance Is :"<< balance << endl ;
}else if (choice == 2 ) {
cout << "Enter Money To Deposit : " ;
cin >> amount ;
balance += amount;
cout << "Your New Balance Is :" << balance << endl ;
}else if (choice == 3 ) {
cout << "Enter Withdraw Amount : " ;
cin >> withd ;
balance -= withd;
cout << "Your Current Balance Is :" << balance << endl ;
} else if (choice == 4 ) {
cout << "Thanks For Using ATM Machine " << endl ;
}else {
cout << "Invalid Output ! " ;
}

return 0 ;
}
