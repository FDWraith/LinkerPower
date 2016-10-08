struct node{char i; struct node *next;};
void print_list(struct node *pointer);
struct node * insert_front(struct node *current, char newDatum);
struct node * free_list(struct node *current);
