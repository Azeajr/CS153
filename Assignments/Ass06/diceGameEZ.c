/*
 * CS153 Program Assignment #6
 * Dice Game Six
 * Antonio Zea Jr.
 * 10182019
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Easy dice game
|
|  The game consists of 7 rounds.
|  In each round, the computer throws a die, 
|  then the human throws a die.
|  The winner of the round is the player who has the highest throw.
|  In case of a tie, neither player wins.
|  The winner of the game is the player who has won the most rounds.
|  If both have won the same, the game is a tie.
|
*/
#define BUFFSIZE 132

char input[BUFFSIZE];   /* user input buffer */

int rolls=0;

/* Throw a single 6-sided die
|
*/
int throwDie(){
    static int initialized = 0;

    if ( !initialized ){
        srand( time(NULL) );
        initialized = 1;
    }
    return rand()%6 + 1 ;
}

/* Human turn
|
|  Modify this for the assignment
|
*/
int humanTurn(){
    char choice;
    int toss,humanTotal=0,rollagain=1;
    
    while(rollagain){
        toss=throwDie();
        humanTotal+=toss;
        
        rolls++;
        
        printf("You throw a %d\n", toss );

        printf("Do you wish to throw again? [Y or N] :");
        /*
         * Got this wrong initially because I was not
         * consuming the newline. Did some research
         * on scanf and if you include any whitespace
         * characters in format string then scanf will
         * discard any whitespace found in the input.
         */
        scanf(" %c",&choice);
        if(choice=='N'){
            rollagain=0;
        }
        
    }
    printf("Your score is %d\n",humanTotal);
    return humanTotal;
}

/* Computer turn
|
|   Modify this for the assignment
|
*/
int computerTurn(){
    int i,toss,computerTotal=0;
    
    for(i=0;i<rolls;i++){
        toss=throwDie();
        computerTotal+=toss;
        printf("\nComputer throws a %d", toss );
    }
    /*
     * Done using rolls variable for this turn so
     * its value is reset.
     */
    rolls=0;
    printf("\nComputer's score is %d\n",computerTotal);
    return computerTotal;
}
/*
 * Didnt change much in the main function.
 * Mainly formatting changes.
 */
int main(int argc, char *argv[]){
    int round, humanWins=0, computerWins=0;
    int humanToss, computerToss;
    const int numberOfRounds = 7;

    /* Play the Rounds */
    for ( round = 1; round<=numberOfRounds; round++ ){
        printf("\nRound %d\n\n", round );
        printf("Player's Turn: (hit enter)");
        fgets( input, BUFFSIZE, stdin );  /* pause for dramatic effect */
        humanToss = humanTurn();
        
        printf("\nComputer's Turn: (hit enter)");
        fgets( input, BUFFSIZE, stdin );  /* pause for dramatic effect */
        computerToss = computerTurn();
        
        /* Determine Winner of the Round */
        if ( humanToss > computerToss ){
            humanWins++;
            /*
             * Don't remember what this looked like originally but I want
             * a long line of code to be broken up so that it is easier to
             * read. I have the habit of indenting after moving to the next
             * line.  Is this acceptable in the future as well?
             */
            printf("\nHuman wins the round.    human:%3d. computer: %3d\n",
                humanWins, computerWins );
                
        }else if ( computerToss > humanToss ){
            computerWins++;
            printf("\nComputer wins the round. human:%3d. computer: %3d\n",
                humanWins, computerWins );
                
        /*
         * Following change was made to give the computer the win during a draw.
         */
        }else if( computerToss == humanToss){
            computerWins++;
            printf("\nComputer wins the round. human:%3d. computer: %3d\n",
                humanWins, computerWins );
                
        }
    }
    /* Determine Winner of the Game */
    if (humanWins > computerWins){
        printf("\n\nHuman Wins the Game!\n");
    }else if( computerWins > humanWins ){
        printf("\n\nComputer Wins the Game!\n");
    }else{
        /*
         * Left this in in case I decide to change the number of rounds
         */
        printf("\n\nTie Game!\n");
    }

    printf("\n");
    return 0;
}