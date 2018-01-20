#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "Beverage.h"

class CondimentDecorator : public Beverage
{
public:
    CondimentDecorator();
    CondimentDecorator(const Beverage *componemt, const string &description);
    ~CondimentDecorator() = 0;

    string getDescription();

private:
    Beverage *component;
};

class Milk : public CondimentDecorator
{
public:
    Milk();
    Milk(const Beverage *componemt, const string &description);
    ~Milk();

    string getDescription();
    double cost();
};

class Mocha : public CondimentDecorator
{
public:
    Mocha();
    Mocha(const Beverage *componemt, const string &description);
    ~Mocha();

    string getDescription();
    double cost();
};

class Soy : public CondimentDecorator
{
public:
    Soy();
    Soy(const Beverage *componemt, const string &description);
    ~Soy();

    string getDescription();
    double cost();
};

class Whip : public CondimentDecorator
{
public:
    Whip();
    Whip(const Beverage *componemt, const string &description);
    ~Whip();

    string getDescription();
    double cost();
};

#endif // CONDIMENTDECORATOR_H
