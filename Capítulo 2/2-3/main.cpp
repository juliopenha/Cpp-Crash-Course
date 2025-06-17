/**
 * 2-3. Create a method on Calculator called int calculate(int a, int b).
 * Upon invocation, this method should perform addition, subtraction,
 * multiplication, or division based on its constructor argument and return the
 * result.
 */

#include <cstdio>

enum class Operation { Add, Subtract, Multiply, Divide };

struct Calculator {
  Calculator(Operation op) { op_ = op; }
  int calculate(int a, int b) {
    switch (op_) {
      case Operation::Add:
        return a + b;
        break;
      case Operation::Subtract:
        return a - b;
        break;
      case Operation::Multiply:
        return a * b;
        break;
      case Operation::Divide:
        return a / b;
        break;
      default:
        break;
    }
  }

 private:
  Operation op_{};
};

int main() {
  Calculator add(Operation::Add);
  Calculator sub(Operation::Subtract);
  Calculator mult(Operation::Multiply);
  Calculator div(Operation::Divide);
  return 0;
}