



#include "list.h"


void createList(list_head * * list){

           if((*list)==NULL){
                  (*list)=(list_head *)malloc(sizeof(*list));
				  if((*list)==NULL){
                     unix_error("memory not enough malloc error!")
				  }

				  (*list)->phead=NULL;
		   }
		   
}



void insertNode(list_head * head, void * value){

             if(head==NULL){
                    return ;
			 }

			 list_node *node=malloc(sizeof(list_node));
			 if(node==NULL)
			 	return;
			 node->next=NULL;
			 node->pvalue=NULL;

			 node->next=head->phead->next;
			 head->phead->next=node;
			 *(node->pvalue)=*value;
      

}


void show(list_head * head){
            if(head==NULL){
                 return;
			}

			list_node *temp=head->phead;

			while(temp){

                 printf("node value=%d ",*(int *)temp->pvalue);
				 temp=temp->next;

			}

}





