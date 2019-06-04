#pragma once

#include <engine/render_object.hpp>
#include <engine/events/event.hpp>
#include <engine/window/window.hpp>

#include <vector>
#include <memory>

namespace arm {

class Layer
{
public:

	bool OnEvent(std::shared_ptr<Event> evnt) 
	{
		ARMLOG("Layer Event");
		for (auto& obj : render_objects_)
		{
			if (obj->OnEvent(evnt)) return true;
		}
		return false;
	}

	void OnUpdate()
	{
		for (auto& obj : render_objects_)
			obj->OnUpdate();
	}

	void OnDraw(std::shared_ptr<Window> window)
	{
		for (auto& obj : render_objects_)
			window->DrawRenderObject(obj);
	}

	const std::vector<std::shared_ptr<RenderObject>>& 
		get_render_objects() const { return render_objects_; }

protected:
	void add_render_object(std::shared_ptr<RenderObject> obj)
	{
		render_objects_.push_back(obj);
	}

private:
	std::vector<std::shared_ptr<RenderObject>> render_objects_;
};


}