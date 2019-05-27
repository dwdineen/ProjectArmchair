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
    case sf::Keyboard::C:
        if (key_event.key.shift) return arm::Keyboard::C;
        else return arm::Keyboard::c;
    case sf::Keyboard::D:
        if (key_event.key.shift) return arm::Keyboard::D;
        else return arm::Keyboard::d;
    case sf::Keyboard::E:
        if (key_event.key.shift) return arm::Keyboard::E;
        else return arm::Keyboard::e;
    case sf::Keyboard::F:
        if (key_event.key.shift) return arm::Keyboard::F;
        else return arm::Keyboard::f;
    case sf::Keyboard::G:
        if (key_event.key.shift) return arm::Keyboard::G;
        else return arm::Keyboard::g;
    case sf::Keyboard::H:
        if (key_event.key.shift) return arm::Keyboard::H;
        else return arm::Keyboard::h; 
    case sf::Keyboard::I:
            if (key_event.key.shift) return arm::Keyboard::I;
            else return arm::Keyboard::i;
    case sf::Keyboard::J:
        if (key_event.key.shift) return arm::Keyboard::J;
        else return arm::Keyboard::j;
    case sf::Keyboard::K:
        if (key_event.key.shift) return arm::Keyboard::K;
        else return arm::Keyboard::k;
    case sf::Keyboard::L:
        if (key_event.key.shift) return arm::Keyboard::L;
        else return arm::Keyboard::l;
    case sf::Keyboard::M:
        if (key_event.key.shift) return arm::Keyboard::M;
        else return arm::Keyboard::m;
    case sf::Keyboard::N:
        if (key_event.key.shift) return arm::Keyboard::N;
        else return arm::Keyboard::n;
    case sf::Keyboard::O:
        if (key_event.key.shift) return arm::Keyboard::O;
        else return arm::Keyboard::o;
    case sf::Keyboard::P:
        if (key_event.key.shift) return arm::Keyboard::P;
        else return arm::Keyboard::p;
    case sf::Keyboard::Q:
        if (key_event.key.shift) return arm::Keyboard::Q;
        else return arm::Keyboard::q;
    case sf::Keyboard::R:
        if (key_event.key.shift) return arm::Keyboard::R;
        else return arm::Keyboard::r;
    case sf::Keyboard::S:
        if (key_event.key.shift) return arm::Keyboard::S;
        else return arm::Keyboard::s;
    case sf::Keyboard::T:
        if (key_event.key.shift) return arm::Keyboard::T;
        else return arm::Keyboard::t;
    case sf::Keyboard::U:
        if (key_event.key.shift) return arm::Keyboard::U;
        else return arm::Keyboard::u;
    case sf::Keyboard::V:
        if (key_event.key.shift) return arm::Keyboard::V;
        else return arm::Keyboard::v;
    case sf::Keyboard::W:
        if (key_event.key.shift) return arm::Keyboard::W;
        else return arm::Keyboard::w;
    case sf::Keyboard::X:
        if (key_event.key.shift) return arm::Keyboard::X;
        else return arm::Keyboard::x;
    case sf::Keyboard::Y:
        if (key_event.key.shift) return arm::Keyboard::Y;
        else return arm::Keyboard::y;
    case sf::Keyboard::Z:
        if (key_event.key.shift) return arm::Keyboard::Z;
        else return arm::Keyboard::z;
	default:
		return arm::Keyboard::UNKNOWN;
	}
}