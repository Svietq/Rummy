#include "rummy.h"

Rummy *Rummy::instance_ = nullptr;

Rummy &Rummy::operator=(const Rummy &iclass)
{
    if(this != &iclass)
        instance_ = iclass.instance_;
    return *this;
}

Rummy &Rummy::get()
{
    static Rummy temp;
    instance_ = &temp;

    return *instance_;
}
