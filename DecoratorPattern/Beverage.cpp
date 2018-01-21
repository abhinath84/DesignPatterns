#include "Beverage.h"

Beverage::Beverage()
    :description("Undefined Beverage")
{
}

Beverage::Beverage(const Beverage &other)
    :description(other.description)
{
}

Beverage::~Beverage()
{
}

Beverage& Beverage::operator=(const Beverage &other)
{
    if(this != &other)
    {
        description = other.description;
    }

    return(*this);
}

void Beverage::setDescription(const string &description)
{
    if( !description.empty())
        this->description = description;
}

string Beverage::getDescription() const
{
    return (description);
}

double Beverage::cost()
{
    return(0.00);
}


HouseBlend::HouseBlend()
    :Beverage()
{
    setDescription("House Blend Coffee");
}

double HouseBlend::cost()
{
    return(.89);
}

DarkRoast::DarkRoast()
    :Beverage()
{
    setDescription("Dark Roast Coffee");
}

double DarkRoast::cost()
{
    return(.99);
}

Espresso::Espresso()
    :Beverage()
{
    setDescription("Espresso Coffee");
}

double Espresso::cost()
{
    return(1.99);
}

Decaf::Decaf()
    :Beverage()
{
    setDescription("Decaf Coffee");
}

double Decaf::cost()
{
    return(1.05);
}
