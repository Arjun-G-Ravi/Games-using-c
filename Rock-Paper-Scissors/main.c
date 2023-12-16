# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int generateRandomNumber(int, int);
void printScores(int, int);


int main(){
    int playerScore = 0;
    int compScore = 0;
    int currMove = 0;
    int compMove = 0;
    int winScore = 5;


    printf("You can choose ROCK, PAPER or SCISSORS. The first player to score %d wins.\n\n", winScore);

    while(playerScore < winScore && compScore < winScore){
        // Player's move
        printf("What do you choose:\n1. Rock\n2. Paper\n3.Scissors\nType 1, 2 or 3: \n");
        scanf("%d", &currMove);

        // Computer's move
        compMove = generateRandomNumber(1,3);

        if(currMove == compMove){
            printf("It is a DRAW. Next Move\n\n");
            printScores(playerScore, compScore);
        }
        else if((currMove==1 && compMove==2) || (currMove==2 && compMove==3) || (currMove==3 && compMove==1)){
            compScore++;printScores(playerScore, compScore);
            printf("Computer won this round\n\n");
        }
        else if((currMove==2 && compMove==1) || (currMove==3 && compMove==2) || (currMove==1 && compMove==3)){
            compScore++;printScores(playerScore, compScore);
            printf("You won this round\n\n");
        }
        else{
            printf("You typed the wrong move. Try again\n\n");
        }
        
    }


    if(playerScore > compScore){
        printf("\nYOU WON THE GAME !!!\n");
    }
    else{
        printf("\nTHE COMPUTER WON THE GAME !!!\n");
    }



    return 0;
}


int generateRandomNumber(int min, int max){
    srand(time(NULL)); // To make the seed random for each run
    // printf("%d", rand());
    int randomNumber = min + (rand() % (max - min + 1));
    return randomNumber;
}


void printScores(int p, int c){
    printf("Computer Score:%d\nYour Score:%d\n", c,p);
}