#include <stdio.h>

int check(int x){
  if (x % 5 == 0){ 
    return 5;
  } else if (x % 4 == 0){
    return 4;
  } else if (x % 3 == 0){
    return 3;
  } else{
    return x;
  }
}

int main(int argc, char **argv) {
  int a = 6;
  int ans = check(a);
  printf("%dは%dで割り切れる", a, ans);
  return 0;
}