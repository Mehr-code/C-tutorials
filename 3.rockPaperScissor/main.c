#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer)
{
    if (you == computer)
        return -1;

    if (you == 's' && computer == 'p')
        return 0;

    else if (you == 'p' && computer == 's') return 1;

    if (you == 's' && computer == 'z')
        return 1;

  
    else if (you == 'z' && computer == 's')
        return 0;


    if (you == 'p' && computer == 'z')
        return 0;


    else if (you == 'z' && computer == 'p')
        return 1;
}


int main()
{

    int n;

    char you, computer, result;

    
    srand(time(NULL));

    while(1){

    printf("Enter s for STONE, p for PAPER, z for SCISSOR and e for EXIT\n");

    scanf(" %c", &you);

    if(you=='e') break;
    
    n = rand() % 100;

   
    if (n < 33)

        computer = 's';

    else if (n > 33 && n < 66)

        computer = 'p';

    else
        computer = 'z';

    
    result = game(you, computer);

    if (result == -1) {
        printf("Game Draw!\n");
    }
    else if (result == 1) {
        printf("Wow! You have won the game!\n");
    }
    else { 
        printf("Oh! You have lost the game!\n");
    }
        printf("You choose : %c and Computer choose : %c\n\n\n\n",you, computer);
    }

    printf("goodbye");

    return 0;
}