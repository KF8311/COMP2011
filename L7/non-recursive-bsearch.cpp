const int NOT_FOUND = -1;      /* File: non-recursive-bsearch.cpp */
int bsearch(const int data[ ], // sorted in ascending order
            int size,          // number of data in the array
            int value)         // value to search
{
    int first = 0;
    int last = size - 1;

    while (first <= last)
    {
    	int mid = (first + last)/2;
    	if (data[mid] == value)
            return mid;        // Value found!
    	else if (data[mid] > value)
            last = mid - 1;    // Set up for searching the lower half
    	else
            first = mid + 1;   // Set up for searching the upper half
    }

    return NOT_FOUND;
}
