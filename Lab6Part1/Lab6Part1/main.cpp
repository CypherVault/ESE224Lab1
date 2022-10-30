#include <iostream>
#include <string.h>

//look at all the words
//check the first letter, if the same 
//move onto next one, add first letter to the saved string prefix data   
//once a SINGLE letter isnt the same breka and output






int main() {

	std::string holding_string;
	std::string one_char_str;
	char holding_array[4];
	std::string prefix = "Largest Prefix: ";
	int indexpre = 0;
	int o = 0;
	char holdnew = holding_string[0];
	std::string array[4]{ "Dog","Drake","Deacon","Dragged"};
	int j = 0;

	for (int i = 0; i < 4; i++) {


		holding_string = array[i];

		holding_array[i] = holding_string.at(0);
		//std::cout << holding_array[i];
	
	}


	
	if (((holding_array[0]) == (holding_array[1])) && ((holding_array[0]) == (holding_array[2])) && ((holding_array[0]) == (holding_array[3]))) {
		//std::cout << (holding_array[0]) << (holding_array[1]) << (holding_array[2]) << (holding_array[3]) << std::endl;
		//holdchar = (holding_array[0]);

		one_char_str.push_back(holding_string.at(0));
		//std::cout << one_char_str;
		prefix.append(one_char_str);
		
		//std::cout << holding_string.at(0);
		//indexpre++;
	}
	

	std::cout << prefix;

}


	

