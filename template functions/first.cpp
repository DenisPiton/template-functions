#include <iostream>

using namespace std;
template <typename T>
T maximum(T* Arr,int a) {
	T buf{};
	for (int i =0;i<a;i++)
	{
		if (Arr[i] > buf)
		{
			buf = Arr[i];
		}
	} 
	return buf;
}
template <typename T>
T minimum(T* Arr, int a) {
	T buf{};
	buf = maximum(Arr, a);
	for (int i = 0; i < a; i++)
	{
		if (Arr[i] < buf)
		{
			buf = Arr[i];
		}
	}
	return buf;
}
template <typename T>
void bubbleSort(T* list, T listLength)
{
	while (listLength--)
	{
		bool swapped = false;

		for (int i = 0; i < listLength; i++)
		{
			if (list[i] > list[i + 1])
			{
				swap(list[i], list[i + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}
template <typename T>
void swap(T* list, int index, T item)
{
	list[index] = item;
}
int main()
{
	int Array[10]{ 1,2,11,4,5,6,7,8,9,10 };

	int a = 10;
	maximum(Array,a);
	minimum(Array, a);
	bubbleSort(Array, a);
	swap(Array, 3, 100);
	for (int i : Array)
	{
		cout << i<<" ";
	}
	
	
	
}
