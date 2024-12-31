#include <iostream>
#include <memory>

#include "Utils.h"
#include "CondimentDecorator.h"

using std::cout;
using std::endl;

// void printBeverage(const std::shared_ptr<Beverage> &beverage);

int main()
{
    // only expresso
    Beverage *espresso = new Espresso();
    cout << *espresso << endl;

    // dark roast with mocha, mocha, whip
    Beverage *darkroastwithcondiment = new DarkRoast();
    darkroastwithcondiment = new Mocha(darkroastwithcondiment);
    darkroastwithcondiment = new Mocha(darkroastwithcondiment);
    darkroastwithcondiment = new Whip(darkroastwithcondiment);

    cout << *darkroastwithcondiment << endl;

    // house blend with soy, mocha, whip
    Beverage *houseblendwithcondiment = new HouseBlend();
    houseblendwithcondiment = new Soy(houseblendwithcondiment);
    houseblendwithcondiment = new Mocha(houseblendwithcondiment);
    houseblendwithcondiment = new Whip(houseblendwithcondiment);

    cout << *houseblendwithcondiment << endl;

    // house blend with mocha, mocha, whip
    Beverage *houseblend = new HouseBlend();
    std::shared_ptr<Beverage> ptr = std::make_shared<Whip>(new Mocha(
                                                            new Mocha(houseblend)));
    printBeverage(ptr);
    printBeverage(std::make_shared<Whip>(new Mocha(
                                            new Mocha(
                                                new HouseBlend()))));

    return 0;
}

// void printBeverage(std::shared_ptr<Beverage> const& beverage)
// {
//     cout << *beverage << endl;
// }
