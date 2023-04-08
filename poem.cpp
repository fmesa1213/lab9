/*
Author: Frida Mesa
Course: CSCI-135
Instructor:
Assignment: Lab 9 d
*/

#include <iostream> 
using namespace std; 

string *createAPoemDynamically() 
{ 
	string *p = new string; 
	    *p = "Roses are red, violets are blue"; 
        return p; 
} 

int main() 
{ 
	while(true) 
    { 
		string *p; 
        p = createAPoemDynamically(); 
        cout << *p << endl;
        delete p;        
    } 
} 
