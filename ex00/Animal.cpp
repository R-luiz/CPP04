
#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
}

Animal::Animal(std::string type) : type(type)
{
}

Animal::~Animal()
{
}

Animal::Animal(const Animal &other) : type(other.type)
{
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return type;
}

Dog::Dog() : Animal("Dog")
{
}

Dog::~Dog()
{
}

Dog::Dog(const Dog &other) : Animal(other)
{
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

Cat::Cat() : Animal("Cat")
{
}

Cat::~Cat()
{
}

Cat::Cat(const Cat &other) : Animal(other)
{
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}
