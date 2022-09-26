#pragma once

class Rectangle
{

private:
	double x_coord, y_coord, width, height;

public:
	Rectangle();
	Rectangle(double x, double y, double w, double h);
	double get_x_coord();
	double get_y_coord();
	double get_width();
	double get_height();
	double area() const;
	void make_mirror_origin();
	void make_mirror_x();
	void make_mirror_y();
	void print();
	bool operator > (const Rectangle& rhs);
	double operator- (const Rectangle& rhs);
	double compute_IOU(Rectangle& rhs);
};

