#ifndef _BIAN_YI
#define _BIAN_YI
/*
	Name:  bianyi.h
	Copyright: 
	Author: SJS
	Date: 02/03/17 21:39
	Description: 
*/

typedef struct te{
	
	int con;
    struct te * pre;
	struct te * next;
}node;
// ���������еĽڵ� 
class Linkedlist {

     private:	
	  int length ;
	  node * head;
	  node * tail;
	 public: 
	   int getLength();
	   node * getHead();
	   node * getTail();
	   void setHead(node * temp);
	   void setTail(node * temp);
	   node * searchList(int x);
	   bool addNode(int x);
	   int deleteNode(node * temp);
	   
	   
	public:
		Linkedlist();
		~Linkedlist();
	   
}; 
// �������� 


#endif 
