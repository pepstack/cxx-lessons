#pragma once

#include <animal.hh>


class Dog : public Animal
{
protected:

public:

    Dog ()
    {
        printf("Dog()\n");
    }


    ~Dog ()
    {
        printf("~Dog()\n");
    }


    void talk ()
    {
        printf("Dog: wangwang!\n");
    }

private:


};
