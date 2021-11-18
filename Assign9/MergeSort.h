#ifndef MERGESORT_H
#define MERGESORT_H

template<class ItemType>
void MergeSort(ItemType values[], int start, int size)
{
  if (size == 1)
    return;
  int mid = (start + size)/2;
  MergeSort(values, start, mid);
  MergeSort(values, mid, size);
  int i = mid, j = 0, k = 0;
  int* temparray = new int[size - start];
  for (; i < (size - mid), j < (mid - start); k++)
  {
      if (values[i] < values[j])
      {
          temparray[k] = values[i];
          i++;
      }
      else
      {
          temparray[k] = values[j];
          j++;
      }
  }
  if (i)
  {
      for (; i < (size - mid); i++, k++)
          temparray[k] = values[i];
  }
  else
  {
      for (; j < (mid - start); j++, k++)
          temparray[k] = values[j];
  }
  for (int y = start, z = 0; y < size; y++, k++)
      values[y] = temparray[z];
  delete temparray;
}

#endif