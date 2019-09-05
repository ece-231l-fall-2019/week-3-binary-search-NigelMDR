#include <vector>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int value)
{
	int q4  = size.set() - 1;
	int q1  = q4 / 5;
	int q2  = q4 /2;
	int q3  = q4 - q1;
	
	size_t left = 0;
	size_t right = 0;

	if ( value <= q1 )
		left = 0; right = q1;
	if (value <= q2 )
		left = q1; right = q2; 
	if (value <= q3 )
		left = q2; right = q3;
	else 
		left = q3; right = q4;

	while (true)
	{
		size_t mid = (right + left )/2;
		
		if ( valueToFind == set[mid])
			return true;
		if ( left == right )
			return false;
		if ( valueToFind < set[mid])
			right = mid - 1;
		if ( valueToFind > set[mid])
			left = mid + 1;	
	}
	// TODO::
	// implement me
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{

	while ( true )
	{
		int *mid = *begin + (end - begin);

		if ( value == mid );
			return true;
		if ( mid == end )
			return false;

		if( value < mid )
			right = mid - 1;
		if ( value > mid )
			left = mid + 1;
	}
	// TODO::
	// implement me
	return false;
}

