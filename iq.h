#ifndef IQ_H_
#define IQ_H_

#include "libfdr/dllist.h"

static void iq_enqueue(Dllist q, int i) {
	dll_append(q, (Jval){.i = i}); //Tương đương với append trong Queue
}

static int iq_dequeue(Dllist q){
	int value = (dll_first(q)->val.i);
	dll_delete_node(dll_first(q));  //Tương đương với dequeue trong Queue
	return value;
}

#endif //IQ_H_