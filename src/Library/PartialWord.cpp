#include "src/Include/PartialWord.h"
using namespace std;
// Implement all functions
	
PartialWord::PartialWord(const std::string& word)
{
    int len=0;
    int i;
	Challenged_Word=word;
    len=word.length();
    for(int i=0;i<len;i++)
    {
      Guessed_Word=Guessed_Word+"_";  
    }
    
}

PartialWord::PartialWord(const PartialWord& other){
	// IMPLEMENT ME
}

PartialWord::~PartialWord(){
	// IMPLEMENT ME
}

PartialWord& PartialWord::operator=(const PartialWord& other){
	// IMPLEMENT ME
}

PartialWord& PartialWord::operator=(PartialWord&& other){
	// IMPLEMENT ME
}

Answer PartialWord::checkGuess(const char& letter){
    bool Character_found=false;
    int ndx=0;
   const char *temp;
    temp=Challenged_Word.data();
    while(*temp!='\0')
    {
        if((*temp)==letter)
        {
            Guessed_Word[ndx]=letter;
            Character_found=true;
        }
        temp++;
        ndx++;
        }
      if(Character_found){
          
          return CORRECT;
      }
      else{
          return WRONG;
      }
          
    
}

std::string PartialWord::guessedWord() const{
	return Guessed_Word;
}

bool PartialWord::isDone()const{
	return (Guessed_Word==Challenged_Word);
}