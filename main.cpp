/* 
  Jonathon Irizarry
  COSC-1436-57001
  Repl.it
  This program will take the input for four numbers that have two types being double and integer. It then will perform use arithemtic operators in C++ to calculate solutions based off the numbers given by the user. The only exception being that the number zero is not allowed for number2 or number 4 since division by zero is not allowed in mathematics.
*/
#include <iostream>
using namespace std;

int main() {
  // declaring variables for numbers
  double number1, number2;
  int number3, number4;
  
  // output to user what is required for the input
  cout << "Enter four separate numbers:" << endl;
  // take input from the user and place condition
  cin >> number1 >> number2 >> number3 >> number4;

  if(number2 == 0 || number4 == 0 ){
    cout << "You cannot use the number 0 for number2 and number 4 since you cannot divide by zero. Sorry and try again!" << endl;
  } else {
     //addition operation of number1 and number2
    cout << number1 << "+" << number2 << " = " << number1 + number2 << endl;
    //subtraction operation of number1 and number2
    cout << number1 << "-" << number2 << " = " << number1 - number2 << endl;
    //multiplication operation of number1 and number2
    cout << number1 << "*" << number2 << " = " << number1 * number2 << endl;
    //division operation of number1 and number2
    cout << number1 << "/" << number2 << " = " << number1 / number2 << endl;
    //modulus operation of number3 and number4
    cout << number3 << "%" << number4 << " = " << number3 % number4 << endl;
  }
  
  return 0;
}