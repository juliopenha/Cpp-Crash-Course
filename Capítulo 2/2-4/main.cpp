/**
 * 2-4. Experiment with different means of initializing Calculator instances.
 */

#include <cstdio>

enum class Operation { Add, Subtract, Multiply, Divide };

struct Calculator {
  Calculator(Operation op) { op_ = op; }

  int calculate(int a, int b) {
    int result = 0;
    switch (op_) {
      case Operation::Add:
        result = a + b;
        break;
      case Operation::Subtract:
        result = a - b;
        break;
      case Operation::Multiply:
        result = a * b;
        break;
      case Operation::Divide:
        result = a / b;
        break;
      default:
        break;
    }
    return result;
  }

 private:
  Operation op_{};
};

int main() {
  Calculator add(Operation::Add);
  Calculator sub(Operation::Subtract);
  Calculator mult(Operation::Multiply);
  Calculator div(Operation::Divide);

  int a{10};
  int b{5};
  printf("%d + %d = %d\n", a, b, add.calculate(a, b));
  printf("%d - %d = %d\n", a, b, sub.calculate(a, b));
  printf("%d * %d = %d\n", a, b, mult.calculate(a, b));
  printf("%d / %d = %d\n", a, b, div.calculate(a, b));

  return 0;
}