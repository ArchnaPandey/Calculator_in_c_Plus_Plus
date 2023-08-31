# include <iostream>
using namespace std;

int main() {

  char op;
  float val1, val2;

  cout << "Enter a operator from : +, -, *, / : ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> val1;
  cin >> val2;

  switch(op) {

    case '+':
      cout << val1 << " + " << val2 << " = " << val1 + val2;
      break;

    case '-':
      cout << val1 << " - " << val2 << " = " << val1 - val2;
      break;

    case '*':
      cout << val1 << " * " << val2 << " = " << val1 * val2;
      break;

    case '/':
      cout << val1 << " / " << val2 << " = " << val1 / val2;
      break;

    default:
      //If input is not in( +, -, * or /) show eror message 
      cout << "Error! Not a valid operator";
      break;
  }

  return 0;
}


