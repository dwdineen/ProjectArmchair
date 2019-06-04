#include <engine/application.hpp>
#include <util/constants.hpp>
#include <util/logging.hpp>
#include <engine/layer_stack.hpp>

#include <thread>
#include <chrono>

namespace arm {

Application::Application()
	: layer_stack_(new LayerStack)
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
	window_->SetEventCallbackFunction(std::bind(&Application::OnEvent, this,
		std::placeholders::_1));

	// Runs until we quit the game
	while (true)
	{
		// Poll our window for io events
		window_->OnUpdate();
		layer_stack_->OnUpdate();
		layer_stack_->OnDraw();

		// Artificially making updates really slow so we can see what
		// is going on
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}

}

bool Application::OnEvent(std::shared_ptr<Event> evnt)
{

	ARMLOG("Handle Event");

	layer_stack_->OnEvent(evnt);

	return true;
}

} //arm