#include <math.h>

using namespace std;

#define PI 3.14159265

float _tan (float num1)
{
	float result =tan(num1*PI/180);

	return result;
}

float subtract(float num1, float num2)
{
	float result = num1-num2 ;
	return result;
}


float _sin(float rate)
{
    float result,r;
    r=rate/180;
    int i=r;
    if (i-r==0)
    {
        result=0;
    }
    else
    {
        result = sin ((rate*PI)/180);
    }
    return result;
}


double _log(double x)
{
    return (log10(x));
}

double _log(double base, double x) {
    return (double)(log(x) / log(base));
}

double powerfunction(double base, double power){

	double f = base;
	for (int i = 1; i < power; i++)
		f *= base;
	return f;


}
double _negate (double num){
return num*(-1);
}

double add (double n1 , double n2){
return n1+n2;
}

double root (double num){
return sqrt(num);
}

double divide(double n1 , n2){
if(n2!=0)
    return n1/n2;
else cout<<"AN error";
return 0;
}

double absluote (double num){
if(num<0)return num*-1;
else
    return num;
}
unsigned long long factorial(double num){
unsigned long long fac=1;
for(int i = 1 ; i <= num ; i++)
    fac*=i;
return fac;
}
