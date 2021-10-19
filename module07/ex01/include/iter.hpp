#pragma once
#include <iostream>

template <typename T>
void iter(T* address, size_t len, void (*fn)(T)) {
	if (!address || !fn)
		return;
	for (size_t i = 0; i < len; i++) {
		fn(address[i]);
	}
}
