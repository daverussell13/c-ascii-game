#include <ncurses.h>
#include <stdlib.h>

// MACROS
#define N 10

// Global var
int wbox = 0;
int level = 0;

// struct
struct Object {
  int xPos;
  int yPos;
  unsigned char zn;
  chtype ozn;
};

struct Object obj[N] = {};

// level list
void levelList(int* h, int* w, int* arr,int y, int x, int n) {
  if(n == 0) {
    *h = 7;
    *w = 6;
    int map0[7][6] = {
      {1,1,1,1,1,1},
      {1,0,2,1,1,1},
      {1,0,0,1,1,1},
      {1,2,5,0,0,1},
      {1,4,0,4,0,1},
      {1,0,0,1,1,1},
      {1,1,1,1,1,1}
    };
    *arr = map0[y][x];
  }
}

void pallete() {
  init_color(COLOR_BLACK, 0, 0, 0);
  init_pair(2, COLOR_RED, COLOR_BLACK);
  init_pair(1, COLOR_GREEN, COLOR_BLACK);
  init_pair(3, COLOR_YELLOW, COLOR_BLACK);
  init_pair(4, COLOR_BLUE, COLOR_BLACK);
  init_pair(5, COLOR_CYAN, COLOR_BLACK);
}

int main() {
  return 0;
}
