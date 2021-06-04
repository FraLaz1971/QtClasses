/*
    squibber.h
*/

#ifndef SQUIBBER_H
#define SQUIBBER_H

#include "frooler.h"

class Squibber : public Frooler
{

public:
    Squibber();
    Squibber(const Squibber &other);

    Squibber &operator=(const Squibber &other);
    void squib(void);
    void squib(char *);
    void squib(int);
};

#endif
