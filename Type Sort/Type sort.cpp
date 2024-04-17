#include<iostream>
using namespace std;
// сортировка пузырём, она сравнивает соседние значения, и меняет их местами если предыдущее оказывается больше последущего, Таким образом элементы с большими значениями оказываются в конце списка, а с меньшими остаются в начале.
void bubbleSort(int arr[], int size) {
	for (int first = 0; first < size - 1; first++) {
		for (int second = 0; second < size - second - 1; second++) {
			if (arr[second] > arr[second + 1]) {
				int temp = arr[second];
				arr[second] = arr[second + 1];
				arr[second + 1] = temp;
			}
		}
	}
}
// сортировка выбором сначала выбирает наименьший элемент в массиве, а затем меняет его местами с первым элементом в массиве.
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selectionSort(int ar[], int size)
{
	int number1, number2, min_idx;

	
	for (number1 = 0; number1 < size - 1; number1++)
	{

		
		min_idx = number1;
		for (number2 = number1 + 1; number2 < size; number2++)
			if (ar[number2] < ar[min_idx])
				min_idx = number2;

		
		swap(&ar[min_idx], &ar[number1]);
	}
}
void printAr(int ar[], int size)
{
	int numbers;
	for (numbers = 0; numbers < size; numbers++)
		cout << ar[numbers] << " ";
	cout << endl;
}



//сортировка вставками- это алгоритм  в котором элементы входной последовательности просматриваются по одному, и каждый новый поступивший элемент размещается в подходящее место среди ранее упорядоченных элементов.
//void insertionSort(int arr[], int siz)
//{
//	int numberOne, key, numberTwo;
//	for (numberOne = 1; numberTwo < siz; numberOne++) {
//		key = arr[numberOne];
//		numberTwo = numberOne - 1;
//
//		
//		while (numberTwo >= 0 && arr[numberTwo] > key) {
//			arr[numberTwo + 1] = arr[numberTwo];
//			numberTwo = numberTwo - 1;
//		}
//		arr[numberTwo + 1] = key;
//	}
//}



//void printArray(int arr[], int si)
//{
//	int numberss;
//	for (numberss = 0; numberss < si; numberss++)
//		cout << arr[numberss] << " ";
//	cout << endl;
//}
		

	

	

	
int main()
{
	setlocale(LC_ALL, "RU");
	//пузырь
	int arr[] = { 5,2,4,6,7,9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "";
		

	}

	std::cout << "сортировка пузырём\t";


	// выбор
	int ar[] = { 64, 25, 12, 22, 11 };
	int siz = sizeof(ar) / sizeof(ar[0]);
	selectionSort(arr, siz);
	cout << "сортировка выбором: ";
	printAr(arr, siz);


	
	/*int arr[] = { 12, 11, 10, 5, 7 };
	int siz = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, siz);
	printArray(arr, siz);*
	std::cout<<"сортивка вставкой";*/
	
}







		
	

	

