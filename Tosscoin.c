#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  printf("Who are you?\n");
  char q[10];
  printf(">");
  scanf("%s", q);
  printf("Hello, %s!\n",q);
  int i;
  int k=0,l=0;
  srand((unsigned int)time(NULL));
  printf("Tossing a coin\n");
  for(i=0;i<3;i++){int p=rand();
    printf("Round %d: ",i);
    if(p%2==0){printf("Heads\n");
      k++;
    }
    else {printf("Tails\n");
      l++;}
  }
    printf("Heads: %d, Tails: %d\n",k,l);
    if (k>l)printf("%s won!\n",q);
    else printf("%s lost!\n",q);
  
}
