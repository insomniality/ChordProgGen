#include "ProgGenerator.hpp"
#include "Chord.hpp"

int main()
{
	Chord I;

	I.chordTones[3] = FLAT;
	I.chordTones[7] = FLAT;

	std::cout << I.chordName() << std::endl;
}