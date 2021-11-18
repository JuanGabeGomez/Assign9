#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

template<class ItemType>
int FindInsertionPt(ItemType values[], ItemType value, int size)
{
  int i = 0;
  for (; i < size; i++)
  {
    if (value < values[i])
      return i;
  }
  return i;
}

template<class ItemType>
void InsertionSort(ItemType values[], int size)
{
  int insert = 0;
  for (int i = 1; i <= size; i++)
  {
    insert = FindInsertionPt(values, values[i], i);
    for (int j = i; j < insert; j--)
    {
      swap(values[j], values[j - 1]);
    }
  }
}

#endif