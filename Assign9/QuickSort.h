#ifndef QUICKSORT_H
#define QUICKSORT_H

template <class ItemType>
void swapQ(ItemType& a, ItemType& b)
{
	ItemType temp = a;
	a = b;
	b = temp;
}

template<class ItemType>
void split(ItemType values[], int start, int size, int& splitpt)
{
	int first = start, last = size;
	int splitval = values[first];
	bool direction = true;
	first++;
	while (first <= last)
	{
		if (direction)
			if (values[first] > splitval)
				direction = false;
			else
			{
				first++;
				direction = (first <= last);
			}
		else if(first <= last)
		{
			if (values[last] < splitval)
			{
				swap(values[first], values[last]);
				first++;
				last--;
				direction = true;
			}
			else
				last--;
		}

	}
	if (last > size)
		last = size;
	splitval = last;
	swapQ(values[start], values[splitval]);
	splitpt = splitval;
}

template<class ItemType>
void QuickSort(ItemType values[], int start, int size)
{
	if (size == 1 || size == 0)
		return;
	int splitpt;
	split(values, start, size, splitpt);
	if(splitpt != 0)
	{
		QuickSort(values, start, splitpt - 1);
	}
	QuickSort(values, splitpt + 1, size);
}

#endif