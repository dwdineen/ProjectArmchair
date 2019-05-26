#include <engine/application.hpp>
#include <util/constants.hpp>
#include <util/logging.hpp>

namespace arm {

void TestCallback(std::shared_ptr<Event> evnt)
{
	ARMLOG(evnt->ToString());
}

Application::Application()
{

}

void Application::Run()
{

	// create window
	window_.reset(new Window(
		constants::WIN_WIDTH,
		constants::WIN_HEIGHT,
		"Test"
	));

	// set window callback function
	// temporary: set to test function defined above
	window_->SetEventCallbackFunction(TestCallback);

	// Runs until we quit the game
	while (true)
	{
		// Poll our window for io events
		window_->OnUpdate();
	}

}

} //arm