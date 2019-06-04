#pragma once

#include <engine/events/event.hpp>
#include <util/constants.hpp>
#include <SFML/Graphics.hpp>

inline arm::Keyboard SfmlKeyToArm(sf::Event key_event)
{
	switch (key_event.key.code)
	{
    //Letter Keys
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

    //Number Keys
    case sf::Keyboard::Num0:
        if (key_event.key.shift) return arm::Keyboard::CLOSE_BRACE;
        else return arm::Keyboard::ZERO;
    case sf::Keyboard::Num1:
        if (key_event.key.shift) return arm::Keyboard::EXCLAMATION_MARK;
        else return arm::Keyboard::ONE;
    case sf::Keyboard::Num2:
        if (key_event.key.shift) return arm::Keyboard::AT_SYMBOL;
        else return arm::Keyboard::TWO;
    case sf::Keyboard::Num3:
        if (key_event.key.shift) return arm::Keyboard::POUND_SYMBOL;
        else return arm::Keyboard::THREE;
    case sf::Keyboard::Num4:
        if (key_event.key.shift) return arm::Keyboard::DOLLAR_SIGN;
        else return arm::Keyboard::FOUR;
    case sf::Keyboard::Num5:
        if (key_event.key.shift) return arm::Keyboard::PERCENT_SYMBOL;
        else return arm::Keyboard::FIVE;
    case sf::Keyboard::Num6:
        if (key_event.key.shift) return arm::Keyboard::CARAT;
        else return arm::Keyboard::SIX;
    case sf::Keyboard::Num7:
        if (key_event.key.shift) return arm::Keyboard::AMPERSAND;
        else return arm::Keyboard::SEVEN;
    case sf::Keyboard::Num8:
        if (key_event.key.shift) return arm::Keyboard::ASTERISK;
        else return arm::Keyboard::EIGHT;
    case sf::Keyboard::Num9:
        if (key_event.key.shift) return arm::Keyboard::OPEN_BRACE;
        else return arm::Keyboard::NINE;



    //Utility Keys
    case sf::Keyboard::Enter:
        return arm::Keyboard::ENTER_KEY;
    case sf::Keyboard::Backspace:
        return arm::Keyboard::BACKSPACE;
    case sf::Keyboard::Tab:
        return arm::Keyboard::TAB_KEY;
    case sf::Keyboard::Escape:
        return arm::Keyboard::ESCAPE;
    case sf::Keyboard::Space:
        return arm::Keyboard::SPACE;
    case sf::Keyboard::Tilde:
        if (key_event.key.shift) return arm::Keyboard::TILDE;
        else return arm::Keyboard::GRAVE;
    case sf::Keyboard::Dash:
        if (key_event.key.shift) return arm::Keyboard::UNDERSCORE;
        else return arm::Keyboard::DASH;
    case sf::Keyboard::Equal:
        if (key_event.key.shift) return arm::Keyboard::PLUS_SIGN;
        else return arm::Keyboard::EQUAL_SIGN;
    case sf::Keyboard::Comma:
        if (key_event.key.shift) return arm::Keyboard::LESS_THAN;
        else return arm::Keyboard::COMMA;
    case sf::Keyboard::Period:
        if (key_event.key.shift) return arm::Keyboard::GREATER_THAN;
        else return arm::Keyboard::PERIOD;
    case sf::Keyboard::Backslash:
        if (key_event.key.shift) return arm::Keyboard::QUESTION_MARK;
        else return arm::Keyboard::BACKSLASH;

    //Arrow Keys
    case sf::Keyboard::Left:
        return arm::Keyboard::LEFT_ARROW;
    case sf::Keyboard::Right:
        return arm::Keyboard::RIGHT_ARROW;
    case sf::Keyboard::Down:
        return arm::Keyboard::DOWN_ARROW;
    case sf::Keyboard::Up:
        return arm::Keyboard::UP_ARROW;

	default:
		return arm::Keyboard::UNKNOWN;
	}
}