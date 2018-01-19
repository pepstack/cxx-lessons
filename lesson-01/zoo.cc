#include <cat.hh>
#include <dog.hh>


void test1 ()
{
    Dog *dog = new Dog();
    Cat *cat = new Cat();

    dog->talk();
    cat->talk();

    delete dog;
    delete cat;
}


void test2 ()
{
    Animal *an = new HabaDog ();

    an->talk();
    an->eat();

    an->getAge();

    delete an;
}


int main (int argc, char * argv [])
{
    // test1();

    test2();

    return 0;
}
