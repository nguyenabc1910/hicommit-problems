#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d, %a, %b, %c");
  if(a>b>c){
    printf("a");
  }
  if(b>c>a){
    printf("b");
  }
  if(c>b>a){
    printf("c");
  }
  
  return 0;
}