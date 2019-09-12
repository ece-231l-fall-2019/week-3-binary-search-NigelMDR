#include <vector>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int valueToFind )
{

	size_t begin = 0;
	size_t end = set.size();


	while (true)
	{
		size_t mid = (end + begin )/2;
		
		if( mid == end )
			return false;

		if( valueToFind == set[mid])
			return true;

		if( valueToFind < set[mid])
			end = mid;
		else
			begin = mid + 1;	
	}
	// TODO::
	// implement me
	return false;
}

bool binarySearch(const int *begin, const int *end, int valueToFind)
{
	while ( true )
	{
		const int *mid = (end - begin)/2 + begin;
		// int end,begin;

		if( valueToFind == *mid )
			return true;
		if( *mid == *end )
			return false;

		if( valueToFind < *mid )
			end = mid;
	//		binarySearch(begin, mid, valueToFind);
		else
			begin = mid + 1;
	//		binarySearch(mid++, end, valueToFind);
	}
	// TODO::
	// implement me
	return false;
}

