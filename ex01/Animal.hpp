
#pragma once

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    
    public:
        Brain();
        ~Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
};

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);

        std::string getType() const;
        virtual void makeSound() const = 0;

};

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        void makeSound() const;
};

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        void makeSound() const;
};
