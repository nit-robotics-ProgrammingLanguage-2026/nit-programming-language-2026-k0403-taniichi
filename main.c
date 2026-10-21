#include <stdio.h>

int main(void)
{
  int input;
  double kekka;
  int answer;

  scanf("%d", &input);
  kekka = input * 1.08;    
  answer = (int)kekka;    
  printf("%d", answer);
  return 0;
}