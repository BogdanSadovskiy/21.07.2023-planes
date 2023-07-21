#pragma once
#include <vector>
#include"Plane.h"
class Airport
{
private:
	std::vector <Plane*> planes;
public:
	void addPlane(Plane* plane);
	void goFly();
};

