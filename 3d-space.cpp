/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: LAB 09 - a/b/c

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
  
  Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{

Coord3D &v = *ppos;
Coord3D &X = *pvel;

v.x = v.x + (X.x*dt);
v.y = v.y + (X.y*dt);
v.z = v.z + (X.z*dt);
*ppos = v;
}


int main() 
{
Coord3D pointP = {10, 20, 30};
Coord3D pointQ = {-20, 21, -22};

    cout << length(&pointP) << endl;

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; 
 
Coord3D pos = { 0, 0, 100.0 };
Coord3D vel = { 1, -5, 0.2 };
move(&pos, &vel, 2.0);

cout << pos.x << " " << pos.y << " " << pos.z << endl;

return 0;
}
