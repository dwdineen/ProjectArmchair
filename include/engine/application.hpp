
#include <engine/window/window.hpp>

#include <memory>

namespace arm {

class LayerStack;
class Event;

class Application
{
public:

	// Constructor
	Application();
	virtual ~Application() {}

	void Run();

	std::unique_ptr<LayerStack>& get_layer_stack()
	{
		return layer_stack_;
	}

private:

	bool OnEvent(std::shared_ptr<Event>);

	std::unique_ptr<Window> window_;
	std::unique_ptr<LayerStack> layer_stack_;

};


} //arm