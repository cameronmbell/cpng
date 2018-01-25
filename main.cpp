#include <iostream>

#include "png.hpp"

int main() {
	png p("../res/lenna.png");

	std::cout << std::boolalpha << p.is_valid() << std::endl;

	return 0;
}
