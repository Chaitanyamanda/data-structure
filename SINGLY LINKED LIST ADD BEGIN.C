#include <stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*link;
};
int main(){
  struct node*head=NULL;
  int NUM=10;
  struct node*d1=malloc(sizeof(struct node));
  d1->data=NUM;
  d1->link=NULL;
  head=d1;
  
  NUM=20;
  struct node*d2=malloc(sizeof(struct node));
  d2->data=NUM;
  d2->link=NULL;
  
  struct node*TT=head;
  while(TT->link!=NULL){
    TT=TT->link;
  }
  TT->link=d2;
  
  NUM=45;
  struct node*NEW=malloc(sizeof(struct node));
  NEW->data=NUM;
  NEW->link=NULL;
   
   TT=head;
   while(TT->link!=NULL){
     TT=TT->link;
   }
   TT->link=NEW;
   
   NUM=25;
   struct node*NEW1=malloc(sizeof(struct node));
   NEW1->data=NUM;
   NEW1->link=NULL;
   NEW1->link=head;
   head=NEW1;
   struct node*dummy=head;
   while(dummy->link->link!=NULL){
     dummy=dummy->link;
   }
  
   while(head!=NULL){
     printf("%d->",head->data);
     head=head->link;
   }
}
