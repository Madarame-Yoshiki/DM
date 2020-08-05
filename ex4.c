#include <stdio.h>
#include <stdlib.h>

int main(){
  int a=rand();
  int head=0,tail=0;
  //名前を聞く
  char str[10];
  printf("Who are you?\n");
  scanf("%s",str);
  printf("Hello %s!\n",str);
  //コイントス
  printf("Tossing a coin..\n");
  for(int i=1;i<=3;i++){
    if(a%2==0){
      printf("Round %d: Heads\n",i);
      head++;
    }
    else{
      printf("Round %d: Tails\n",i);
      tail++;
    }
  }
  printf("Heads:%d , Tails:%d\n",head,tail);
  return 0;
}
