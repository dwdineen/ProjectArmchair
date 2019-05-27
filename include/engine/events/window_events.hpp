#pragma once

#include "event.hpp"

namespace arm {

    class WindowClosedEvent : public Event
    {
    public:

        WindowClosedEvent() {}

        std::string ToString() const override
        {
            std::ostringstream sstream;
            sstream << "Window is Closed";
            return sstream.str();
        }
    };
}