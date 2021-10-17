#pragma once
#include <iostream>

template <typename T>
void iter(T* address, size_t len, void (*fn)(T));
