#include <iostream>

int IntPow(int number, int index) {
  int result = 1;

  for (int i = 0; i < index; i++) {
    result *= number;
  }

  return result;
}

// 10進法以下なら対応できる．
int ChangeRadixStoP(int S, int P, int number) {
  int number_len = 1;
  int tmp_num = 0;
  int tmp = 0;
  int ten_radix = 0;
  int result_radix = 0;

  tmp_num = number;
  while (tmp_num / 10 != 0) {
    tmp_num = tmp_num / 10;
    number_len += 1;
  }
  printf("桁数は %d\n", number_len);

  // とりあえずnumber(S)を10進数に変換する
  tmp_num = number;
  ten_radix = 0;
  for (int i = 0; i < number_len; i++) {
    tmp = tmp_num % 10;
    tmp_num /= 10;
    ten_radix += tmp * IntPow(S, i);
  }
  printf("10進数 = %d\n", ten_radix);

  // result_radix(P)を作成する
  tmp_num = ten_radix;
  int i = 0;
  while (tmp_num / P != 0) {
    tmp = tmp_num % P;
    tmp_num /= P;
    result_radix += tmp * IntPow(10, i);
    i += 1;
  }
  tmp = tmp_num % P;
  tmp_num /= P;
  result_radix += tmp * IntPow(10, i);

  printf("%d(%d)\n", result_radix, P);

  return result_radix;
}

int main() {
  int test_loop = 0;
  int S = 0, P = 0, number = 0;
  int result = 0;

  std::cin >> test_loop;
  for (int i = 0; i < test_loop; i++) {
    std::cin >> S;
    std::cin >> number;
    std::cin >> P;
    printf("S[%d] → P[%d] Num[%d]\n", S, P, number);
    result = ChangeRadixStoP(S, P, number);
  }

  return 0;
}