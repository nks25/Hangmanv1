#include "src/Include/PartialWord.h"
#include "src/Include/WordContainer.h"
#include <string>
#include <iostream>
#include <unistd.h>
#include <vector>
#include <time.h> 
#include <stdlib.h>
#include "src/Frames.h"
using namespace std; 
void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Stroing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not acheived 
    while (clock() < start_time + milli_seconds);
} 
//mplements the hangman game. It should do the following.
//
// 1. It reads the words from the file words.txt into an object of class
// WordContainer. If there is an error during reading, or there are no 
// words in the container after reading the file, it outputs an 
// error message "Invalid input!" to the standard output and terminates.
//
// 2. The program then chooses a random word that appears in the 
// container, and starts a game with it. It repeatedly asks the user
// to guess a letter. If the guess is not a lower-case letter,
// the program keeps asking, until the input is read successfully.
// If the guessed letter appears in the word, then the currently guessed 
// word is updated, unless the letter has been guessed before, in which case
// nothing happens. If the guessed letter is wrong, then the list of wrong 
// guesses is updated, and one line is added to the hangman drawing, in case 
// this is a new wrong letter (for each wrong letter exactly one line is added).
// If the hangman drawing is completed, the message "You lost!" is output.
// If the complete word is guessed, the message "You won!" is output.
// At each step, the program should output
// Word: [currently guessed word]
// Incorrect guesses: [coma-separated list of letters, without repetition]
// [hangman drawing corresponding to current number of unique incorrect guesses]
// See the pdf file for examples of the game's output.
//
// 3. After the end of the game (won or lost), the application proceeds 
// to choose another random word, and start a new game, in which the hangman
// diagram is reset.

void Game_Activity(PartialWord &word,Window & game,int hm_ndx);
void Welcome_Screen(Window& game);
void GameOver_Screen(Window &game);
int main(int argc, char* argv[]) {
Window game;
game.Set_Init_Window();
WordContainer WC;
char Entrance;
string Text_path="../fruits.txt";
while(1)
{
   Welcome_Screen(game);
   game.Print_Window();
   cin>>Entrance;//Entrance has Four option 1.Start,2.Highest Score,3.Category,4.Quit
   if(Entrance=='2')//Qit the game on Main Menu;
   {
     game.Flush();
     system("cls");
     game.Set_Line(6,6,"Bye Bye.");
     game.Print_Window();
     delay(1);
     system("cls");
     game.Set_Line(6,6,"Bye Bye..");
     game.Print_Window();
     delay(1);
      system("cls");
     game.Set_Line(6,6,"Bye Bye...");
     game.Print_Window();
     delay(1);
      break;
   }
  else if(Entrance=='1'){
        string Fake;
        game.Flush();
        WC.readFromFile("../words.txt");
        Fake=WC.randomWord();
        PartialWord word=PartialWord(Fake);
        int hm_ndx=1;
        system("cls");
        Game_Activity(word,game,hm_ndx);
  }
  else{
      system("cls");
      game.Set_Line(23,7,"Invalid Entry");
      game.Print_Window();
      delay(3);
      system("cls");
      game.Flush();
  }
       
       
  }

	return 0;
}
void Game_Activity(PartialWord& word,Window &game,int hm_ndx)
{ 
    game.Set_Line(23,2,"You Guessed:");
    char c;
    vector<char> used_letter;
    Draw_HangMan(&game,hm_ndx);
    game.Set_Line(23 ,15,(word.guessedWord()).data());//
    game.Print_Window();
    int i=0;
    bool isUsed=false;
   while(!word.isDone())
{
    isUsed=false;
    if(hm_ndx==9)
    { 
        game.Flush();
        delay(2);
        GameOver_Screen(game);
        system("cls");
        game.Print_Window();
        delay(4);
        break;
    }
    cin>>c;
    for(i=0;i<used_letter.size();i++)
    {
        
        if(c==used_letter.at(i))
        {
           isUsed=true;
           break;
 
        }
            
    }
    if(c=='0')
        break;
        if(!isUsed){
   if(word.checkGuess(c)!=CORRECT)
        {
           hm_ndx++; 
        }
       system("cls");
       Draw_HangMan(&game,hm_ndx);
       game.Set_Line(23 ,15,(word.guessedWord()).data());//
       game.Print_Window();
       used_letter.push_back(c);
        } 
}
if(word.isDone())
{
game.Flush();
delay(2);
game.Set_Line(10,5,"You Win");
system("cls");
game.Print_Window();
delay(4);
}
system("cls");
game.Flush();
}
void Welcome_Screen(Window &game)
{
game.Set_Line(2 ,4,"Welcome To Hangman ");
game.Set_Line(3,6,"1.Start");
game.Set_Line(6,6,"2.Quit");
}
void GameOver_Screen(Window &game)
{
   game.Set_Line(10,5,"GAME  OVER");
}