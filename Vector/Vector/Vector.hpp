#pragma once
#include <iostream>

class Vector {

public:
	Vector();
	Vector(double, double, double);
	Vector(const Vector &);
	~Vector();

	double get_X();
	double get_Y();
	double get_Z();
	void set_X(double x);
	void set_Y(double y);
	void set_Z(double z);
	void clear();
	friend std::ostream& operator<<(std::ostream& os, const Vector & obj);
	Vector& operator++();
	Vector operator++(int);
	Vector&  operator--();
	Vector operator--(int);
	friend void swap(Vector &rhs, Vector &lhs);
	Vector& operator=(Vector rhs);
	Vector operator+=(const Vector & rhs);
	friend Vector operator+(Vector lhs, const Vector & rhs);
	Vector operator-=(const Vector & rhs);
	friend Vector operator-(Vector lhs, const Vector & rhs);
	friend double operator*(const Vector & lhs, const Vector & rhs);
	Vector operator*(double value);
	
	
	double operator[](int index);


private:
	double x, y, z;
};