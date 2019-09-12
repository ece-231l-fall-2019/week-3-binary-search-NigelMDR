#include <vector>

bool linearSearch(const std::vector<int>& set, int value)
{

	for (size_t num = 0; num < set.size(); num++)
	{
		if(set[num] == value)
			return true;
	} 	
	
	// TODO:
	// implement me
	return false;
}

bool linearSearch(const int *begin, const int *end, int value)
{

	
	for ( ; begin <= end;  begin++ )
	{
		if ( *begin == value )
			return true;
	}

	// TODO:
	// implement me
	return false;
}
