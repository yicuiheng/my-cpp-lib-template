#include <iostream>
#include <cassert>

#include "hello.hpp"

int main() {
    // TODO: use your favorite test framework
    assert(hello::in_japanese("yicuiheng") == "こんにちは！yicuihengさん");
    std::cout << "tests: 1 passed, 1 total" << std::endl;
}
