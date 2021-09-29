#pragma once
#ifndef VECTOR_H
#define VECTOR_H

class roundCone {

	double x, y, z;
	double r, h;

public:
	void In();
	void Out();
	double Volume()const;

	roundCone() {}
	roundCone(double myX, double myY, double myZ, double myR, double myH) :x(myX), y(myY), z(myZ), r(myR), h(myH) {}
	roundCone(const roundCone& rC) :x(rC.x), y(rC.y), z(rC.z), r(rC.r), h(rC.h) {}
	~roundCone() {}

	const roundCone& operator=(const roundCone& R);
	const roundCone& operator/=(double R);
	bool operator<=(const roundCone& R);

	friend istream& operator>>(istream& stream, roundCone& V);
	friend ostream& operator<<(ostream& stream, const roundCone& V);
};
#endif
