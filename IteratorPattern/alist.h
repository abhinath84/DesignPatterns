#ifndef ALIST_H
#define ALIST_H

#include <iostream>


#define DEFAULT_LIST_CAPACITY 10

template<typename T>
class AList
{
public:
    AList()
        :capacity(DEFAULT_LIST_CAPACITY),
          count(0)
    {
        create();
    }

    AList(const int &size)
        :capacity(size),
        count(0)
    {
        create();
    }

    //AList(const T *arr);
    AList(const AList &other);
    AList& operator =(const AList &other);
    ~AList()
    {
        capacity = count = 0;
        if(list != NULL)
            delete []list;
    }

    int size() const        { return( count ); }
    T get(int inx) const    { return( list[inx] ); }
    void push(const T &val)
    {
        if(count <= capacity)
        {
            list[count] = val;
            ++count;
        }
    }

private:
    void create()
    {
        if(list == NULL)
        {
            count = 0;
            capacity = (capacity == 0) ? DEFAULT_LIST_CAPACITY : capacity;

            list = new T[capacity];
        }
    }

private:
    T   *list;
    int capacity;
    int count;
};

#endif // ALIST_H
