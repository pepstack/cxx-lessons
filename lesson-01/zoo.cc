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
    Animal *dog = new Dog();

    dog->talk();

    delete dog;
}


int main (int argc, char * argv [])
{
    // test1();

    test2();

    return 0;
}
