# include <iostream>
using namespace std;

int main() 
{
    int op;
    float n1, n2;

    cout << "Enter operation to perform:";
    cout << "1) Add\n2) Subtract\n3) Multiply\n4) Divide\n";
    cin >> op;

    cout << "Enter two numbers ";
    cin >> n1 >> n2;

    switch(op) {

    case 1:
      cout << n1 << "+" << n2 << "=" << n1 + n2;
      break;

    case 2:
      cout << n1 << "-" << n2 << "=" << n1 - n2;
      break;

    case 3:
      cout << n1 << "*" << n2 << "=" << n1 * n2;
      break;

    case 4:
      cout << n1 << "/" << n2 << "=" << n1 / n2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
