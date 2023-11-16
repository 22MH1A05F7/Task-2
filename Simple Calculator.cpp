# include <iostream>
using namespace std;
int main() {
  char op;
  float number1, number2;
  cout << "Enter operator: +, -, *, /: ";
  cin >> op;
  cout << "Enter two operands: ";
  cin >> number1 >> number2;
  switch(op) {

    case '+':
      cout << number1 << " + " << number2 << "  ⇒ " << number1 + number2;
      break;

    case '-':
      cout << number1 << " - " << number2 << "  ⇒ " << number1 - number2;
      break;

    case '*':
      cout << number1 << " x " << number2 << " ⇒ " << number1 * number2;
      break;

    case '/':
      cout << number1 << " / " << number2 << "  ⇒ " << number1 / number2;
      break;

    case '%':
      cout << number1 << " % " << number2 << "  ⇒ " << number1 / number2;
      break;
      
    default:
      cout <<" Invalid Operator "; 
      break;
  }
  return 0;
}
