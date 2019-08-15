#ifndef WORDCONTAINER_H_
#define WORDCONTAINER_H_
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
// This class implements a container for storing the words used in the game.
// Each word in the container appears exactly once (no duplication).
// Words are non-empty sequences of lower-case letters.
enum mode
{
    RESERVE=0,
    TEXTFILE=1
};
class WordContainer {

public:

	// Initialize empty container
	WordContainer();

	// Copy constructor
	WordContainer(const WordContainer& other);

	// Move constructor
	WordContainer(WordContainer&& other);

	// Destructor
	~WordContainer();

	// Assignment operator (copy semantics)
	WordContainer& operator=(const WordContainer& other);

	// Assignment operator (move semantics)
	WordContainer& operator=(WordContainer&& other);

	// Adds a word to the container. 
	// If the word already exists in the container, does nothing. 
	void addWord(const std::string& word);

	// Deletes a word from the container.
	// If the word does not exist in the container, does nothing.
	void deleteWord(const std::string& word);

	// Reads the contents of a word container from a file.
	// If the file cannot be opened, throws std::invalid_argument exception.
	// Existing words in the container are preserved.
	// Each word in the file appears on a new line.
	// If the file contains duplications, only one copy of 
	// the word should be added, and if a word is already 
	// present in the container it should not be added.
	// If a word contains a character which is not a 
	// lowercase letter, or is empty word, throws an 
	// std::invalid_argument exception without adding the 
	// corresponding line to the container.
	void readFromFile(const std::string& file_name);

	// Returns a random word from the container. If the container
	// is empty, throws an std:: invalid_argument exception.
	std::string randomWord() const;

	// Returns a vector of all words in the container, sorted alphabetically.
	// If the container is empty, returns the empty vector.
	std::vector<std::string> sortedWords() const;

	// Returns the number of words in the containwer.
	unsigned int size() const;

	// Add public methods and data members here

private:
	vector<string> Word_list;
	unsigned int Word_count;
};


#endif /* WORDCONTAINER_H_ */