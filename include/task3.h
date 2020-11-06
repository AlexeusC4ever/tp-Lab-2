#include <iostream>
#include <typeinfo>
#include <vector>
#include <cstdlib>

template <typename T, size_t N>

T* map(T* mas, T(*change)()) {
	for (int i = 0; i < N; ++i) {
		mas[i] = change();
	}
	return mas;
}

