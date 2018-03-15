#include <vector>
#include <string>
#include <iostream>
#include "superhero.h"

#ifndef MYHASH_H
#define MYHASH_H


class my_hash{
	
	private:
	
	//Hash map to store data
	std::vector<std::vector<Superhero>> hashMap(17011);

	//Hashes value.
	int hash(std::string s){
		return 1;
	}

	public:
	//Constructor
	my_hash(){

	}
	//Destructor	
	~my_hash(){
		
	}

	bool insert(const Superhero & s){
		int hash = hash(s.getName());
		int existing = hashMap[hash].size();
		if(existing  > 0){
			hashMap[hash][existing-1] = s;
			return false;
		}
		else{
			hashMap[hash][0] = s;
			return true;
		}		
	}	
	
	Superhero & get(const std::string name){
		int hash = hash(s.getName());
		int i;
		for(i = 0; i >= hashMap[hash].size()-1; i++){
			if(std::compare(name, hashMap[hash][i].getName()) == 0)
				return hashMap[hash][i];
		}
	}

};



#endif  //MYHASH_H
