#include <iostream>

#include "CondimentDecorator.h"


void printBeverage(Beverage *beverage);

int main()
{
    Beverage *espresso = new Espresso();

    std::cout << espresso->getDescription().c_str()
              << " $" <<espresso->cost() << std::endl;

    Beverage *darkroastwithcondiment = new DarkRoast();
    darkroastwithcondiment = new Mocha(darkroastwithcondiment);
    darkroastwithcondiment = new Mocha(darkroastwithcondiment);
    darkroastwithcondiment = new Whip(darkroastwithcondiment);

    std::cout << darkroastwithcondiment->getDescription().c_str()
              << " $" <<darkroastwithcondiment->cost() << std::endl;

    Beverage *houseblendwithcondiment = new HouseBlend();
    houseblendwithcondiment = new Soy(houseblendwithcondiment);
    houseblendwithcondiment = new Mocha(houseblendwithcondiment);
    houseblendwithcondiment = new Whip(houseblendwithcondiment);

    std::cout << houseblendwithcondiment->getDescription().c_str()
              << " $" <<houseblendwithcondiment->cost() << std::endl;

    Beverage *houseblend = new HouseBlend();
    printBeverage(new Whip(
                      new Mocha(
                          new Mocha(houseblend))));

    return 0;
}

void printBeverage(Beverage *beverage)
{
    std::cout << beverage->getDescription().c_str()
              << " $" <<beverage->cost() << std::endl;
}
