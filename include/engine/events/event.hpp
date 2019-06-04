#pragma once

#include <functional>
#include <memory>
#include <string>
#include <sstream>

namespace arm {

class Event
{
public:

	// This just creates an alias
	using EventFn = std::function<bool(std::shared_ptr<Event>)>;

	virtual std::string ToString() const = 0;
};

template<typename T>
bool DispatchEvent(std::shared_ptr<Event> evnt, const Event::EventFn& fn) {
	std::shared_ptr<T> casted_evnt = std::dynamic_pointer_cast<T>(evnt);
	if (casted_evnt) return fn(evnt);
	return false;
}


}
