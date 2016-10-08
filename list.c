#include <stdio.h>
#include <stdlib.h>

struct node{ char i; struct node *next;};

void print_list(struct node *n){
  char data[256] = "";
  char i = 0;
  do{
    data[i] = (*n).i;
    i++;
    n = (*n).next;
  }while( (*n).next != 0);//while there is a next node
  data[i] = 0;
  printf("Resultant String:[%s]",data);
}


