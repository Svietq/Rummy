#ifndef RUMMYGINIMPL_H
#define RUMMYGINIMPL_H

#include "rummyimpl.h"

class RummyGinImpl : public RummyImpl
{
public:
    RummyGinImpl();
    void print_impl_type(){ std::cout << "Rummy Gin" << '\n'; }
};

#endif // RUMMYGINIMPL_H
