#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main()
{

	Student* obj = new Student("Kostyuk S S", "28.12.2005", 968591868, "Tulchin",
		"Ukraine", "ItStep", "Vinnytsya", "Ukraine", 211);
	obj->Print();

	delete obj;
	return 0;
}

