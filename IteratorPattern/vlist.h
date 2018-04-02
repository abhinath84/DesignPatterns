#ifndef VLIST_H
#define VLIST_H

#include <iostream>
#include <vector>

template<class T>
class VList
{
public:
    VList() : list() {}
    VList(const std::vector<T> &vlist) : list(vlist) {}
    VList(const VList<T> &other) : list(other.list) {}
    VList& operator =(const VList<T> &other)
    {
        if(this != &other)
        {
            list = other.list;
        }

        return(*this);
    }

    int size() const        { return(list.size()); }
    T get(int inx) const    { return( list[inx] ); }
    void push(const T &val) { list.push_back(val); }

private:
    std::vector<T> list;
};

#endif // VLIST_H
