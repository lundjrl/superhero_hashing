# superhero_hashing
Quick Notes: When executing main, make sure to go back to my_hash.h and comment out the hashing functions you don't wish to execute since we can only execute one at a time. Check the commented lines in include and get within main. 

Quick Notes: The hashing functions are coded in order from top having the most collisions and the bottom having the fewest.

Hash functions with provided number of collisions each:

int hashNum(std::string name){
                int hashVal = 0;
                for(char ch : name){
                        hashVal += ch;
                }
                return hashVal % MAXSIZE;
        }
Collisions: 14077


int hashFunc(std::string name){
                return (name[0] + 27 * name[1] + 729 * name[2]) % MAXSIZE;

        }
Collisions: 13893

unsigned int goodHash(std::string name){
                unsigned int hashVal = 0;
                for(char ch : name){
                        hashVal = 37 * hashVal + ch;
                }
                return hashVal % MAXSIZE;
        }
Collisions: 5894
