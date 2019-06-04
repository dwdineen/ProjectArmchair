#pragma once

#include <engine/events/event.hpp>
#include <engine/window/window.hpp>

#include <vector>

#include "layer.hpp"

namespace arm {


class LayerStack {

public:

	void PushLayer(std::shared_ptr<Layer> layer)
	{
		insert_it_ = ++(layers_.insert(insert_it_, layer));
	}

	void PopLayer()
	{
		layers_.erase(--insert_it_);
	}

	void PushOverlay(std::shared_ptr<Layer> layer)
	{
		layers_.push_back(layer);
	}

	void PopOverlay()
	{
		layers_.pop_back();
	}

	bool OnEvent(std::shared_ptr<Event> evnt)
	{
		ARMLOG("Stack event");
		for (size_t i = layers_.size() - 1; i >= 0; --i)
		{
			if (layers_[i]->OnEvent(evnt)) return true;
		}
		return false;
	}

	void OnUpdate()
	{
		for (auto& layer : layers_)
			layer->OnUpdate();
	}

	void OnDraw()
	{
		for (auto& layer : layers_)
			layer->OnDraw(window_);
	}
private:

	// The further in the vector, the higher on the stack
	std::vector<std::shared_ptr<Layer>> layers_;

	// this is the spot the next layer
	// should be inserted at so that it 
	// it is behind all overlays
	std::vector<std::shared_ptr<Layer>>::iterator insert_it_ = layers_.begin();

	std::shared_ptr<Window> window_;
};

}