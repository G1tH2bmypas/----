#include <iostream>
#include <string>

bool pawn(int x1, int y1, int x2, int y2) {
	return (x1 == x2 + 1 || x1 == x2 - 1) && y1 + 1 == y2;
}
