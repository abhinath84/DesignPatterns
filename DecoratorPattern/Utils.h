#ifndef UTILS_H
#define UTILS_H

#include <memory>
#include <type_traits>
#include "Beverage.h"

using std::cout;
using std::endl;

// TODO:
//        - how to make sure user passing std::shared<...>?
//        - how to make sure user passing std::shared<Beverage>?
// Below is the solution for 'c++17' compiler.

// 1. Not working as 'Beverage' is a abstract class
// template<typename T,
//          typename = std::enable_if_t<
//                         std::is_same_v<
//                             std::remove_cv_t<std::remove_reference_t<T>>,
//                             std::shared_ptr<Beverage>>>>

// 2. this will work as we are checking for child of Beverage or not
template<typename T,
    typename = std::enable_if_t<
        std::is_same_v<
            std::shared_ptr<Beverage>,
            std::shared_ptr<typename std::remove_cv_t<std::remove_reference_t<T>>::element_type>
        > ||
        std::is_base_of_v<
            Beverage,
            typename std::remove_cv_t<std::remove_reference_t<T>>::element_type
        >
    >
>
inline void printBeverage(T&& beverage)
{
    cout << *beverage << endl;
}

// // create a templated factory of Beverage
// template<typename T>
// std::unique_ptr<T> createBeverage(std::unique_ptr<T> component)
// {
// }

#endif // UTILS_H
