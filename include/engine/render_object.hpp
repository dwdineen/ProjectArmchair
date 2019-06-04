#pragma once

#include <engine/events/event.hpp>
#include "sprite_map.hpp"

namespace arm {

class RenderObject
{
public:
	virtual bool OnEvent(std::shared_ptr<Event>) = 0;
	virtual void OnUpdate() = 0;
	virtual std::pair<int, int> GetCoordinates() const = 0;
	virtual tileset::Sprite GetSprite() const = 0;
};

}