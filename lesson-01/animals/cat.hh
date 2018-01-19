#pragma once

#include <animal.hh>


class Cat : public Animal
{
protected:

public:

    Cat ()
    {
        printf("Cat()\n");
    }

    ~Cat ()
    {
        printf("~Cat()\n");
    }

    void talk ()
    {
        printf("Cat: miaomiao~\n");
    }

private:


};
