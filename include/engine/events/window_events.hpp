#include "event.hpp"

namespace arm {

class WindowResizeEvent : public Event
{
public:

    WindowResizeEvent(int width, int height) 
		: new_width_(width), new_height_(height) {}

    std::string ToString() const override
    {
        std::ostringstream sstream;
        sstream << "Window Resized. New Width: " << new_width_ << " "
				<< "New Height:" << new_height_ << " " << std::endl;
        return sstream.str();
    }
private:
    int new_width_, new_height_;
};








}