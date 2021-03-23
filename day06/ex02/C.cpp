#include "C.hpp"

C::C() {};

C::~C() {};

C::C(const C & src) {
	(void)src;
};

C & C::operator=(const C & src) {
	(void)src;
	return *this;
};
