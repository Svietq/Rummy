#ifndef RUMMYINTERFACE_H
#define RUMMYINTERFACE_H

#include "rummyimpl.h"
#include "rummy500impl.h"
#include "rummyginimpl.h"
#include "rummytradimpl.h"

#include <map>
#include <string>
#include <memory>

class RummyInterface
{
public:
    RummyInterface();
    virtual void play() = 0;
    enum class GameType { Traditional, FiveHundred, Gin };
protected:
    std::unique_ptr<RummyImpl> rummy_impl = nullptr;
    std::map< GameType, std::unique_ptr<RummyImpl> > impl_map;

};

#endif // RUMMYINTERFACE_H
