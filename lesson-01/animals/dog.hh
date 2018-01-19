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


    virtual ~Dog ()
    {
        printf("~Dog()\n");
    }


    virtual void talk ()
    {
        printf("Dog: wangwang!\n");
    }


    virtual void eat ()
    {
        printf("Dog: eat\n");
    }


private:


};


class HabaDog : public Dog
{
public:

    HabaDog ()
    {
        printf("HabaDog()\n");
    }

    ~HabaDog ()
    {
        printf("~HabaDog()\n");
    }
};
