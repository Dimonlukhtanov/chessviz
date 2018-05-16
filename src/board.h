#ifndef one
#define one
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define black_color printf("%s","\033[1;30m")
#define white_color printf("%s","\033[1;37m")
#define green_color printf("%s","\033[1;32m")
#define zero_color printf("%s","\033[0m")
void print_chess_inscription();
int move_check(char figure, int int_c, int r, int int_c_end, int r_end);
void printBoard(char* board[][8]);
void print(char* board[][8]);
void colorBoard(int c, int r);
#endif