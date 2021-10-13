#include "RK4.h"
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

double function(double _x, double _v, double _h, int num) {
	double x2 = _x, v2 = _v, h2 = _h, u2 = _v;
	switch (num) {
	case 1:
		return -0.5*v2;
	case 2:
		return ( 1 / (pow(x2, 4) + 1))*pow(u2, 2) + u2 - pow(u2, 3)*sin(10*x2);
	case 3:
		return 0;
	}
}

double function2(double _x, double _v1, double _v2, double _h, int num, double a, double b, double c) {
	double x2 = _x, v21 = _v1, h2 = _h, v22 = _v2;
	switch (num) {
	case 1:
		return v21;
	case 2:
		return a*sin(v21);
	case 3:
		return 0;
	}
}

void RKsys(double &_x, double &_v1, double &_v2, double _h, double a, double b, double c) {
	double h = _h, x = _x, v21 = _v1, v22 = _v2;
	double k1, k2, k3, k4;
	double q1, q2, q3, q4;
	k1 = h * function2(x, v21, v22, h, 1, a, b, c);
	q1 = h * function2(x, v21, v22, h, 2, a, b, c);

	k2 = h * function2(x + h / 2, v21 + q1 / 2, v22 + k1 / 2, h, 1, a, b, c);
	q2 = h * function2(x + h / 2, v21 + q1 / 2, v22 + k1 / 2, h, 2, a, b, c);

	k3 = h * function2(x + h / 2, v21 + q2 / 2, v22 + k2 / 2, h, 1, a, b, c);
	q3 = h * function2(x + h / 2, v21 + q2 / 2, v22 + k2 / 2, h, 2, a, b, c);

	k4 = h * function2(x + h, v21 + q3, v22 + k3, h, 1, a, b, c);
	q4 = h * function2(x + h, v21 + q3, v22 + k3, h, 1, a, b, c);

	v22 = v22 + (k1 + 2*k2 + 2*k3 + k4) / 6;
	v21 = v21 + (q1 + 2*q2 + 2*q3 + q4) / 6;
	_v1 = v21; _v2 = v22; _x = _x + h;
}

void RK4(double &_x, double &_v, double _h, int num) {
	double x2 = _x, v2 = _v, h2 = _h;
	double k1, k2, k3, k4;
	k1 = function(x2, v2, h2, num);
	k2 = function(x2 + h2 / 2, v2 + h2 * k1 / 2, h2, num);
	k3 = function(x2 + h2 / 2, v2 + h2 * k2 / 2, h2, num);
	k4 = function(x2 + h2, v2 + h2 * k3, h2, num);
	x2 = x2 + h2;
	v2 = v2 + h2 * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
	_x = x2; _v = v2;
}

void RK42(double &_x1, double &_v1, double _h, int num) {
	double x1 = _x1, v1 = _v1, h1 = _h/2;
	double k1, k2, k3, k4;
	k1 = function(x1, v1, h1, num);
	k2 = function(x1 + h1 / 2, v1 + h1 * k1 / 2, h1, num);
	k3 = function(x1 + h1 / 2, v1 + h1 * k2 / 2, h1, num);
	k4 = function(x1 + h1, v1 + h1 * k3, h1, num);
	x1 = x1 + h1;
	v1 = v1 + h1 * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
	_x1 = x1; _v1 = v1;
}

void CheckLocalFault(int num, double x, double v, double &h, double E, int &c1, int &c2){
	double h1 = h / 2;
	double x1 = x, v1 = v, s;
	double xstart = x, vstart = v;
	RK4(x, v, h, num);
	RK4(x1, v1, h1, num);
	RK4(x1, v1, h1, num);
	s = (v1 - v) / 15;
	if (abs(s) > E){
		h = h / 2;
		c1++;
		CheckLocalFault(num, xstart, vstart, h, E, c1, c2);
	}
	else if (abs(s) < (E / 32)){
		h = h * 2;
		c2++;
	}
	return;
}
void CheckLocalFaultSys(double x, double v1, double v2, double &h, double E, int &c1, int &c2, double a, double b, double c) {
	double h1 = h / 2;
	double x1 = x, v21 = v1, v22=v2, s;
	double xstart = x, v1start = v1, v2start = v2;
	RKsys(x, v21, v22, h, a, b, c);
	RKsys(x, v1start, v2start, h / 2, a, b, c);
	RKsys(x, v1start, v2start, h / 2, a, b, c);
	double pogr = sqrt((v21 - v1start)*(v21 - v1start) + (v22 - v2start)*(v22 - v2start));
	s = pogr / 15;
	if (abs(s) > E) {
		h = h / 2;
		c1++;
		CheckLocalFaultSys(x, v1, v2, h, E, c1, c2, a, b, c);
	}
	else if (abs(s) < (E / 32)) {
		h = h * 2;
		c2++;
	}
	return;
}