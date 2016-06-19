#include <cstdio>
#include <list>
#include <vector>

template <typename Container>
Container build() {
    int test_size = 100000;
    Container container;
    for (int i = 0; i < test_size; ++i) {
        container.push_back(i);
    }
    return container;
}

template <typename Container>
typename Container::value_type test(Container& container) {
    auto ret = typename Container::value_type();
    for (auto&& value : container) {
        ret += value;
    }
    return ret;
}

int main(int argc, char** /* argv */) {
    if (argc > 1) { // list
        auto list = build<std::list<int>>();
        printf("result list: %d\n", test(list));
    } else { // vector
        auto vector = build<std::vector<int>>();
        printf("result vector: %d\n", test(vector));
    }
}
