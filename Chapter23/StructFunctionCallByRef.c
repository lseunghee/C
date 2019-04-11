#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void OrgSymtrans(Point *ptr) { // ¿øÁ¡´ëÄª
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos) {
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}
int main(void) {
	Point pos = { 7, -5 };
	OrgSymtrans(&pos);
	ShowPosition(pos);
	OrgSymtrans(&pos);
	ShowPosition(pos);
	return 0;
}