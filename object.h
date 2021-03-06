#pragma once

namespace CONSTS{

	const double G = 6.67384e-11;
	const double pi = 3.1415926;
	const int width = 800;
	const int height = 600;

}

class object{
public:
	double radius = 1.0;
	double mas = 500.0;
	double pos_x;
	double pos_y;
	double acceleration_x = 0;
	double acceleration_y = 0;

public:
	static double distance(const object &, const object &);
	void acceleration(const object &obj);
	void merge(const object &obj);
};
