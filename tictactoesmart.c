#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();

int main(){
	system("color A");
	int player=1, i ,choice,mode;
	char mark; // X,O
	printf("\n\n\n\n\n\n\n\n\n");
	printf("-----------------------------------------------------WELCOME TO TIC-TAC-TOE GAME-----------------------------------------------------------\n\n\n\n\n");
	printf("(Press 1 for YOU vs BOT mode)   |   (Press 2 for 2 PLAYER mode)\n\n");
	printf("Enter mode: ");
	scanf("%d",&mode);


	// ----------------------------you vs BOT mode code starts here------------------------------
	
	
	
	if(mode==1){
		printf("------------------------BOT vs YOU MODE-------------------------\n");
	do {
		
		drawBoard();
		player = (player % 2) ? 1 : 2;

		// player 1 is you and player 2 is BOT

		if(player == 1) // when its your turn
		{
			printf("Enter your choice: ");
			scanf("%d",&choice);
		}
		else // when its BOT turn
		{
            if((square[1] == 'X') && (square[2] == 'X'))
        {
			choice = 3;
        }
		else if((square[2] == 'X') && (square[3] == 'X'))
		{
			choice = 1;
		}
		else if((square[4] == 'X') && (square[5] == 'X'))
		{
			choice = 6;
		}
		else if((square[5] == 'X') && (square[6] == 'X'))
		{
			choice = 4;
		}	
		else if((square[7] == 'X') && (square[8] == 'X'))
		{
			choice = 9;
		}
		else if((square[8] == 'X') && (square[9] == 'X'))
		{
			choice = 7;
		}
		else if((square[1] == 'X') && (square[4] == 'X'))
		{
			choice = 7;
		}
		else if((square[4] == 'X') && (square[7] == 'X'))
		{
			choice = 1;
		}
		else if((square[2] == 'X') && (square[5] == 'X'))
		{
			choice = 8;
		}
		else if((square[5] == 'X') && (square[8] == 'X'))
		{
			choice = 2;
		}
		else if((square[3] == 'X') && (square[6] == 'X'))
		{
			choice = 9;
		}
		else if((square[6] == 'X') && (square[9] == 'X'))
		{
			choice = 3;
		}
		else if((square[1] == 'X') && (square[5] == 'X'))
		{
			choice = 9;
		}
		else if((square[5] == 'X') && (square[9] == 'X'))
		{
			choice = 1;
		}
		else if((square[3] == 'X') && (square[5] == 'X'))
		{
			choice = 7;
		}
		else if((square[5] == 'X') && (square[7] == 'X'))
		{
			choice = 3;
		}
		else if((square[1] == 'X') && (square[3] == 'X'))
		{
			choice = 2;
		}
		else if((square[4] == 'X') && (square[6] == 'X'))
		{
			choice = 5;
		}
		else if((square[7] == 'X') && (square[9] == 'X'))
		{
			choice = 8;
		}
		else if((square[1] == 'X') && (square[7] == 'X'))
		{
			choice = 4;
		}
		else if((square[2] == 'X') && (square[8] == 'X'))
		{
			choice = 5;
		}
		else if((square[3] == 'X') && (square[9] == 'X'))
		{
			choice = 6;
		}
		else if((square[1] == 'X') && (square[9] == 'X'))
		{
			choice = 5;
		}
		else if((square[3] == 'X') && (square[7] == 'X'))
		{
			choice = 5;
		}
		else
		{
			bot :
			srand(time(NULL));
			choice = rand()%9;
		}
		}

		mark = (player == 1) ? 'X' : 'O';
		
			if(choice == 1 && square[1] == '1')
			square[1] = mark;
			else if(choice == 2 && square[2] == '2')
			square[2] = mark;
			else if(choice == 3 && square[3] == '3')
			square[3] = mark;
			else if(choice == 4 && square[4] == '4')
			square[4] = mark;
			else if(choice == 5 && square[5] == '5')
			square[5] = mark;
			else if(choice == 6 && square[6] == '6')
			square[6] = mark;
			else if(choice == 7 && square[7] == '7')
			square[7] = mark;
			else if(choice == 8 && square[8] == '8')
			square[8] = mark;
			else if(choice == 9 && square[9] == '9')
			square[9] = mark;
			else if (player != 1)
			{
				goto bot;
			}
			else {
				printf("Invalid option !");
				getch();
				player--;
			}
			i = checkWin();
			player++;	
		
	}while(i == -1);
	
	drawBoard();
	if(i==1){
		printf("--------- PLAYER WON -----------");
	}
	else {
		printf("---------Game draw------------");
	}
	}
	
	//----------------------------PLAYER vs BOT mode code ends here------------------------------------



	//-------------------------------------2 PLAYER MODE code starts here-------------------------------------------------
		else if(mode==2)
		{
			printf("----------------------- 2 PLAYER MODE ---------------------------\n");
			do {
		drawBoard();
		player = (player % 2) ? 1 : 2;
		printf("Player %d, Enter the choice : ",player);
		scanf("%d",&choice);
		mark = (player == 1) ? 'X' : 'O';
		if(choice == 1 && square[1] == '1')
			square[1] = mark;
		else if(choice == 2 && square[2] == '2')
			square[2] = mark;
			else if(choice == 3 && square[3] == '3')
			square[3] = mark;
			else if(choice == 4 && square[4] == '4')
			square[4] = mark;
			else if(choice == 5 && square[5] == '5')
			square[5] = mark;
			else if(choice == 6 && square[6] == '6')
			square[6] = mark;
			else if(choice == 7 && square[7] == '7')
			square[7] = mark;
			else if(choice == 8 && square[8] == '8')
			square[8] = mark;
			else if(choice == 9 && square[9] == '9')
			square[9] = mark;
			
			else {
				printf("Invalid option !");
				player--;
				getch();
			}
			i = checkWin();
			player++;	
		
	}while(i == -1);
	
	drawBoard();
	if(i==1){
		printf("==>Player %d won",--player);
	}
	else {
		printf("==>Game draw");
	}
		}
		//---------------------------------- 2 PLAYER mode code ends here -----------------------------------
		
		getch();
		return 0;
}//---------------------------- MAIN function ends here-----------------------------------------------

//------------------------- SOME USER DEFINED FUNCTIONS-------------------------------------------

int checkWin(){
	if(square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if(square[7] == square[8] && square[8] == square[9])
		return 1;
	else if(square[1] == square[4] && square[4] == square[7])
		return 1;
	else if(square[2] == square[5] && square[5] == square[8])
		return 1;
	else if(square[3] == square[6] && square[6] == square[9])
		return 1;
	else if(square[1] == square[5] && square[5] == square[9])
		return 1;
	else if(square[3] == square[5] && square[5] == square[7])
		return 1;
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] !='4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else 
		return -1;	
}

void drawBoard(){
	system("cls");
	printf("\n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("     |     |     \n");
}