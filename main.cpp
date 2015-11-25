#include <iostream>

#ifdef CAPTURE_PARAMS_FROM_LRT
    #define CLK_SYS_SPEED 500000
#else
    #ifdef RUN_AT_15FPS
    #define CLK_SYS_SPEED 500000
    #else
    #define CLK_SYS_SPEED 500000
    #endif
#endif

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
