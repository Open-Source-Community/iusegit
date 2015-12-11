#include <iostream>
#include <sstream>
#include <string>
#include "operations.h"

using namespace std;

float str_to_float(string str)
{
  istringstream iss(str);
  float value;
  if (iss >> value)
    return value;
  else
    return NULL;
}

int main(int argc, char* argv[])
{
  if (argc <= 2)
  {
    cerr << "too few arguments" << endl;
    return 1;
  }
  else if (argc == 3)
  {
    string operation = argv[1];
    float num1 = str_to_float(argv[2]);

    if (num1 == NULL)
    {
      cerr << "invalid input" << endl;
      return 1;
    }

    if (operation == "absolute")
    {
      // cout << absolute(num1) << endl;
    }
    else if (operation == "negate")
    {
      // cout << negate(num1) << endl;
    }
    else if (operation == "root")
    {
      // cout << root(num1) << endl;
    }
    else if (operation == "log")
    {
      // cout << log(num1) << endl;
    }
    else if (operation == "ln")
    {
      // cout << ln(num1) << endl;
    }
    else if (operation == "factorial")
    {
      // cout << factorial(num1) << endl;
    }
    else if (operation == "sin")
    {
      cout << sine(num1) << endl;
    }
    else if (operation == "cos")
    {
      // cout << cos(num1) << endl;
    }
    else if (operation == "tan")
    {
      // cout << tan(num1) << endl;
    }
    else
    {
      cerr << "invalid input" << endl;
      return 1;
    }
  }
  else if (argc == 4)
  {
    string operation = argv[1];
    float num1 = str_to_float(argv[2]);
    float num2 = str_to_float(argv[3]);

    if (num1 == NULL || num2 == NULL)
    {
      cerr << "invalid input" << endl;
      return 1;
    }

    if (operation == "add")
    {
      // cout << add(num1, num2) << endl;
    }
    else if (operation == "subtract")
    {
      // cout << subtract(num1, num2) << endl;
    }
    else if (operation == "multiply")
    {
      // cout << multiply(num1, num2) << endl;
    }
    else if (operation == "divide")
    {
      // cout << divide(num1, num2) << endl;
    }
    else if (operation == "power")
    {
      // cout << power(num1, num2) << endl;
    }
    else if (operation == "root")
    {
      // cout << root(num1, num2) << endl;
    }
    else if (operation == "log")
    {
      // cout << log(num1, num2) << endl;
    }
    else
    {
      cerr << "invalid input" << endl;
      return 1;
    }
  }
  else
  {
    cerr << "too many arguments" << endl;
    return 1;
  }

  return 0;
}
