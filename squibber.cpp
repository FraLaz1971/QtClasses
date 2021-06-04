/*
    squibber.cpp
*/

#include "squibber.h"
#include <iostream>

using namespace std;

Squibber::Squibber()
{
    cerr << "Squibber::Squibber() has been created" << endl;
}

Squibber::Squibber(const Squibber &other) : Frooler() 
{
    *this = other;
}

Squibber &Squibber::operator=(const Squibber &other)
{
    Frooler::operator=(other);
    // missing code
    return *this;
}

void Squibber::squib(void){
    cout << "Squibber::Squib() hello I'm squibbing!!" << endl;
}

void Squibber::squib(char *mytext){
    cout << "Squibber::Squib() hello I'm squibbing this '"<< mytext << "' text !!" << endl;
}

void Squibber::squib(int myint){
    cout << "Squibber::Squib() hello I'm also squibbing this number: "<< myint << " !!" << endl;
}
