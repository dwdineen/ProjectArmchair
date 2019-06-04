#pragma once

namespace arm {
namespace constants {

const int WIN_WIDTH = 1000;
const int WIN_HEIGHT = 700;

} // constants

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

	A = 65, B, C, D, E, F, G, H, I, J,
	K, L, M, N, O, P, Q, R, S, T,
	U, V, W, X, Y, Z,

	a = 97, b, c, d, e, f, g, h, i, j,
	k, l, m, n, o, p, q, r, s, t,
	u, v, w, x, y, z
};



}