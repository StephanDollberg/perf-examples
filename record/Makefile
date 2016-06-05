call_graph: call_graph.cpp
	g++ -O3 -std=c++11 -Wall -Wextra -pedantic -g -fno-omit-frame-pointer -fno-inline -o $@ $<

call_graph_record: call_graph
	sudo perf record -g ./$<

call_graph_report: call_graph_record
	sudo perf report --call-graph --no-children