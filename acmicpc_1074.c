// ACMICPC.NET #1074 : Z
// Lang : C
// Answer : 3 7 7 // 63
// Status : Solved

#include <stdio.h>
#include <math.h>

int recur(int line, int row, int size, int pos);
int main(int argc, char** argv){
	int row, line;
	int result = 0;
	int size = 0;
	
	scanf("%d %d %d", &size, &line, &row);
	
	result = recur(line, row, size, result);

	printf("%d", result);
	return 0;
}

int recur(int line, int row, int size, int pos){
	int recur_num = size;
	int mini_pos[2][2] = {0, 1, 2, 3};
	
	if(recur_num != 0){
		int sub_line = line / pow(2, recur_num - 1);
		int sub_row = row / pow(2, recur_num - 1);
		int new_line, new_row;
		
		if(line < pow(2, recur_num - 1)){
			new_line = line;
			sub_line = 0;
		}
		else
			new_line = line - pow(2, recur_num - 1);
		
		if(row < pow(2, recur_num - 1)){
			new_row = row;
			sub_row = 0;
		}
		else
			new_row = row - pow(2, recur_num - 1);
		
		pos = recur(new_line, new_row, recur_num - 1, pos) + pow(4, recur_num - 1) * mini_pos[sub_line][sub_row];

		printf("line : %d row : %d pos : %d\n", sub_line, sub_row, pos);
	}

	return pos;
}