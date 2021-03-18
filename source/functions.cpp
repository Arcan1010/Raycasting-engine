//
// Created by Mateusz on 03.08.2020.
//

#include <math.h>
#include <functions.h>

float gf::constrain(float a, float minA, float maxA)
{
    if(a>maxA) return maxA;
    if(a<minA) return minA;
    return a;
}

float gf::radians(float degree)
{
    return ((degree * 3.14159265359) / 180);
}

float gf::distance(float x1, float y1, float x2, float y2)
{
    return sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
}

float gf::distance(float x1, float y1, float z1, float x2, float y2, float z2)
{
    return sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) + (z1-z2)*(z1-z2));
}