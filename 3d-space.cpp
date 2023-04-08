/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: LAB 09 - a

I wrote a program that receives the coordinates of a point P passed as a pointer,
and computes the distance from the origin to the point P
*/

#include <iostream>
#include <math.h>
using namespace std;

struct Coord3D 
{
double x;
double y;
double z;
};

double length(Coord3D *p)

{
double len = sqrt(pow(p->x,2) + pow(p->y,2) + pow(p->z,2)); 
return len;
}

int main() 
{
Coord3D pointP = {10, 20, 30};
cout << length(&pointP) << endl;
}
