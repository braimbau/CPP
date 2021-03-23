#include "B.hpp"

B::B() {};

B::~B() {};

B::B(const B & src) {
	(void)src;
};

B & B::operator=(const B & src) {
	(void)src;
	return *this;
};
