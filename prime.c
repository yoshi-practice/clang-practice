#include <stdio.h>
#include <stdbool.h>

int prime(int x){
  if(x == 1){
    return false;
  }else if (x == 2){
    return true;
  }else{
 for(int i=2;i<x; i++) {
    if(x % i == 0) {
      return false;
    }
  }
  return true;
  }
}

int primeSwitch(int x){
    switch (x) {
  case 1:
    return false;
    break;
  case 2:
    return true;
    break;
  default:
    for(int i=2;i<x; i++) {
      if(x % i == 0) {
        return false;
      }
    }
    return true;
    break;
  }
}

int main(int argc, char const *argv[])
{
  int a = 4;
  char ans = prime(a);
  ans ? printf("素数") : printf("素数ではない");
  return 0;
}
