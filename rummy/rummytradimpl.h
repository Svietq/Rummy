#ifndef RUMMYTRADIMPL_H
#define RUMMYTRADIMPL_H

#include "rummyimpl.h"

class RummyTradImpl : public RummyImpl
{
public:
    RummyTradImpl();
    void print_impl_type(){ std::cout << "Rummy Traditional" << '\n'; }
};

#endif // RUMMYTRADIMPL_H
