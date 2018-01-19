#pragma once

#include <stdio.h>


class Animal
{
protected:

public:

    Animal ()
    {
        printf("Animal()\n");
    }


    virtual ~Animal ()
    {
        printf("~Animal()\n");
    }


    virtual void talk ()
    {
        printf("Animal: talk ()\n");
    }


private:


};
