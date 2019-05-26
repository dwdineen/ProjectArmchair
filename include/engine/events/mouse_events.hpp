#include "event.hpp"
namespace arm {

class MouseClickedEvent : public Event
{
public:

	MouseClickedEvent(int x, int y, MouseButton button)
		: x_(x), y_(y), button_(button) {}

	std::string ToString() const override
	{
		std::ostringstream sstream;
		sstream << "MouseClicked: " << x_ << " " << y_;
		return sstream.str();
	}

private:
	int x_, y_;
	MouseButton button_;
};

}