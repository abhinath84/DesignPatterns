#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "Beverage.h"

class CondimentDecorator : public Beverage
{
public:
    CondimentDecorator();
    CondimentDecorator(Beverage *componemt);
    virtual ~CondimentDecorator() = 0;

    CondimentDecorator(const CondimentDecorator&) = delete;
    CondimentDecorator& operator =(const CondimentDecorator&) = delete;

    string getDescription() const;
    double cost() const;

private:
    Beverage *component;
};

class Milk : public CondimentDecorator
{
private:
    Milk():CondimentDecorator() {}

public:
    Milk(Beverage *componemt);
    ~Milk();

    string getDescription() const;
    double cost() const;
};

class Mocha : public CondimentDecorator
{
private:
    Mocha():CondimentDecorator() {}

public:
    Mocha(Beverage *componemt);
    ~Mocha();

    string getDescription() const;
    double cost() const;
};

class Soy : public CondimentDecorator
{
private:
    Soy():CondimentDecorator() {}

public:
    Soy(Beverage *componemt);
    ~Soy();

    string getDescription() const;
    double cost() const;
};

class Whip : public CondimentDecorator
{
private:
    Whip():CondimentDecorator() {}

public:
    Whip(Beverage *componemt);
    ~Whip();

    string getDescription() const;
    double cost() const;
};

#endif // CONDIMENTDECORATOR_H
