#include <iostream>

#include "vlist.h"
#include "alist.h"
#include "iterator.h"


// extern declaration
extern void normalPrint(Iterator<int> *itr);


int main(int argc, char *argv[])
{
    // Design Patterns by GOF
    Iterator<int> *it;

    VList<int> vlist;
    AList<int> alist;
    /*AList alist;
    MList mlist;*/


    vlist.push(10);
    vlist.push(20);
    vlist.push(30);
    vlist.push(40);

    it = new VListIterator<int>(vlist);

    normalPrint(it);
    delete it;
    it = NULL;

    alist.push(100);
    alist.push(200);
    alist.push(300);
    alist.push(400);

    it = new AListIterator<int>(alist);
    normalPrint(it);
    delete it;
    it = NULL;

    /*it = new MListIterator(vlist);
    normalPrint(mitr);
    delete it;
    it = NULL;*/

    // HeadFirst Design Pattern

    return 0;
}
