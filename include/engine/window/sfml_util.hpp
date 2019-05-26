#pragma once

#include <engine/events/event.hpp>
#include <SFML/Graphics.hpp>

inline arm::Keyboard SfmlKeyToArm(sf::Event key_event)
{
	switch (key_event.key.code)
	{
	case sf::Keyboard::A:
		if (key_event.key.shift) return arm::Keyboard::A;
		else return arm::Keyboard::a;
	case sf::Keyboard::B:
		if (key_event.key.shift) return arm::Keyboard::B;
		else return arm::Keyboard::b;
	default:
		return arm::Keyboard::UNKNOWN;
	}
}