#include "A.hpp"

A::A() {};

A::~A() {};

A::A(const A & src) {
	(void)src;
};

A & A::operator=(const A & src) {
	(void)src;
	return *this;
};
