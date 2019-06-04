
#include <engine/window/window.hpp>
#include <engine/window/sfml_util.hpp>

#include <engine/events/mouse_events.hpp>
#include <engine/events/keyboard_events.hpp>
#include <engine/events/window_events.hpp>

#include <util/logging.hpp>

namespace arm
{

/* During OnUpdate(), we want to collect all the SFML
 * events, then convert them to arm::Event, then pass
 * them along via the callback function to the rest of
 * our system. The key insight here is that it is this
 * function's job only to translate events from SFML
 * events to arm::Event, and send them along. This
 * function does not care who/where the events are going.
 * This seperation of concerns makes expanding the project
 * easier, and results in less "spaghetti code". */
void Window::OnUpdate() {
    sf::Event evnt;
    while (sfml_window_.pollEvent(evnt))
    {
        // Mouse Pressed Event
        if (evnt.type == sf::Event::MouseButtonPressed)
        {
            arm::MouseButton btn;
            if (evnt.mouseButton.button == sf::Mouse::Left)
                btn = MouseButton::LEFT;
            if (evnt.mouseButton.button == sf::Mouse::Middle)
                btn = MouseButton::MIDDLE;
            if (evnt.mouseButton.button == sf::Mouse::Right)
                btn = MouseButton::RIGHT;

            event_cb_fn_(std::make_shared<MouseClickedEvent>
                (evnt.mouseButton.x, evnt.mouseButton.y, btn));
        }

        // Mouse Released Event
        if (evnt.type == sf::Event::MouseButtonReleased)
        {
            arm::MouseButton btn;
            if (evnt.mouseButton.button == sf::Mouse::Left)
                btn = MouseButton::LEFT;
            if (evnt.mouseButton.button == sf::Mouse::Middle)
                btn = MouseButton::MIDDLE;
            if (evnt.mouseButton.button == sf::Mouse::Right)
                btn = MouseButton::RIGHT;

            event_cb_fn_(std::make_shared<MouseReleasedEvent>
                (evnt.mouseButton.x, evnt.mouseButton.y, btn));
        }

        if (evnt.type == sf::Event::KeyPressed)
        {
            event_cb_fn_(std::make_shared<KeyPressedEvent>(SfmlKeyToArm(evnt)));
        }

        if (evnt.type == sf::Event::KeyReleased)
        {
            event_cb_fn_(std::make_shared<KeyReleasedEvent>(SfmlKeyToArm(evnt)));
        }

        // Window Closed Event

        if (evnt.type == sf::Event::Closed) {
            event_cb_fn_(std::make_shared<WindowClosedEvent>());
        }
    }
}

void Window::DrawRenderObject(std::shared_ptr<RenderObject> obj)
{
	// ARMLOG("Drawing render object!");
}

}