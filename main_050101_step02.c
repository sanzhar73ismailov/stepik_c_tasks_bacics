#include <stdio.h>

/*
https://stepik.org/lesson/53872/step/2?unit=32085
*/
int main() {
  int ribLength;
  scanf("%d", &ribLength);
  int squareOneSide = ribLength * ribLength;
  int squareAllSides =  ribLength * ribLength * 6;
  int volume = ribLength * ribLength * ribLength;
  printf("%d %d %d", squareOneSide, squareAllSides, volume);
  return 0;
}
