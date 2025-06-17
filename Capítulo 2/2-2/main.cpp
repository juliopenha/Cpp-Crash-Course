/**
 * 2-2. Create a struct Calculator. It should have a single constructor that
 * takes an Operation.
 */

#include <cstdio>

enum class Operation { Add, Subtract, Multiply, Divide };

struct Calculator {
  Calculator(Operation op) {}

 private:
  Operation op{};
};

int main() { return 0; }