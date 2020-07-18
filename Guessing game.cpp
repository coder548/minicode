#include <iostream>
using namespace std;

bool gameOver;
int NumberOfGuesses;
int GuessLimit = 3;
int Score;
int FirstNum;
int SecondNum;
char EnteredLetter;
bool CorrectOrIncorrect;
bool Error;



int main () {
    gameOver = false;

   cout << "In this game, you will be given a number from 0-10 and you have to guess \nwhether the next number is larger (write L) or smaller (write S) than it. \nIf you make five incorrect guesses, it's game over. \nTry to get as many correct guesses as you can!\n\n";

        FirstNum = (rand() %10);
           SecondNum = (rand() %10);

    while (!gameOver) {
               cout << "Is the next number larger or smaller than " << FirstNum << "?\n";
        cin >> EnteredLetter;

        if (EnteredLetter == 'L') {
                if (SecondNum > FirstNum) {
                   CorrectOrIncorrect = true;
               } if (SecondNum <= FirstNum) {CorrectOrIncorrect = false;
               }
        }


        if (EnteredLetter == 'S') {

            if (SecondNum < FirstNum)
                {
                    CorrectOrIncorrect = true;
                                  }
               if (SecondNum >= FirstNum) {CorrectOrIncorrect = false;}
           }

        if ((EnteredLetter != 'S') && (EnteredLetter != 'L')) {
            Error = true;
            cout << "You must enter 'S' or 'L'\n";
        }


        if (CorrectOrIncorrect == true) {
                 cout << "Correct!\n";
            Score++;
             }

        if (CorrectOrIncorrect == false && !Error) {

                 cout << "Incorrect!\n";
                 NumberOfGuesses++;
        }


        if (NumberOfGuesses == 5) {
            gameOver = true;

        }


        FirstNum = (rand() %10);
           SecondNum = (rand() %10);
        Error = false;
    }

    if (gameOver == true) {
        cout << "Game Over\n";
        cout << "Score: " << Score << endl;
    }


}
