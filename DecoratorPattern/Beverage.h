#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <iostream>
#include <string>

using std::string;
using std::ostream;

class Beverage
{
public:
    Beverage();
    virtual ~Beverage() = 0;
    Beverage(const Beverage&) = delete;
    Beverage& operator=(const Beverage&) = delete;
    friend ostream& operator<<(ostream& os, const Beverage &beverage);

    void setDescription(const std::string &description);
    virtual string getDescription() const;

    virtual double cost() const;

private:
    string description;
};

// inline ostream& operator<<(ostream& os, const Beverage& beverage)
// {
//     os << beverage.getDescription().c_str() << " $" <<beverage.cost();
//     return (os);
// }

class HouseBlend : public Beverage
{
public:
    HouseBlend();

    double cost() const;
};

class DarkRoast : public Beverage
{
public:
    DarkRoast();

    double cost() const;
};

class Espresso : public Beverage
{
public:
    Espresso();

    double cost() const;
};

class Decaf : public Beverage
{
public:
    Decaf();

    double cost() const;
};

#endif // BEVERAGE_H
