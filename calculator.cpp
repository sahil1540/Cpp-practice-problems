#include <iostream>
using namespace std ;

int main() {
  char opera ;
  float num_1 , num_2 ;

cout << "Please Select The Operators (+,-,*,/)";
cin >> opera ;

cout << "Please select two numbers : ";
cin >> num_1 >> num_2 ;

switch(opera) {
case '+' :
cout << "Answer of "<< num_1 << " + "<< num_2 << " is "<< num_1 + num_2 << endl ;
break ;

case '-' :
cout << "Answer of "<< num_1 << " - "<< num_2 << " is "<< num_1 - num_2 << endl ;
break ;

case '*' :
cout << "Answer of "<< num_1 << " * "<< num_2 << " is "<< num_1 * num_2 << endl ;
break ;

case '/' :
cout << "Answer of "<< num_1 << " / "<< num_2 << " is "<< num_1 / num_2 << endl ;
break ;

default :
cout << "Invalid Operator :( " << endl ;
break ;
}
return 0 ;
}

