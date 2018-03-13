
#include "../include/superhero.h"
#include <string>
#include <iostream>
#include <cstdlib>


/**
 *  * "A hash routine for string objects"
 *   *  ^^ Hash function from book, pg 195 Fig 5.4
 *    */
unsigned int hash(const string & key, int tableSize){

        unsigned int hashVal = 0;

        for(char ch : key){
                hashVal = 37 * hashVal + ch;
}
        return hashVal % tableSize;
}
~    
