#include <iostream>
#include "KeyValueStore.hpp"

int main() {
    KeyValueStore store;

    store.put("apple", "red");
    store.put("banana", "yellow");

    auto a = store.get("apple");
    auto b = store.get("banana");
    auto c = store.get("cherry");

    std::cout << "apple => " << (a ? *a : "NOT FOUND") << "\n";
    std::cout << "banana => " << (b ? *b : "NOT FOUND") << "\n";
    std::cout << "cherry => " << (c ? *c : "NOT FOUND") << "\n";

    return 0;
}
