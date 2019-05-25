#include <armchair/model.hpp>
#include <armchair/sim_object/sim_object.hpp>

namespace arm {

Model::Model()
{
	simulated_objects_.insert(std::make_shared<SimObject>("Alice"));
	simulated_objects_.insert(std::make_shared<SimObject>("Bob"));
}

void Model::Update()
{
	for (auto& obj : simulated_objects_) obj->Update();
}


}