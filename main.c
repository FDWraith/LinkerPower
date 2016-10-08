#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(){
  struct node *s = (struct node *)malloc(sizeof(struct node));
  (*s).i = 'a';
  print_list(s);
  return 0;
}
