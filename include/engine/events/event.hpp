#pragma once

#include <functional>
#include <memory>
#include <string>
#include <sstream>

namespace arm {

class Event
{
public:

	// This just creates an alias
	using EventFn = std::function<void(std::shared_ptr<Event>)>;

	virtual std::string ToString() const = 0;
};


enum class MouseButton
{
	LEFT,
	MIDDLE,
	RIGHT,
};

// The underlying values of this enum will
// match the ascii value if applicable
enum class Keyboard
{
    UNKNOWN = -1,
    
    BACKSPACE = 8, TAB_KEY, ENTER_KEY,

    ESCAPE = 27,

    SPACE = 32, EXCLAMATION_MARK, QUOTEMARKS, POUND_SYMBOL, DOLLAR_SIGN,
    PERCENT_SYMBOL, AMPERSAND, APOSTROPHE, OPEN_BRACE, CLOSE_BRACE,
    ASTERISK, PLUS_SIGN, DASH, PERIOD, FORWARD_SLASH,

    COMMA = 44,

    ZERO = 48, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE,

    LESS_THAN = 60, EQUAL_SIGN, GREATER_THAN, QUESTION_MARK, AT_SYMBOL,

    A = 65, B, C, D, E, F, G, H, I, J,
    K, L, M, N, O, P, Q, R, S, T,
    U, V, W, X, Y, Z,

    BACKSLASH = 92,
    CARAT = 94, UNDERSCORE, GRAVE,

    a = 97, b, c, d, e, f, g, h, i, j,
    k, l, m, n, o, p, q, r, s, t,
    u, v, w, x, y, z,

    TILDE = 126,

    LEFT_ARROW = 300, RIGHT_ARROW, UP_ARROW, DOWN_ARROW,


};

}
