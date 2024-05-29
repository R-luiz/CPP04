
#include "Dog.hpp"


Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}
