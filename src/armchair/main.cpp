#include <iostream>
#include <engine/application.hpp>
#include <util/logging.hpp>

#include <armchair/layers/test_layer.hpp>
#include <engine/layer_stack.hpp>

int main()
{
	arm::Application* app = new arm::Application;

	std::shared_ptr<TestLayer> test_layer(new TestLayer);
	app->get_layer_stack()->PushLayer(test_layer);

	app->Run();
}
