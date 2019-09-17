#pragma once
#include <iostream>

class LorentzVector {
public:
	LorentzVector();
	LorentzVector(double, double, double, double);
	void x(double);
	void y(double);
	void z(double);
	void t(double);
	double x() const;
	double y() const;
	double z() const;
	double t() const;
	double norm() const;

	LorentzVector add(const LorentzVector&) const;
	LorentzVector sub(const LorentzVector&) const;
	LorentzVector mul(double) const;
	void zboost(double);
	double dot(const LorentzVector&) const;
	void read();
	void print() const;
	
	LorentzVector operator-() const;
	void operator+=(const LorentzVector&);
	void operator-=(const LorentzVector&);
	void operator*= (double);	LorentzVector operator+(const LorentzVector&) const;
	LorentzVector operator-(const LorentzVector&) const;	friend LorentzVector operator*(const LorentzVector&, double);	friend std::ostream & operator<<(std::ostream&, const LorentzVector&);

private:
	double x_, y_, z_, t_;
	const unsigned long long c = 1;//299792458
};

std::ostream & operator<<(std::ostream &, const LorentzVector&);