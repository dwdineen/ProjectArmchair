#pragma once

#include <set>
#include <memory>

namespace arm
{

// This is called forward declaration. It tells the compiler
// "Hey, trust that I have something called SimObj, but in this
//  file you don't need to know the details of it"
class SimObject;

// Model will the owner of all simulated objects in the game
class Model {
public:

	// This just creates an alias, which you can see used in private
	// section
	using SimSet = std::set<std::shared_ptr<SimObject>>;

	// Model constructor. For now, defined to just fill set with
	// a few objects
	Model();

	// Updates every simulated object
	void Update();

private:

	SimSet simulated_objects_;

};

} // namespace arm