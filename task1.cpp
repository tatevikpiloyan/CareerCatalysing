#include <vector>

void insertion_sort(std::vector<int>& vec)
{
	int size = vec.size();
	for (int j = 0, i = j + 1; i < size; ++i, ++j)
	{
		while (vec[i] < vec[j] && j >= 0)
		{
			std::swap(vec[i], vec[j]);
			--i;
			--j;
		}
	}
}
