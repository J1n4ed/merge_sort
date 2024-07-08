export module sorter;

#include <cmath>
#include <iostream>

namespace sorter
{
	void merge(int * _arr, int _start, int _mid, int _end);
	
	export void sort(int * _arr, int _start, int _end)
	{

		// DEBUG
		std::cout << '\n';
		// std::cout << "_start = " << _start << ", _end = " << _end << '\n';

		for (int i = 0; i < _end; ++i)
		{
			std::cout << _arr[i] << '\t';
		}

		if (_start < _end)
		{
			// int mid = std::round((_start + _end) / 2);
			int mid = (_start + _end) / 2;
			sort(_arr, _start, mid);
			sort(_arr, mid + 1, _end);
			merge(_arr, _start, mid, _end);
		}
		
	} // !sort

	export void merge(int * _arr, int _start, int _mid, int _end)
	{
		// DEBUG
		// std::cout << "\n_start = " << _start << ", _mid = " << _mid << ", _end = " << _end << '\n';

		/*if (_start == _end)
			return;*/

		int pos_1 = _start;
		int pos_2 = _mid + 1;
		int tmp_pos = 0;

		int * tmp = new int[_end - _start + 1];

		while (pos_1 <= _mid && pos_2 <= _end) 
		{
			if (_arr[pos_1] < _arr[pos_2])
			{
				tmp[tmp_pos++] = _arr[pos_1++];
			}
			else
			{
				tmp[tmp_pos++] = _arr[pos_2++];
			}
		}

		while (pos_2 <= _end)
		{
			tmp[tmp_pos++] = _arr[pos_2++];
		}
		while (pos_1 <= _mid)
		{
			tmp[tmp_pos++] = _arr[pos_1++];
		}
		
		for (tmp_pos = 0; tmp_pos < _end - _start + 1; tmp_pos++)
		{
			_arr[_start + tmp_pos] = tmp[tmp_pos];
		}

		delete[_end - _start + 1] tmp;
	} // !merge

} // !sorter