#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//რანდომ რიცხვის ამორჩევის შემდეგ, რიცხვის მიხედვით გამოაქვს ეკრანზე კამათელი, (ვიზუალურად)
void CreateDice(int number);
//კამათლები
void CreateOne();
void CreateTwo();
void CreateThree();
void CreateFour();
void CreateFive();
void CreateSix();
//მთავარი თამაში
void MainGame();
//თითო გაგორება
int SingleIteration();



int main() {
    MainGame();
}

void MainGame()
{
    int starter;
    srand((unsigned int)time(NULL));
    starter = (rand() % (1 - 0 + 1)) + 0;

    int player1Score = 0;
    int player2Score = 0;
    for (int i = 1; i <= 4; ++i) {
        if(starter == 1)
        {
            srand((unsigned int)time(NULL));
            player1Score += SingleIteration();
            player2Score += SingleIteration();

            printf("Computer scores: %d score.\n", player1Score);
            printf("\nYou scores: %d score.\n", player2Score);


            printf("\n Click enter to continue the Game. ");
            fgetc(stdin);
            continue;
        }
        else
        {
            srand((unsigned int)time(NULL));
            player2Score += SingleIteration();
            player1Score += SingleIteration();


            printf("You scores: %d score.\n", player2Score);
            printf("\nComputer scores: %d score.\n", player1Score);

            printf("\n Click enter to continue the Game. ");
            fgetc(stdin);
            continue;
        }

    }

    printf("\nComputer scores: %d score.\n", player1Score);
    printf("You scores: %d score.\n", player2Score);
}

int SingleIteration()
{
    int number = 0;

    // Player
    number = (rand() % (6 - 1 + 1)) + 1;
    printf("\n%d-iani\n", number);
    //
    CreateDice(number);
    //
    return number;
}


void CreateDice(int number)
{
    for (int i = 1; i < 7; ++i) {
        if(number == 1)
        {
            CreateOne();
            printf("\n\n");
            break;
        }
        else if(number == 2){
            CreateTwo();
            printf("\n\n");
            break;
        }
        else if(number == 3){
            CreateThree();
            printf("\n\n");
            break;
        }
        else if(number == 4){
            CreateFour();
            printf("\n\n");
            break;
        }
        else if(number == 5){
            CreateFive();
            printf("\n\n");
            break;
        }
        else
        {
            CreateSix();
            printf("\n\n");
            break;
        }
    }
}


