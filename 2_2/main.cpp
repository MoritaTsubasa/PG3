#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
	int val;
	struct cell* next;
}CELL;

void create();
void index();

int main() {
	// 先頭のセルを宣言
	CELL head;
	head.next = nullptr;


}