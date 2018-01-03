

#ifndef ___LIST__H__

#define ___LIST__H__


 namespace  list_space {


extern "C"{

     #include <stdio.h>
	 #include <string.h>
	 #include <errno.h>
	 #include <unistd.h>
}



void unix_error(char *msg){
    fprintf(stderr,"[%d] %s %s",__LINE__,msg,strerror(errno));
	exit EXIT_FAILED;
}






struct list_node{
    //char *name;
     void *pvalue;
	struct list_node *next;
	

};

struct list{

       struct list_node *phead;

};



typedef  list_node * plist;
typedef  list  *   list_head;

void createList(list_head **list);


void insertNode(list_head *head,void *value);
void getIndex(list_head *head,int index);
void setIndex(list_head *head,void *value);
void deleteNode(list_head *head,int index);


int getSize(list_head *head);

void show(list_head *head);




}










#endif