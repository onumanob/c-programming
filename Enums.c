#include <stdio.h>



enum Level {
  LOW = 5,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = HIGH;
  printf("%d", myVar);

  double myDouble;
  printf("%lu", sizeof(myDouble));
  return 0;
}

