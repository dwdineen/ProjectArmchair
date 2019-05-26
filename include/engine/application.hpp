
#include <engine/window/window.hpp>

#include <memory>

namespace arm {


class Application
{
public:

	// Constructor
	Application();
	virtual ~Application() {}

	void Run();

private:

	std::unique_ptr<Window> window_;

};


} //arm