//Đóng gói code ở bên "inqueue-demo.c" cho dễ nhìn, 
//gọn nhẹ và dễ sử dụng hơn. Và nó dễ nhận ra cấu trúc hàng đợi hơn

#include "iq.h"

#include <stdio.h>


int main(){
	Dllist q = new_dllist();
	iq_enqueue(q, 1);
	iq_enqueue(q, 2);
	iq_enqueue(q, 3);

	printf("First: %d\n", dll_first(q)->val.i);
	printf("Last: %d\n", dll_last(q)->val.i);

	Dllist cur;
	dll_traverse(cur, q){
		printf("%d ", cur->val.i);
	}
	printf("\n");

	dll_rtraverse(cur, q){
		printf("%d ", cur->val.i);
	}
	printf("\n");

	printf("Dequeue: %d ", iq_dequeue(q));
	dll_traverse(cur, q){
		printf("%d ", cur->val.i);
	}
	free_dllist(q);
	printf("\n");
	return 0;
}