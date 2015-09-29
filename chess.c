#include<stdio.h>
#include<stdlib.h>
#include"chess.h"
int board[8][8];
char lost();
void drawboard();
/*horse*/
int main(){
	/*choose the piece*/
	int x;
	int y;
	int c;
	scanf("%d%d%d", &x ,&y ,&c);
	printf("white player play your first move\n");
	/*the very first move*/
	if(c == 1){
		/*horse*/
		if(x == 2 && y== 0){
			printf("horse has been chosen\n");
			}
		/*bishop*/
		else if(x == 0 && y == 0){
			printf("bishop has been chosen\n");
			}
		/*rook*/
		else if(x == 3 && y == 0){
			printf("rook has been chosen\n");
			}
		/*king*/
		else if(x == 4 && y == 0){
			printf("king has been chosen\n");		
			}
		/*queen*/
		else if(x == 5 && y == 0){
			printf("queen has been chosen\n");
			}
		/*pawn*/
		else if(y == 1){
			printf("pawn has been chosen\n");
			}    
		return(0);

		}
	}

