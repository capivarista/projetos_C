#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
char a = 'y';

  
  while(a == 'y'){
  srand(time(0));
  int r = (rand() % 6) + 1;
    int t = (rand() % 6) + 1;
    int y = (rand() % 6) + 1;

  
  char b;
  

  if(r != 0){
    
    
    printf("\t %d |", r);
    sleep(1);
    printf("\t %d |", t);
    sleep(1);
    printf("\t %d ", y);
    sleep(1);

    
  }

  if(r != 0){
   // printf("\t\n\npara jogar novamente envie um pix de 1 real para: 3c3a50a2-004d-4125-947f-085b60133924\n");
    printf("\t\n\nvoce deseja tentar novamente?\n");
    scanf("%s", &a);
    if(a != 'y' && a != 'n'){
      printf("insira um numero valido:\n");
      scanf("%s", &a);
    }
       
  }
    if(r == 6 && t == 6 && y == 6){
      sleep(1);
      printf("\t\n\n Parabens voce ganhou");
    }else{
      sleep(1);
      printf("\t\n\n chegou perto ");
    }
    
  }

  
  
  return 0;
}