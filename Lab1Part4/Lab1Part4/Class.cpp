#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include "Class.h"


Class::Class() {

	HW = 80.00;
	LAB = 50.00;
	PROJECT = 50.00;
	EXAM = 90.00;
	FINAL = 0;

}

Class::Class(double hw, double lab, double project, double exam) {

	HW = hw;
	LAB = lab;
	PROJECT = project;
	EXAM = exam;
	FINAL = 0;

}

double Class::getHW() {

	return HW;

};

double Class::getLAB() {

	return LAB;

};

double Class::getPROJECT() {

	return HW;

};

double Class::getEXAM() {

	return HW;

};

double Class::getFINAL() {


	FINAL = ((.2 * HW + .15 * LAB + .35 * PROJECT + .30 * EXAM)	);

	return FINAL;
};

void Class::changeHW(double h) {
	HW = h;

};


void Class::changeLAB(double l) {
	LAB = l;

};


void Class::changePROJECT(double p) {
	PROJECT = p;

};


void Class::changeEXAM(double e) {
	EXAM = e;

};

