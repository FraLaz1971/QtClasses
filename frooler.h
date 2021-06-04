/*
    squibber.h
*/

#ifndef FROOLER_H
#define FROOLER_H

#include "cstdio"

class Frooler 
{

public:
    Frooler();
    Frooler(const Frooler &other);

    Frooler &operator=(const Frooler &other);
};

#endif //FROOLER_H
