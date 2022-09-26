#pragma once

class Class
{

private:
	double HW;
	double LAB;
	double PROJECT;
	double EXAM;
	double FINAL;

public:

	Class();
	Class(double HW, double LAB, double PROJECT, double EXAM);
	double getHW();
	double getLAB();
	double getPROJECT();
	double getEXAM();
	double getFINAL();
	void changeHW(double h);
	void changeLAB(double l);
	void changePROJECT(double p);
	void changeEXAM(double e);


};