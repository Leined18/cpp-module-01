#include "Sed.hpp"

Sed::Sed(std::string filename) : _filename(filename)
{
}

Sed::~Sed()
{
}

bool Sed::replace(std::string s1, std::string s2)
{
	size_t	pos;

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (false);
	}
	std::ifstream inFile(_filename.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error: cannot open input file " << _filename << std::endl;
		return (false);
	}
	std::ofstream outFile((_filename + ".replace").c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: cannot open output file" << std::endl;
		inFile.close();
		return (false);
	}
	std::string line;
	while (std::getline(inFile, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();
	return (true);
}
