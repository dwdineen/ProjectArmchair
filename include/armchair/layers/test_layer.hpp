#include <engine/layer.hpp>

#include <armchair/objects/dwarf.hpp>

class TestLayer : public arm::Layer
{
public:
	TestLayer()
	{
		add_render_object(std::make_shared<Dwarf>());
	}

private:
};