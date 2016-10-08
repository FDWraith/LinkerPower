#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(){
  struct node *s = (struct node *)malloc(sizeof(struct node));
  //(*(*s).next).i = 'b';
  print_list(s);
  s = insert_front(s,'a');
  print_list(s);
  s = insert_front(s,'b');
  print_list(s);
  s = free_list(s);
  printf("Pointer to s:[%p]\n",s);
  print_list(s);
  return 0;
}
