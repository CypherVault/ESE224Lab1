
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <string>
// Print the contents of vector
template <typename T>

int main()
{
	// Create an empty vector
	vector<vector<string>> vec{ {"5", "3", ".", ".", "7", ".", ".", ".", "."}
		, {"6", ".", ".", "1", "9", "5", ".", ".", "."}
		, {".", "9", "8", ".", ".", ".", ".", "6", "."}
		, {"8", ".", ".", ".", "6", ".", ".", ".", "3"}
		, {"4", ".", ".", "8", ".", "3", ".", ".", "1"}
		, {"7", ".", ".", ".", "2", ".", ".", ".", "6"}
		, {".", "6", ".", ".", ".", ".", "2", "8", "."}
		, {".", ".", ".", "4", "1", "9", ".", ".", "5"}
		, {".", ".", ".", ".", "8", ".", ".", "7", "9"} };




	return 0;
}

void print(T& vecOfElements, std::string delimeter = " , ")
{
    for (auto elem : vecOfElements)
        std::cout << elem << delimeter;
    std::cout << std::endl;
}
/*
 * Generic function to find duplicates elements in vector.
 * It adds the duplicate elements and their duplication count in given map countMap
 */
template <typename T>
void findDuplicates(std::vector<T>& vecOfElements, std::map<T, int>& countMap)
{
    // Iterate over the vector and store the frequency of each element in map
    for (auto& elem : vecOfElements)
    {
        auto result = countMap.insert(std::pair<std::string, int>(elem, 1));
        if (result.second == false)
            result.first->second++;
    }
    // Remove the elements from Map which has 1 frequency count
    for (auto it = countMap.begin(); it != countMap.end();)
    {
        if (it->second == 1)
            it = countMap.erase(it);
        else
            it++;
    }
}


int main()
{
    // Vector of strings
    std::vector<std::string> vecOfStings{ "at" , "hello", "hi", "there", "where", "now", "is", \
                                            "that" , "hi" , "where", "at", "no", "yes", "at" };
    print(vecOfStings);
    // Create a map to store the frequency of each element in vector
    std::map<std::string, int> countMap;
    // Iterate over the vector and store the frequency of each element in map
    for (auto& elem : vecOfStings)
    {
        auto result = countMap.insert(std::pair<std::string, int>(elem, 1));
        if (result.second == false)
            result.first->second++;
    }
    std::cout << "Duplicate elements and their duplication count " << std::endl;
    // Iterate over the map
    for (auto& elem : countMap)
    {
        // If frequency count is greater than 1 then its a duplicate element
        if (elem.second > 1)
        {
            std::cout << elem.first << " :: " << elem.second << std::endl;
        }
    }
    /*
     * Finding duplicates in vector using generic function
     */
    std::map<std::string, int> duplicateElements;
    // Get the duplicate elements in vector
    findDuplicates(vecOfStings, duplicateElements);
    std::cout << "Duplicate elements and their duplication count " << std::endl;
    for (auto& elem : duplicateElements)
        std::cout << elem.first << " :: " << elem.second << std::endl;
    return 0;
}