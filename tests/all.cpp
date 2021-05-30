//
// This code is licensed under CC0.
// http://creativecommons.org/publicdomain/zero/1.0/deed
//

#include <cassert>
#include <iostream>

#include "hello.hpp"

int main() {
    // TODO: use your favorite test framework
    assert(hello::in_japanese("yicuiheng") == "こんにちは！yicuihengさん");
    std::cout << "tests: 1 passed, 1 total" << std::endl;
}
