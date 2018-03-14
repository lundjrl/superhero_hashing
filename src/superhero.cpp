
#include "../include/superhero.h"
#include <string>
#include <iostream>
#include <cstdlib>

/**
 *"A simple hash function" 
 * Found from book, pg 195
 */

int hash(const string & key){
	int hashVal = 0;
	
	for(char ch : key){
		hashVal += ch;
}
	return hashVal % tableSize;
}

/**
 *"Another possible hash function"
 * Found in the book pg 195
 */
int hash(const string & key){
	
	return (key[0] + 27 * key[1] + 729 *key[2] ) % tableSize;
}

/**
 *  * "A hash routine for string objects"
 *   *  ^^ Hash function from book, pg 195 Fig 5.4
 *    */
unsigned int hash(const string & key){

        unsigned int hashVal = 0;

        for(char ch : key){
                hashVal = 37 * hashVal + ch;
}
        return hashVal % tableSize;
}   
