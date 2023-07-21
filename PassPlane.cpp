#include "PassPlane.h"
#include<iostream>
#include "Plane.h"


PassPlane::PassPlane() {
	mass = 5000;
	speed = 2000;
}
void PassPlane::letsFly() {
	std::cout << "GO Pass Plane\n";
	std::cout << "Mass - " << mass << "Speed - " << speed << std::endl;
}