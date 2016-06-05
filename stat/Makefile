cache_misses: cache_misses.cpp
	g++ -O3 -std=c++11 -Wall -Wextra -pedantic -g -fno-omit-frame-pointer -o $@ $<

cache_misses_stat_vector: cache_misses
	sudo perf stat -r 5 -e cache-misses,L1-dcache-load-misses,L1-dcache-store-misses ./$<

cache_misses_stat_list: cache_misses
	sudo perf stat -r 5 -e cache-misses,L1-dcache-load-misses,L1-dcache-store-misses ./$< list
