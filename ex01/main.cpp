
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;
delete i;

WrongAnimal *wa = new WrongCat();
delete wa;

{WrongAnimal wb = WrongAnimal();}
WrongCat wc = WrongCat();
WrongAnimal wd = WrongCat();
WrongCat we = WrongCat();
wc.makeSound();
we.makeSound();
wd.makeSound();
return 0;
}
