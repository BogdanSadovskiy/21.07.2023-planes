using namespace std;

#include <iostream>
#include "Plane.h"
#include "PassPlane.h"
#include "Military.h"
#include "Airport.h"

int main()
{
	
	Plane* Pass = new PassPlane();
	Plane* Mill = new Military();
	Airport Kyiv;
	
	Kyiv.addPlane(Pass);
	Kyiv.addPlane(Mill);
	Kyiv.goFly();
}

