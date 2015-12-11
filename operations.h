#include <math.h>
using namespace std;

#define PI 3.14159265

float tan (float num1,float PI=3.14159265;)
{
	float result =tan(num1*PI/180);

	return result;
}

float subtract(float num1, float num2)
{
	float result = num1-num2 ;
	return result;
}

float sine(float rate)
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
