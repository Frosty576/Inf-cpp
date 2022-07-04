#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono;

void thread1(){
	int y = 0;
	while (true) {
	cout << this_thread::get_id() << " : " << y << endl;
	y++;
	this_thread::sleep_for(milliseconds(100));
	}
	
	
}
int main() {
	
	int x = thread::hardware_concurrency() + 2;
	cout << "number of cores + 2 = " << x << endl;
	thread t1(thread1);
	thread t2(thread1);
	thread t3(thread1);
	thread t4(thread1);
	thread t5(thread1);
	thread t6(thread1);
	thread t7(thread1);
	thread t8(thread1);
	

	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();
	t6.join();
	t7.join();
	t8.join();
	
	
	return 0;
}