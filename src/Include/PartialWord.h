#ifndef PARTIALWORD_H_
#define PARTIALWORD_H_
#include <iostream>
#include <string>
using namespace std;
// Possible answers to a guessed letter by the player
enum Answer { CORRECT, WRONG, REVEALED };

// This class is for storing a word (sequence of lower-case letters)
// and a partially guessed answer, i.e. infromation about which positions
// in the word have been revealed so far in a given game.

class PartialWord {

public:

	// Initialize the contents of the word using the given string word.
	// Initialize the partially guessed answer to reflect that no guesses
	// have been made thus far.
	PartialWord(const std::string& word);

	// Copy constructor
	PartialWord(const PartialWord& other);

	// Move constructor
	PartialWord(PartialWord&& other);

	// Destructor
	~PartialWord();

	// Assignment operator (copy semantics)
	PartialWord& operator=(const PartialWord& other);

	// Assignment operator (move semantics)
	PartialWord& operator=(PartialWord&& other);

	// Checks whether a given guessed letter is present in the word,
	// and if necessary updates the partially guessed word. 
	// If the given character letter is not a lower-case letter,
	// throws an std::invalid_argument exception. 
	// Otherwise the method returns: 
	// CORRECT if letter occurs in the word and has not been guessed previously; 
	// WRONG if letter does not occur in the word;
	// REVEALED if letter occurs in the word but has already been guessed previously.
	// In the first case, the guessed word is updated by revealing all positions 
	// in which letter appears in the word.
	Answer checkGuess(const char& letter);

	// Returns a sequence of lower-case letters and underscores representing
	// the part of the word guessed and revealed so far. In the sequence, the
	// letters guessed so far are present, and all the other letters are replaced
	// by underscores. If no letter has been guessed successfully so far,
	// the sequence consists of N underscores, where N is the length of the word.
	std::string guessedWord() const;

	// Returns true if the whole word has been guessed correctly, and false otherwise.
	bool isDone() const;

	// Add public methods and data members here

private:
string Challenged_Word;
string Guessed_Word;
 
	// Add private methods and data members here

};


#endif /* PARTIALWORD_H_ */