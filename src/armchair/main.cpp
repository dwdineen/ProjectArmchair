#include <iostream>
#include <engine/application.hpp>
#include <util/logging.hpp>

class ArmchairApplication : public arm::Application
{
public:
	ArmchairApplication() {}
};

int main()
{
	//ARMLOG(std::string("Hello"));
	ARMLOG("HEY");
	arm::Application* app = new ArmchairApplication;
	app->Run();
}
