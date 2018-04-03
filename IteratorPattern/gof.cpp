#include <iostream>

#include "iterator.h"



void normalPrint(Iterator<int> &itr)
{
    std::cout << "Print : " << std::endl;
    for(itr.First(); !itr.IsDone(); itr.Next())
        std::cout << itr.CurrentItem() << std::endl;
}
