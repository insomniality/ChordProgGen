#pragma once

#include <iostream>
#include <map>
#include <cstdlib>
#include <ctime>

#include "NoteDefinitions.hpp"
#include "SymbolDefinitions.hpp"

class Chord
{
	public:
		int root;
		std::map<int, int> chordTones;
		std::string chordName(void);
	public:
		Chord();
		Chord(const Chord &obj);
		Chord operator=(const Chord &obj);
		~Chord();

	private:
		// bool polarity;
};
