Hashing functions provided in my_hash.h


int hashNum(std::string name){
                int hashVal = 0;
                for(char ch : name){
                        hashVal += ch;
                }
                return hashVal % MAXSIZE;
        }
Collisions:


int hashFunc(std::string name){
                return (name[0] + 27 * name[1] + 729 * name[2]) % MAXSIZE;

        }
Collisions:

unsigned int goodHash(std::string name){
                unsigned int hashVal = 0;
                for(char ch : name){
                        hashVal = 37 * hashVal + ch;
                }
                return hashVal % MAXSIZE;
        }
Collisions:
