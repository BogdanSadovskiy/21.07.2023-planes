#include "Military.h"
#include<iostream>
Military::Military(){
	mass = 10000;
	speed = 2000;
}
void Military::letsFly() {
	std::cout << "GO MILL Plane\n";
	std::cout << "Mass - " << mass << "Speed - " << speed << std::endl;
}