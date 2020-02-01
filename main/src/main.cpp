#include <iostream>
#include "../hdrs/Type_deduction.hpp"

int main() {
    static_assert(std::is_same<decltype(TypeDeduction::Add(5,3)), int>(),"");
    static_assert(std::is_same<decltype(TypeDeduction::ConstRef()), const int&>(),"");

    return 0;
}