#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;


#define PI 3.14159265

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
