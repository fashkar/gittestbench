#include <iostream>



void some_func(void);

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;

	for(int i=0;i<10;++i)
		std::cout << i << std::endl;

	std::cout << "bye, world!" << std::endl;
    return 0;
}

void some_func(void)
{
	std::cout << __FUNCTION__ << std::endl;
}
