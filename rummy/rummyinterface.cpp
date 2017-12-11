#include "rummyinterface.h"

RummyInterface::RummyInterface()
{
   impl_map[GameType::Traditional] = std::make_unique<RummyTradImpl>();
   impl_map[GameType::FiveHundred] = std::make_unique<Rummy500Impl>();
   impl_map[GameType::Gin]         = std::make_unique<RummyGinImpl>();

}
