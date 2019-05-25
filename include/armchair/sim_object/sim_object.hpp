#pragma once 

#include <iostream>
#include <string>

namespace arm
{

class SimObject
{
public:

	SimObject(const std::string& name) : name_(name) {}
	virtual ~SimObject() {}

	virtual void Update() { std::cout << "Updated: " << name_ << "!" << std::endl; }

private:
	std::string name_;
};

}