#include <iostream>
#include <fstream>
#include <vector>

#include "Timer.h"
#include "search.h"


int File2Vector(const std::ifstream  &inputFile, std::vector<int> val);


int main()
{
	std::ifstream numbersFile ("numbers");
	std::ifstream searchFile ("search");	

	std::vector<int> numbers;
	std::vector<int> search;

	numbers.reserve(1000000);
	search.reserve(2000);

	while (true)
	{
		int val;
		numbersFile >> val;
		if (numbersFile.eof())
			break;
		numbers.push_back(val);
	}
	
	while (true)
	{
		int val2;
		searchFile >> val2;
		if (searchFile.eof())
			break;
		search.push_back(val2);
	}

//	File2Vector( numbersFile, numbers );
//	File2Vector( searchFile, search );

	// TODO:
	// read the file "numbers" into the numbers vector
	// read the file "search" into the search vector
	// since you're basically doing the same thing twice,
	// write a function to read a single file into a vector
	// and then call this function twice.
	

	{
		Timer timer("Time to linear search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to linear search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers.data(), numbers.data() + numbers.size(),
					search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	// TODO:
	// repeat the above two blocks but use the binary search functions.
	

	{
		Timer timer("Time to binary search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to binary search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers.data(), numbers.data() + numbers.size(),
					search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}
		

	return 0;
}
/*
int File2Vector(const std::ifstream &inputFile, std::vector<int> val)
{

	if (inputFile)	
	{

		while ( inputFile >> values )
		{
			val.push_back(value);
		}		

	}
	while (true)
	{	
		int value;
		inputFile >> value;
		if(inputFile.eof())
			break;
		val.push_back(value);
		i++;
	};
	return 0;
}
*/
