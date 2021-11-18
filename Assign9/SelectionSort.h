#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

template <class ItemType>
void swap(ItemType& a, ItemType& b)
{
    ItemType temp = a;
    a = b;
    b = temp;
}

template<class ItemType>
void SelectionSort(ItemType values[], int size)
{
  int smallestv, smallesti;  //Two ints to keep track of the smallest value and its index
  for (int i = 0; i < size; i++)
  {
    smallestv = values[i]; //Set smallest value to current index
    smallesti = i;  //Set index of smallest value to current index
    for (int j = i + 1; j <= size; j++)
    {
      if (values[j] < smallestv)  //Search array for smallest element
      {
        smallesti = j;
        smallestv = values[j];
      }
    }
    swap(values[i], values[smallesti]);  //Swap current with smallest element
  }
}

#endif