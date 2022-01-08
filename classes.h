#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>

class Student {

public: 
	std::string name;
	std::string  major;
	double gpa;
	Student(std::string aName, std::string aMajor, double aGpa){
	
	name = aName;
	major = aMajor;
	gpa = aGpa;
	
	}

};
#endif
