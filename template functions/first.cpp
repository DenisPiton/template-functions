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

int main()
{
	int Array[10]{ 1,2,11,4,5,6,7,8,9,10 };

	int a = 10;
	maximum(Array,a);
	minimum(Array, a);
	
	
}
