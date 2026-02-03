#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &A, T &B) {
	T temp;
	temp = A;
	A = B;
	B = temp;
}

template <typename T>
T	min(T &A, T &B) {
	if (A > B)
		return (B);
	if (B > A)
		return (A);
	return (B);
}

template <typename T>
T	max(T &A, T &B) {
	if (A > B)
		return (A);
	if (B > A)
		return (B);
	return (B);
}
#endif /* WHATEVER_HPP */
