#include <vector>
#include "search.h"


void bubblesort( int *begin, const int *end)
{

	bool sorted = false;

	while (!sorted)
	{
		sorted = true;
		for( int *n = begin + 1; n != end; n++)
		{
			if ( *begin > *n)
			{
				int swap = *begin;
				*begin = *n;
				*n = swap;
				sorted = false;	
			}
		}
		 begin++;
	}
		


}
