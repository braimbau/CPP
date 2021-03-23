#include "Base.hpp"

Base::Base() {};

Base::~Base() {};

Base::Base(const Base & src) {
	(void)src;
};

Base & Base::operator=(const Base & src) {
	(void)src;
	return *this;
};
