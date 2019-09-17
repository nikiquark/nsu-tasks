#include "ArrayStat.h"

ArrayStat::ArrayStat(std::string& filepath) {
	std::ifstream input(filepath);
	if (!input) {
		throw fileException("File Exception: file could not be opened");
	}

	if (!std::cin >> N) {
		throw fileException("File Exception: ivalid input");
	}

	
	if (arr == NULL) {

	}
	for (int i = 0; i < N; i++)
		if (!std::cin >> arr[i]) {
			throw fileException("File Exception: ivalid input");
		}
	input.close();
}

ArrayStat::~ArrayStat(){
	delete[] arr;
}

fileException::fileException(std::string err){
	error = err;
}

const char* fileException::what() const throw() {
	return error.c_str();
}