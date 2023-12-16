# include<stdio.h>

int main(){
    int playerScore = 0;
    int compScore = 0;
    int currMove = 0;

    printf("You can choose ROCK, PAPER or SCISSORS. The first player to score 10 wins.");

    while(playerScore < 10 && compScore < 10){
        // Player's move
        printf("What do you choose:\n1. Rock\n2. Paper\n3.Scissors\nType 1, 2 or 3: \n");
        scanf("%d", &currMove);

        // Computer's move

    }



    return 0;
}