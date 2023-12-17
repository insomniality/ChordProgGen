#include "ProgGenerator.hpp"
#include "Chord.hpp"

int main()
{
	try
	{	
		// Chord I;

		// I.chordTones[3] = FLAT;
		// I.chordTones[7] = FLAT;

		// std::cout << I.chordName() << std::endl;

		ProgGenerator a;

		// std::cout << I.chordName() << std::endl;

		for (size_t i = 0; i < a.arrSize; i++)
			std::cout << a.prog[i].chordName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}