#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <exception>
#include <vector>

class fileException :public std::exception {
private:
	std::string error;
public:
	fileException(std::string);
	virtual const char* what() const throw ();
};

class ArrayStat {
public:
	ArrayStat(std::string&);
	~ArrayStat();
private:
	int N = 0;
	std::vector<int> arr;
};