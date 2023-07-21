#include "Airport.h"
void Airport::addPlane(Plane* plane) {
	planes.push_back(plane);
}
void Airport::goFly() {
	for (int i = 0; i < planes.size(); i++) {
		planes[i]->letsFly();
	}
}