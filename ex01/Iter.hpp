#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
template <typename I>
void	iter(I *arr, size_t len, void (fun)(I &ele)) {
	for (size_t idx = 0; idx < len; idx += 1) {
		fun(arr[idx]);
	}
}


template <typename I>
void	iter(I *arr, size_t len, void (fun)(const I &ele)) {
	for (size_t idx = 0; idx < len; idx += 1) {
		fun(arr[idx]);
	}
}

#endif /* ITER_HPP */
