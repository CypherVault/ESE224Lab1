#include <iostream>
#include <iomanip>
#include <cmath>
#include "rectangle.h"

Rectangle::Rectangle(void) {
    x_coord = 0;
    y_coord = 0;
    width = 1;
    height = 1;
}

Rectangle::Rectangle(double x, double y, double w, double h) {
    x_coord = x;
    y_coord = y;
    width = w;
    height = h;
}

double Rectangle::get_x_coord(void) {
    return x_coord;
}

double Rectangle::get_y_coord(void) {
    return y_coord;
}

double Rectangle::get_width(void) {
    return width;
}// these are all standard fucntions from earlier iteratiosn 

double Rectangle::get_height(void) {
    return height;
}

double Rectangle::area(void) const {
    return height * width;
}


void Rectangle::print(void) {
    std::cout << std::fixed << std::setprecision(2); // general print statment for eveeything isnce we need it for terminal showing on lab repport
    std::cout << "Origin: (" << get_x_coord() << ", " << get_y_coord() << ")" << std::endl;
    std::cout << "Width: " << std::setw(10) << std::left << get_width() << ", Height: " << std::setw(10) << std::left << get_height() << std::endl;
}

bool Rectangle::operator> (const Rectangle& rhs) {
    return (this->area() > rhs.area());
}

double Rectangle::operator- (const Rectangle& rhs) {
    return fabs(this->area() - rhs.area());
}

double Rectangle::compute_IOU(Rectangle& rhs) {
    double a;
    Rectangle r1, r2;
    double iw, ih, overlap;

    if (this->get_x_coord() >= rhs.get_x_coord()) {
        r2 = *this;
        r1 = rhs;
    }
    else {
        r2 = rhs;
        r1 = *this;
    }

    double Ax1, Ax2, Ay1, Ay2, Bx1, Bx2, By1, By2;

    Ax1 = r1.get_x_coord();
    Ay1 = r1.get_y_coord();


    Ax2 = r1.get_x_coord() + r1.get_width();
    Ay2 = r1.get_y_coord() + r1.get_height();
    Bx1 = r2.get_x_coord();


    By1 = r2.get_y_coord();
    Bx2 = r2.get_x_coord() + r2.get_width();
    By2 = r2.get_y_coord() + r2.get_height();

    if (Ax2 >= Bx1 && Ax1 <= Bx1 && Ax2 <= Bx2) { 
        iw = fabs(Ax2 - Bx1);
        
        //case 1 of sitation, regarding its INSIDE each other 

        if (By1 >= Ay1) {
            ih = fabs(Ay2 - By1);
        }
        else {
            ih = fabs(By2 - Ay1);
        }
      
    }
    else if (Ax1 <= Bx1 && Ax2 >= Bx2 && Ay1 <= By1 && Ay2 >= By2) {

        //case 2, regarding if it is partially inside 
        iw = fabs(Ax1 - Ax2) - fabs(Ax1 - Bx1) - fabs(Ax2 - Bx2);
        ih = fabs(Ay1 - Ay2) - fabs(Ay1 - By1) - fabs(Ay2 - By2);
    }
    else if (Ay2 < By1 || Ax2 < Bx1) {
        //case 3 when they arent even near eACH OTHER
        iw = 0;
        ih = 0;
    }
    else {
        std::cout << "case not applicable, either a not supplied test case or " << std::endl;
    }

    overlap = ih * iw;
    
    a = (overlap) / (r1.area() + r2.area() - overlap);
    return(a);
       
}
