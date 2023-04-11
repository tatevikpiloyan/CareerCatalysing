#include <vector>

int binary_search_recursive(const std::vector<int>& vec, int target, int begin, int end)
{
	int mid = begin + (end - begin) / 2;
	if (begin == end && vec[mid] != target)
	{
		return -1;
	}
	if (vec[mid] == target)
	{
		return mid;
	}
	else if (vec[mid] < target)
	{
		return binary_search_recursive(vec, target, mid + 1, end);
	}
	else
	{
		return binary_search_recursive(vec,target, begin, mid - 1);
	}
	return -1;
}

int binary_search_iterative(const std::vector<int>& vec, int target)
{
	int begin = 0;
	int end = vec.size() - 1;
	while (begin <= end)
	{
		int mid = begin + (end - begin) / 2;
		if (vec[mid] == target)
		{
			return mid;
		}
		else if (vec[mid] < target)
		{
			begin = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return -1;
}
