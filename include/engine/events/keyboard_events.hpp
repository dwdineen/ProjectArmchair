#include "event.hpp"

namespace arm {

class KeyPressedEvent : public Event
{
public:

	KeyPressedEvent(Keyboard key) : key_(key) {}

	std::string ToString() const override
	{
		int key_int = static_cast<int>(key_);

		std::ostringstream sstream;
		sstream << "KeyPressed: " << key_int << " " 
			    << (char) ((key_int >= 33 && key_int <= 126) ? key_int : ' ');
		return sstream.str();
	}

private:
	Keyboard key_;
};

class KeyReleasedEvent : public Event
{
public:

    KeyReleasedEvent(Keyboard key) : key_(key) {}

    std::string ToString() const override
    {
        int key_int = static_cast<int>(key_);

        std::ostringstream sstream;
        sstream << "KeyReleased: " << key_int << " "
            << (char)((key_int >= 33 && key_int <= 126) ? key_int : ' ');
        return sstream.str();
    }

private:
    Keyboard key_;
};

}