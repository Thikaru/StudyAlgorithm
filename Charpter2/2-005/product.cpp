#include <iostream>

int ThreeNumberProduct() {
  int A[3];
  int result = 1;

  for (int i = 0; i < 3; i++) {
    std::cin >> A[i];
    result *= A[i];
  }

  std::cout << result << std::endl;

  return 0;
}

int main() {
  int test_loop = 0;
  int S = 0, P = 0, number = 0;
  int result = 0;

  std::cin >> test_loop;
  for (int i = 0; i < test_loop; i++) {
    ThreeNumberProduct();
  }

  return 0;
}