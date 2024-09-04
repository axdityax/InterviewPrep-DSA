#include <iostream>
#include <vector>

using namespace std;

// Function to find the index of the smallest element in an array
int findSmallest(vector<int> &arr)
{
	int smallest = arr[0];	// Initialize the smallest element
	int smallest_index = 0; // Initialize the index of the smallest element

	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
			smallest_index = i;
		}
	}

	return smallest_index;
}

// Selection sort algorithm
vector<int> selectionSort(vector<int> &arr)
{
	vector<int> newArr; // Create a new empty array to store the sorted elements

	for (int i = 0; i < arr.size(); i++)
	{
		int smallest = findSmallest(arr);  // Find the index of the smallest element
		newArr.push_back(arr[smallest]);   // Add the smallest element to the new array
		arr.erase(arr.begin() + smallest); // Remove the smallest element from the original array
	}

	return newArr;
}

int main()
{
	vector<int> arr = {5, 3, 6, 2, 10};

	vector<int> sortedArr = selectionSort(arr);

	cout << "Sorted array: ";
	for (int num : sortedArr)
	{
		cout << num << " ";
	}
	cout << endl;

	return 0;
}