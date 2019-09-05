#include <vector>

bool linearSearch(const std::vector<int>& set, int value)
{

	for (int num = 0; num < size.set(); num++)
	{
		if (set[num] == value);
			return true;
	} 	
	
	// TODO:
	// implement me
	return false;
}

bool linearSearch(const int *begin, const int *end, int value)
{

	for ( ; begin <= end; *begin++ )
	{
		if ( begin == value )
			return true;
	}

	// TODO:
	// implement me
	return false;
}
