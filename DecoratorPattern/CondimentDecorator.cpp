#include "CondimentDecorator.h"

CondimentDecorator::CondimentDecorator()
    :component(0)
{
}

CondimentDecorator::CondimentDecorator(Beverage *componemt)
    :component(0)
{
    this->component = componemt;
}

CondimentDecorator::~CondimentDecorator()
{
    if(component != NULL)
        delete component;
}

// CondimentDecorator& CondimentDecorator::operator =(const CondimentDecorator &other)
// {
//     if(this != &other)
//     {
//         component = other.component;
//     }

//     return(*this);
// }

string CondimentDecorator::getDescription() const
{
    return(component->getDescription());
}

double CondimentDecorator::cost() const
{
    return(component->cost());
}


Milk::Milk(Beverage *componemt)
    :CondimentDecorator(componemt)
{
}

Milk::~Milk()
{
}

string Milk::getDescription() const
{
    return(CondimentDecorator::getDescription() + ", Milk");
}

double Milk::cost() const
{
    return(CondimentDecorator::cost() + .10);
}

Mocha::Mocha(Beverage *componemt)
    :CondimentDecorator(componemt)
{
}

Mocha::~Mocha()
{
}

string Mocha::getDescription() const
{
    return(CondimentDecorator::getDescription() + ", Mocha");
}

double Mocha::cost() const
{
    return(CondimentDecorator::cost() + .20);
}

Soy::Soy(Beverage *componemt)
    :CondimentDecorator(componemt)
{
}

Soy::~Soy()
{
}

string Soy::getDescription() const
{
    return(CondimentDecorator::getDescription() + ", Soy");
}

double Soy::cost() const
{
    return(CondimentDecorator::cost() + .15);
}

Whip::Whip(Beverage *componemt)
    :CondimentDecorator(componemt)
{
}

Whip::~Whip()
{
}

string Whip::getDescription() const
{
    return(CondimentDecorator::getDescription() + ", Whip");
}

double Whip::cost() const
{
    return(CondimentDecorator::cost() + .10);
}
