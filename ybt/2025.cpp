#include <cstdio>

int main() {
  for (int i = 7; ; i += 7) {
    if (  i % 2 == 1 && i % 3 == 1
       && i % 4 == 1 && i % 5 == 1
       && i % 6 == 1 ) {
      printf("%d", i);
      return 0;
    }
  }
  return 0;
}
