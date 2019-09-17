#include "LorentzVector.h"
#include <iostream>
#include <cmath>

LorentzVector::LorentzVector() {
	x_ = y_ = z_ = t_ = 0;
}
LorentzVector::LorentzVector(double t, double x, double y, double z) {
	x_ = x;
	y_ = y;
	z_ = z;
	t_ = t;
}
void LorentzVector::x(double x) {
	x_ = x;
}
void LorentzVector::y(double y) {
	y_ = y;
}
void LorentzVector::z(double z) {
	z_ = z;
}
void LorentzVector::t(double t) {
	t_ = t;
}
double LorentzVector::x() const {
	return x_;
}
double LorentzVector::y() const {
	return y_;
}
double LorentzVector::z() const {
	return z_;
}
double LorentzVector::t() const {
	return t_;
}
double LorentzVector::dot(const LorentzVector& other) const {
	return c * c * t_ * other.t() - x_ * other.x() - y_ * other.y() - z_ * other.z();
}
double LorentzVector::norm() const {
	return dot(*this);
}
LorentzVector LorentzVector::add(const LorentzVector& other) const {
	return LorentzVector(x_ + other.x(),
		y_ + other.y(),
		z_ + other.z(),
		t_ + other.t());
}
LorentzVector LorentzVector::sub(const LorentzVector& other) const {
	return LorentzVector(x_ - other.x(),
		y_ - other.y(),
		z_ - other.z(),
		t_ - other.t());
}
LorentzVector LorentzVector::mul(double a) const {
	return LorentzVector(x_ * a, y_ * a, z_ * a, t_ * a);
}
void LorentzVector::read() {
	std::cout << "t: " << std:: endl;
	std::cin >> t_;
	std::cout << "x: " << std::endl;
	std::cin >> x_;
	std::cout << "y: " << std::endl;
	std::cin >> y_;
	std::cout << "z: " << std::endl;
	std::cin >> z_;
}
void LorentzVector::print() const {
	std::cout << "ct: " << c * t_ << std::endl;
	std::cout << "x: " << x_ << std::endl;
	std::cout << "y: " << y_ << std::endl;
	std::cout << "z: " << +z_ << std::endl;
}
void LorentzVector::zboost(double v) {
	double gamma = sqrt(1 - v * v / c / c);
	x_ = (x_-v*t_)/gamma;
	t_ = (t_-v*x_/c/c)/gamma;
}
