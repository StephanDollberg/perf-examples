mutex_lock: mutex_lock.cpp
	g++ -O3 -std=c++11 -Wall -Wextra -pedantic -pthread -g -fno-omit-frame-pointer -o $@ $<

mutex_lock_trace: mutex_lock
	sudo perf trace ./$<

