/******************************************************************
* INCLUDE FILES                                                   *
*******************************************************************/
#include <cstdio>
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex

/******************************************************************
* FUNCTION IMPLEMENTATION                     <Module>_<Word>+    *
*******************************************************************/
void print_block(int n, char c, std::mutex *m) {
	// critical section (exclusive access to std::cout signaled by locking mutex):
	m->lock();
	for (int32_t i = 0; i < n; ++i) {
		std::cout << c;
	}
	std::cout << '\n';
	m->unlock();
}

int32_t main(int32_t argc, char **argv)
{
	std::mutex mtx; // mutex for critical section
	(void)argc;
	(void)argv;

	std::thread th1(print_block, 500, '*', &mtx);
	std::thread th2(print_block, 500, '$', &mtx);

	th1.join();
	th2.join();

	return 0;
}

