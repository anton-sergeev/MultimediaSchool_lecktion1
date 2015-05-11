/******************************************************************
* INCLUDE FILES                                                   *
*******************************************************************/
#include <cstdio>
#include <iostream>           // std::cout
#include <thread>             // std::thread
#include <mutex>              // std::mutex
#include <condition_variable> // std::condition_variable

/******************************************************************
* STATIC DATA                                                     *
*******************************************************************/
std::mutex mtx;
std::condition_variable cv;
bool ready = false;

/******************************************************************
* FUNCTION IMPLEMENTATION                     <Module>_<Word>+    *
*******************************************************************/
void print_id(int32_t id) {
	std::unique_lock<std::mutex> lck(mtx);
	while(!ready) {
		cv.wait(lck);
	}
	// ...
	std::cout << "thread " << id << '\n';
}

void print_block(int32_t n, char c, std::mutex *m) {
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
	(void)argc;
	(void)argv;

	std::thread threads[10];
	// spawn 10 threads:
	for(int32_t i = 0; i < 10; ++i) {
		threads[i] = std::thread(print_id, i);
	}

	std::cout << "10 threads ready to race...\n";

	{// go!
		std::unique_lock<std::mutex> lck(mtx);
		ready = true;
		cv.notify_all();
	}

	for(auto& th : threads) {
		th.join();
	}

	return 0;
}

