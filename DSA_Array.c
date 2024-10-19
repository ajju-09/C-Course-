#include <stdio.h>
int insertion(int arr[], int size, int capicity, int element, int index)
{
  // function for insertion in array
  if (size >= capicity)
  {
    return -1;
  }

  for (int i = size - 1; i >= index; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[index] = element;
  return 1;
}

void deletion(int arr[], int size, int index2)
{
  //function for deletion in array
  for (int i = index2; i < size - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
}

int print(int arr[], int size)
{
  // function for traversal in array
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{

  int arr[100] = {11, 22, 33, 44, 55};
  int n = 5;
  int capacity = 100, element = 66, index = 3, index2 = 2;
  print(arr, n);
  printf("\n");
  insertion(arr, n, capacity, element, index);
  n++;
  print(arr, n);
  deletion(arr, n, index2);
  n--;
  printf("\n");
  print(arr, n);

  return 0;
}
