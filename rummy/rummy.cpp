#include "rummy.h"

Rummy *Rummy::instance_ = nullptr;

Rummy &Rummy::operator=(const Rummy &iclass)
{
    if(this != &iclass)
        instance_ = iclass.instance_;
    return *this;
}

Rummy &Rummy::get(std::size_t n, const std::string & type)
{
    static Rummy temp{ n, type };
    instance_ = &temp;

    return *instance_;
}
