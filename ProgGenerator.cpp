#include "ProgGenerator.hpp"

ProgGenerator::ProgGenerator()
{
	std::srand(std::time(nullptr));
	arrSize = std::rand() * std::rand();
	arrSize %= 8;

	if (arrSize < 4)
		arrSize += 4;
		
	std::cout << arrSize << " OwO"<< std::endl;
	this->prog = new Chord[arrSize];
}

ProgGenerator::ProgGenerator(const ProgGenerator &obj)
{
	
}

ProgGenerator ProgGenerator::operator=(const ProgGenerator &obj)
{
	if (this == &obj)
		return (*this);
	
	return (*this);
}

ProgGenerator::~ProgGenerator()
{
	delete[] this->prog;
}
