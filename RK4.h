#pragma once

double function(double _x, double  _v, double _h, int num);
void RK4(double &_x, double &_v, double _h, int num);
void RK42(double &_x1, double &_v1, double _h1, int num);
//void check(double x, double v, double &h, int num, double x1, double v1, double E, int &c1, int &c2);
void CheckLocalFault(int num, double x, double v, double &h, double eps, int &c1, int &c2);
void RKsys(double &_x, double &_v1, double &_v2, double _h, double a, double b, double c);
void CheckLocalFaultSys(double x, double v1, double v2, double &h, double E, int &c1, int &c2, double a, double b, double c);