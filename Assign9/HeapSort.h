#ifndef HEAPSORT_H
#define HEAPSORT_H

template<class ItemType>
void ReheapDown(ItemType values[], int root, int bottom)
{
	int leftc = (2 * root) + 1, rightc = (2 * root) + 2;
	if (leftc > bottom)
		return;
	int maxChild;
	if (rightc > bottom || values[leftc] > values[rightc])
		maxChild = leftc;
	else
		maxChild = rightc;
	if (values[root] < values[maxChild])
	{
		swap(values[root], values[maxChild]);
		ReheapDown(values, maxChild, bottom);
	}
}

template<class ItemType>
void HeapSort(ItemType values[], int size)
{
	int* temparray = new int[size] ();
	for (int i = 0; i < size; i++)
	{
		temparray[i] = values[i];
		ReheapDown(temparray, 0, i);
	}
	for (int i = 0; i < size; i++)
	{
		values[i] = temparray[i];
	}
	delete temparray;
}

#endif