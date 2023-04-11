#include <vector>

int partition(std::vector<int>& vec, int low, int high)
{
	int key = vec[high];
	int i = low - 1;
	for (int j = low; j < high; ++j)
	{
		if (vec[j] < key)
		{
			++i;
			std::swap(vec[i], vec[j]);
		}
	}
	std::swap(vec[i + 1], vec[high]);
	return i + 1;
}

void quickSort(std::vector<int>& vec, int low, int high)
{
	if (low < high)
	{
		int pivot = partition(vec, low, high);
		quickSort(vec, pivot + 1, high);
		quickSort(vec, low, pivot - 1);
	}
}
