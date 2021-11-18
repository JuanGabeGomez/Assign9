#ifndef BUBBLESORT_H
#define BUBBLESORT_H

template <class ItemType>
void swapB(ItemType& a, ItemType& b)
{
    ItemType temp = a;
    a = b;
    b = temp;
}

template<class ItemType>
void BubbleSort(ItemType values[], int size)
{
  for (int i = 0; i < size; i++)  //Set current(i) to 0
  {
    for (int j = size; j > i; j--)  //Start from back of array and go to current
    {
      if (values[j] < values[j - 1])  //If the "back" element is smaller swap
        swapB(values[j], values[j - 1]);
    }
  }
}
#endif