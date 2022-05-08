#include<stdio.h>
int main(){
  int a=5,b;
  b=a++,++a;
  printf("%d",a);
  printf("\n%d",b);
}