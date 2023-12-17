#include "Chord.hpp"


std::string Chord::chordName(void)
{
	std::string name;

	if (this->root == A) name = "A";
	else if (this->root == A$) name = "A#";
	else if (this->root == B) name = "B";
	else if (this->root == C) name = "C";
	else if (this->root == C$) name = "C#";
	else if (this->root == D) name = "D";
	else if (this->root == D$) name = "D#";
	else if (this->root == E) name = "E";
	else if (this->root == F) name = "F";
	else if (this->root == F$) name = "F#";
	else if (this->root == G) name = "G";
	else if (this->root == G$) name = "G#";

	std::cout << this->root << " " + name << std::endl;
	// if (this->chordTones[3] && this->chordTones[5])
	// {
		if (this->chordTones[3] == NEUTERAL)
		{
			if (this->chordTones[5] == NEUTERAL)
				name += "maj";
			else if (this->chordTones[5] == SHARP)
				name += "+"; // or "aug"
			// else if (this->chordTones[5] == FLAT)
			// 	name += "";
		}
		else if (this->chordTones[3] == FLAT)
		{
			if (this->chordTones[5] == NEUTERAL)
				name += "min";
			else if (this->chordTones[5] == FLAT)
				name += "o"; // or "dim"
		}
	// }
	// else
	// 	return (name);
	// if (this->chordTones[7])
	// {
		if (this->chordTones[7] == NEUTERAL)
		{
			if (name.find("maj") != std::string::npos)
				name += "7";
			else if (name.find("min") != std::string::npos || name.find("+") != std::string::npos)
				name += "(maj7)";
			// else if // Khachaturian chord
		}
		else if (this->chordTones[7] == FLAT)
		{
			if (name.find("maj") != std::string::npos)
			{
				name.erase(name.find("maj"), std::string::npos);
				name += "7";
			}
			else if (name.find("min") != std::string::npos || name.find("+") != std::string::npos)
				name += "7";
			else if (name.find("o") != std::string::npos)
			{
				name.erase(name.find("o"), std::string::npos);
				name += "min7b5";
			}
		}
		else if (this->chordTones[7] == DFLAT && name.find("o") != std::string::npos)
			name += "7";
	// }
	// else
	// 	return (name);
	return (name);
	// this->chordTones[1].first()
}

///

Chord::Chord() : root(C)
{
	for (size_t i = 0; i < 4; i++)
		this->chordTones.insert(std::pair<int, int>(1 + (i * 2), NEUTERAL));
	std::cout << "UwU\n";
}

Chord::Chord(const Chord &obj)
{
	
}

Chord Chord::operator=(const Chord &obj)
{
	if (this == &obj)
		return (*this);
	return (*this);
}

Chord::~Chord()
{

}
