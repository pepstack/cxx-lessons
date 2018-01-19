#pragma once

#include <stdio.h>


class Animal
{
protected:
    Animal (int age = 1) :
        _age (age)
    {
        printf("Animal()\n");
    }

    int _age;

private:


public:

    virtual ~Animal ()
    {
        printf("~Animal()\n");
    }


    int getAge ()
    {
        printf("Animal: age=%d\n", _age);
        return _age;
    }


    virtual void talk ()
    {
        printf("Animal: talk()\n");
    }

    // pure virtual function
    virtual void eat () = 0;
};
