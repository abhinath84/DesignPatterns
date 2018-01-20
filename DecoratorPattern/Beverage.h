#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

using std::string;

class Beverage
{
public:
    Beverage();

    void setDescription();
    string getDescription() const;

    double cost();

private:
    string description;
};

#endif // BEVERAGE_H
