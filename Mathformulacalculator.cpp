#include <iostream>

using namespace std ;
int main() {
    int task,a,b,form_1,form_2,form_3,form_4,form_5,form_6,form_7,form_8;
    float div ;

    cout << "                          MATH FORMULA CALCULATOR    \n " ;

    cout<< endl ;

    cout << "1.Addition\n" ;
    cout << "2.Substraction\n" ;
    cout << "3.Multiplication\n" ;
    cout << "4.Division\n" ;
    cout << "5.(A+B)^2\n" ;
    cout << "6.(A-B)^2\n" ;
    cout << "7.(A+B)^3 \n" ;
    cout << "8.(A-B)^3 \n";
    cout << "9.(A^2 - B^2)\n" ;
    cout << "10.Area of square : \n" ;
    cout << "11.Perimeter of square : \n" ;
    cout << "12.Area of tringle : \n" ;
    cout << "13. Exit\n\n" ;

    cout << "Enter Task Number To Do :" ;
    cin >> task ;

    cout << "Enter A = ";
    cin >> a ;

    cout << "Enter B = " ;
    cin >> b ;
    div = a/b ;


    if (task == 1) {
        cout << "\nAddition of A & B is : "<< a+b ;
        } else if (task ==2) {
            cout << "\nSubstraction of A & B is : "<< a-b ;
        }  else if (task ==3) {
            cout << "\nMultiplication of A & B is : "<< a*b ;
        }else if (task ==4) {
            cout << "\nDivision of A & B is : "<< div ;
        }else if (task ==5) {
            form_1 = (a*a)+(b*b)+2*a*b ;
            cout << "Answer of (A+B)^2 =" << form_1 ;
        }else if (task ==6) {
            form_2 = (a*a)+(b*b)-2*a*b ;
            cout << "Answer of (A-B)^2 =" << form_2 ;
        }else if (task ==7) {
            form_3 = (a*a*a)+(b*b*b)+(3*a*a*b)+(3*b*b*a);
            cout << "Answer of (A+B)^3 =" << form_3 ;
        }else if (task ==8) {
            form_4 = (a*a*a)-(b*b*b)-(3*a*a*b)+(3*b*b*a);
            cout << "Answer of (A-B)^3 = " << form_4 ;
        }else if (task ==9) {
            form_5 = (a-b)*(a+b) ;
            cout << "Answer of (A^2 - B^2 =)" << form_5 ;
        }else if (task ==10) {
            form_6 = a*a ;
            cout << "Area of square(a*a): " << form_6 ;
        }else if (task ==11) {
            form_7 = 4*a ;
            cout << "Perimeter of square (4*a) :" << form_7 ;   
        }else if (task == 12) {
            form_8 = (0.5*a*b) ;
            cout << "Area of tringle is :" << form_8 ;

             
        }else {
            cout <<"By Have a nice day :)" ;
        }



    return 0 ;
}
