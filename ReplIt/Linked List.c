#include <stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *create(struct node *head, int value){
  struct node* temp;
  if(head == NULL){
    head =  (struct node *)malloc(sizeof(struct node *));
    head->data = value;
    head->next = NULL;
  }

  else{
    for(temp = head;temp->next!= NULL; temp = temp->next);
    temp->next = (struct node *)malloc(sizeof(struct node *));
    temp = temp->next;
    temp->data = value;
    temp->next = NULL;
  }
  return(head);
}

void display(struct node *head){
  struct node *temp;
  
  for(temp = head;temp!= NULL; temp = temp->next){
    printf("%d->", temp->data);
  }
  printf("NULL");
}
int main(void) {
  int n, value;
  struct node *head = NULL;
  printf("Enter number of nodes : ");
  scanf("%d", &n);

  printf("Enter values : ");
  for(int i = 0;i<n;i++){
    scanf("%d", &value);
    head = create(head, value);
  }

  display(head);
  
}