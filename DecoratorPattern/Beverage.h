#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

using std::string;

class Beverage
{
public:
    Beverage();
    Beverage(const Beverage &other);
    virtual ~Beverage() = 0;

    Beverage& operator=(const Beverage &other);


    void setDescription(const std::string &description);
    virtual string getDescription() const;

    virtual double cost();

private:
    string description;
};


class HouseBlend : public Beverage
{
public:
    HouseBlend();

    double cost();
};

class DarkRoast : public Beverage
{
public:
    DarkRoast();

    double cost();
};

class Espresso : public Beverage
{
public:
    Espresso();

    double cost();
};

class Decaf : public Beverage
{
public:
    Decaf();

    double cost();
};

#endif // BEVERAGE_H
