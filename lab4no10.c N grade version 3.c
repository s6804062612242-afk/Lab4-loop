#include <stdio.h>
int main(){
  int score,a,j,i,A=0,B=0,C=0,D=0,F=0;
  
  
  
  while(1==1){

  scanf("%d",&score);
  if(score==-1){
    break;
  }
  if(score > 100) {
    printf("error");
  }
  else if(score>=68){
    if(score>=80){
      printf("(A)\n");
      A++;
    }else if(score>=75){
      printf("(B)\n");
      B++;

    }else if(score>=70){
      printf("(C)\n");
      C++;
      a = 75 - score;
      printf("%s:%d","to b",a);
    }
  }
  else{
    if(score>=50){
      printf("(D)\n");
      D++;

    }
    else if(score<=50){
      printf("(F)\n");
      F++;
    }
  }
  }
  printf("%s%d\n","(A)",A);
  printf("%s%d\n","(B)",B);
  printf("%s%d\n","(C)",C);
  printf("%s%d\n","(D)",D);
  printf("%s%d\n","(F)",F);
  

  return 0;
}