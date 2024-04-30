
#include "Animal.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
}

Brain::~Brain()
{
}

Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

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
    this->brain = new Brain();
}

Dog::~Dog()
{
}

Dog::Dog(const Dog &other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
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
    this->brain = new Brain();
}

Cat::~Cat()
{
}

Cat::Cat(const Cat &other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
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
