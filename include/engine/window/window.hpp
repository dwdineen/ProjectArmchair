#pragma once

#include <engine/events/event.hpp>
#include <engine/render_object.hpp>
#include <SFML/Graphics.hpp>

namespace arm {

class Window
{
public:
	
	// Consutrctor -- set up SFML window
	Window(int width, int height, const std::string& title)
		: sfml_window_(sf::VideoMode(width, height), title) {}

	/* The only way our program can know about IO events
	 * (clicks, keyboard presses, mouse moves, etc.) is
	 * is from the SFML window. When we poll for events,
	 * we want to call a function somewhere else in the
	 * program that deals with that event. An Event::EventFn
	 * (defined in event.hpp) is simply a pointer to function
	 * somewhere else in the program. The arm::Window class
	 * does not care, what function this really is. */
	void SetEventCallbackFunction(const Event::EventFn& fn) 
	{ 
		event_cb_fn_ = fn; 
	}

	// Called once per frame, handles IO events
	void OnUpdate();

	// Draw tile
	void DrawRenderObject(std::shared_ptr<RenderObject> obj);

private:

	Event::EventFn event_cb_fn_;
	sf::RenderWindow sfml_window_;
};


}
