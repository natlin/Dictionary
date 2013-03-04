#README Authors Nathan Lin, Lakshmi Prameela Boorada
1.created element.h, word.h, phrase.h, sentence.h, dict.h, word.cpp, phrase.cpp, sentence.cpp, dict.cpp  
2.created Element class and added supplied virtual void functions  
3.created derived classes Phrase, Word, Sentence in their respective header files  
4.added the inherited functions into the header files of derived classes  
5.started off the .cpp files  
6.added ifstream file(f.c\_str()); to dict.cpp to read the file. You need f.c\_str() because ifstream takes a char * as an argument, not a std::string  
7.created constructors for Phrase, Word, and Sentence with argument of string, stores the string into private data memeber base  
8.edited the dict.cpp constructor to read in words to word vector  
9.edited the dict.cpp constructor to read in sentences to sentence vector  
10.created sets sword, sphrase, ssentence. Copies vector elements into sets  
11.edited dict.cpp constructor to get phrases. Copies phrases into set  
12.completed complete for words, phrases, and sentences  
13.completed check for words, phrases, and sentences, used an '@' for padding 
the hamming distance because a ' ' could be part of a phrase or sentence  
14.changed check and made the program faster by removing the two sorts at the end and turning it into a set<pair<int, string > >.  by doing so, we do not need to go through the entire phrases vector two extra times 
15.added destructors for dict, word, phrase and sentence   
