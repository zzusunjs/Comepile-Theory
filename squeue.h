#ifndef _squeue_h_
#define _squeue_h_

#include <cstddef>
#include <stdlib.h>
#include <stdio.h>
#include "bianyi.h"

// 队列的定义 
class squeue{
	
	private:
		int length;
		node * head;
		node * tail;
	public:
		int getLength();
		node* getHead();
		node* getTail();
		void pushBack(int x);
		int getFront();
		int popFront();
		bool isEmpty();
		
	public:
		squeue();
		~squeue();
};



#endif
