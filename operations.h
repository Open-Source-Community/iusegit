float subtract(float num1, float num2)
{
	float result = num1-num2 ;
	return result;
}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   //***********Variable Declarations************/
   long double count = 0;     //Keeps track of the count in the loop
   long double totalValue = 0; //The summation of each polynomial evaluated
   bool reciprocal = false;   //Flag to use if greater than 2
   long double precision;     //The the highest order of polynomial to use.
   long double x;             //Value to evaluate to ln for.
   //************End Declarations****************/

   //***************Get User Input***************/
   cout << "Precision=";
   cin >> precision;
   cout << "x=";
   cin >> x;
   //***************End User Input***************/

   //Get actual value using log(x) found in <cmath>
   cout << "The log(x) C++ function value is:" << log(x) << endl;

   if (x > 2.0)   //Use the rule -ln(1/x) == ln(x) to keep accuracy
   {
      x = 1 / x;        //Change to using 1/x rather than x
      reciprocal = true; //Flag as true (sign change is later)
   }

   while (count < precision)
   {
      totalValue += pow(-1, count + 1) * (pow((x-1),count)/count);
      count++;
   }

   if (reciprocal == true)
      totalValue * -1;   //If reciprocal was used multiply by -1 to change sign

   cout << "The Result is:" << setprecision(5) << totalValue << endl;

   return 1;
}
