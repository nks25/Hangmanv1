#include "src/Include/WordContainer.h"
#include <stdlib.h>
using namespace std;
// Implement all functions

WordContainer::WordContainer()
{
	// IMPLEMENT ME
}

WordContainer::WordContainer(const WordContainer& other){
	// IMPLEMENT ME
}

WordContainer::WordContainer(WordContainer&& other){
	// IMPLEMENT ME
}

WordContainer::~WordContainer(){
	// IMPLEMENT ME
}

WordContainer& WordContainer::operator=(const WordContainer& other){
	// IMPLEMENT ME
}

WordContainer& WordContainer::operator=(WordContainer&& other){
	// IMPLEMENT ME
}


void WordContainer::addWord(const std::string& word){
	Word_list.push_back(word);
}

void WordContainer::deleteWord(const std::string& word){
	// IMPLEMENT ME	
}

void WordContainer::readFromFile(const std::string& file_name){
    fstream Text_File;
    char c;
    int ndx=0;
    string temp_word;
    string line;
   Text_File.open(file_name,ios::in);
    while(!(Text_File.eof()))
    {
       c= Text_File.get();
       if(c==EOF)
       {
           addWord(temp_word);
           continue;
       }
       else if((c== ' ')||(c=='\n'))
       {
           addWord(temp_word);
           temp_word.clear();
       }
       else{
           temp_word=temp_word+c;
       }
       
        
            
      /* c= Text_File->get(); 
       while((c!=' ')&&(c!='\n')&&(c!='?'))
       {
         temp_word=temp_word+c;
        c=Text_File->get();
       }
       if(!(temp_word.empty()))
       {
       addWord(temp_word);
       temp_word.clear();
       }*/
    }
    
    Text_File.close();
   
}

std::string WordContainer::randomWord() const{
	unsigned int ndx;
    ndx=rand()%(Word_list.size()-1);
    return (Word_list.at(ndx));
}

std::vector<std::string> WordContainer::sortedWords() const{
	// IMPLEMENT ME
}

unsigned int WordContainer::size() const{
	return (Word_list.size());
}

