#include <engine/render_object.hpp>
#include <engine/sprite_map.hpp>
#include <engine/events/mouse_events.hpp>
#include <util/logging.hpp>

class Dwarf : public arm::RenderObject
{
public:

	virtual bool OnEvent(std::shared_ptr<arm::Event> evnt)
	{
		ARMLOG("Dwarf Event");
		return arm::DispatchEvent<arm::MouseClickedEvent>(evnt,
			[](std::shared_ptr<arm::Event> evnt) {
				ARMLOG("Dwarf Event Handle: " + evnt->ToString());
				return true;
			});
	}

	virtual void OnUpdate()
	{
		ARMLOG("Dwarf Update");
	}

	std::pair<int, int> GetCoordinates() const override
	{
		return { x_, y_ };
	}

	arm::tileset::Sprite GetSprite() const override
	{
		return arm::tileset::Sprite::SPRITE_A;
	}

private:
	int x_ = 0;
	int y_ = 0;
};