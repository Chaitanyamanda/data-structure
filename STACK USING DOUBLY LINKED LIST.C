#include <stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *push(struct node *head){
  int num;
  printf("enter the number:\n");
  scanf("%d",&num);
  struct node *new=malloc(sizeof(struct node));
  new->data=num;
  new->next=NULL;
  new->prev=NULL;
  if(head==NULL){
    head=new;
  }
  else{
    struct node *temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=new;
    new->prev=temp;
  }
  return head;
}
struct node *delete_end(struct node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return head;
    }
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    if (temp->prev != NULL) {
        temp->prev->next = NULL; 
    } else {
        head = NULL; 
    }
    free(temp); 
    return head;
}
void print_dll(struct node *head) {
    struct node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

  int main(){
    struct node *head=NULL;
    int option;
    do{
      printf("enter the option:\n");
      scanf("%d",&option);
      switch(option){
      case 1:
        head=push(head);
        break;
      case 2:
        head=delete_end(head);
        break;
      case 3:
        print_dll(head);
        break;
       case 4:
        printf("exiting from the stack\n");
        break;
        
      }
    }while(option!=4);
  }
