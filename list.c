#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{ char i; struct node *next;};

void print_list(struct node *n){
  char data[256] = "";
  char i = 0;
  //printf("Got to this point 1\n");
  while( n != 0){
    data[i] = (*n).i;
    //printf("Current char:[%c]\n",data[i]);
    i++;
    n = (*n).next;
  }
  if(i != 0){
    data[i] = 0;
  }
  printf("Resultant String:[%s] Its Length:[%d]\n",data,strlen(data));
}

struct node * insert_front(struct node *current, char newDatum){
  struct node * newBegin = (struct node *)malloc(sizeof(struct node));
  (*newBegin).next = current;
  (*newBegin).i = newDatum;
  return newBegin;
}

struct node * free_list(struct node *current){
  if(current != 0){
    free(current);
    current = free_list((*current).next);
    //printf("the current pointer:[%p]\n", current);
    //printf("the next pointer:[%p]\n", (*current).next);
    return &(*current);
  }else{
    //printf("This happened\n");
    free(current);
    return current;
  }
}

