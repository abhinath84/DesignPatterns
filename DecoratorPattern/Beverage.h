#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

using std::string;

class Beverage
{
public:
    Beverage();
    Beverage(const string &description);
    Beverage(const Beverage &other);
    ~Beverage() = 0;

    void setDescription();
    string getDescription() const;

    double cost();

private:
    string description;
};


class HouseBlend : public Beverage
{
public:
    HouseBlend();
    HouseBlend(const string &description);

    double cost();
};

class DarkRoast : public Beverage
{
public:
    DarkRoast();
    DarkRoast(const string &description);

    double cost();
};

class Espresso : public Beverage
{
public:
    Espresso();
    Espresso(const string &description);

    double cost();
};

class Decaf : public Beverage
{
public:
    Decaf();
    Decaf(const string &description);

    double cost();
};

#endif // BEVERAGE_H
