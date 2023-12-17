#pragma once

#include <cstdlib>
#include <iostream>
#include <ctime>

#include "Chord.hpp"


class ProgGenerator
{
	public:
		Chord* prog;
		int arrSize;
		// Chord* operator[](int index)
		// {
		// 	if (index < 0 || index >= arrSize)
		// 		throw std::out_of_range("Index out of bounds");
		// 	return (prog + sizeof(Chord) * index);
		// }
	public:
		ProgGenerator();
		ProgGenerator(const ProgGenerator &obj);
		ProgGenerator operator=(const ProgGenerator &obj);
		~ProgGenerator();
	private:
};

