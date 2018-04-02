#ifndef ITERATOR_H
#define ITERATOR_H

#include <iostream>

#include "vlist.h"
#include "alist.h"


template<typename T>
class Iterator
{
public:
    virtual ~Iterator() = 0;

    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual T CurrentItem() const = 0;

protected:
    Iterator()  { }
};


template<typename T>
Iterator<T>::~Iterator()
{
}

template<typename T>
class VListIterator : public Iterator<T>
{
public:
    VListIterator(const VList<T> &vlist) : list(&vlist), inx(0) { }
    ~VListIterator()
    {
        /*if(list != NULL)
            delete list;*/
    }

    virtual void First()                { inx = 0; }
    virtual void Next()                 { ++inx; }
    virtual bool IsDone() const         { return( inx >= list->size() ); }
    virtual T CurrentItem() const       { return( list->get(inx) ); }

private:
    const VList<T>  *list;
    int             inx;
};


template<typename T>
class AListIterator : public Iterator<T>
{
public:
    AListIterator(const AList<T> &alist) : list(&alist), inx(0) { }
    ~AListIterator()
    {
        /*if(list != NULL)
            delete list;*/
    }

    virtual void First()                { inx = 0; }
    virtual void Next()                 { ++inx; }
    virtual bool IsDone() const         { return( inx >= list->size() ); }
    virtual T CurrentItem() const       { return( list->get(inx) ); }

private:
    const AList<T>  *list;
    int             inx;
};

#endif // ITERATOR_H
