#pragma once

namespace arm {
namespace tileset {

const int PIXEL_WIDTH_PER_TILE = 5;
const int PIXEL_HEIGHT_PER_TILE = 5;
const int NUM_TILES_PER_ROW = 5;
const int NUM_ROWS = 5;

enum class Sprite
{
	SPRITE_A, // Refers to sprite in first position
	SPRITE_B  // Refers to sprite in second position
};

}
}