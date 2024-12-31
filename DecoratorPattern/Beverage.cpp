#include "Beverage.h"

Beverage::Beverage()
    :description("Undefined Beverage")
{
}

Beverage::~Beverage()
{
}

// Beverage::Beverage(const Beverage &other)
//     :description(other.description)
// {
// }

// Beverage& Beverage::operator=(const Beverage &other)
// {
//     if(this != &other)
//     {
//         description = other.description;
//     }

//     return(*this);
// }

ostream& operator<<(ostream& os, const Beverage& beverage)
{
    os << beverage.getDescription().c_str() << " : $" <<beverage.cost();
    return (os);
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

double Beverage::cost() const
{
    return(0.00);
}


HouseBlend::HouseBlend()
    :Beverage()
{
    setDescription("House Blend Coffee");
}

double HouseBlend::cost() const
{
    return(.89);
}

DarkRoast::DarkRoast()
    :Beverage()
{
    setDescription("Dark Roast Coffee");
}

double DarkRoast::cost() const
{
    return(.99);
}

Espresso::Espresso()
    :Beverage()
{
    setDescription("Espresso Coffee");
}

double Espresso::cost() const
{
    return(1.99);
}

Decaf::Decaf()
    :Beverage()
{
    setDescription("Decaf Coffee");
}

double Decaf::cost() const
{
    return(1.05);
}
