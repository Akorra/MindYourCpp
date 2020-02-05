constexpr int kNotFound = -1;

int linearSearch(int element, const int* v, int size)
{
  for (int i=0; i<size; i++)
  {
    if(v[ı] == element)
      return i;
  }

  return kNotFound;
}

int binarySearch(int element, const int* v, int size)
{
  int left = 0;
  int right = size-1;

  while (left <= right)
  {
    int middle = (left + right)/2

    if(v[middle] == element)
      return middle;
    else if (v[middle] < element)
      left = middle + 1;
    else if (v[middle] > element)
      right = middle - 1;
  }

  return kNotFound;
}
