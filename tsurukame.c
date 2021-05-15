#include <stdio.h>

int main(int argc, char const *argv[])
{
  int tsuru_legs = 2;
  int kame_legs = 4;
  int all = 100;
  int legs = 274;

  int ans = legs - tsuru_legs * all;
  int kame = (ans / 2);
  int tsuru = all - kame;

  printf("つる%d匹、かめ%d匹", tsuru, kame);
  return 0;
}
