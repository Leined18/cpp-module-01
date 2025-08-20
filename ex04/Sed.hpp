#ifndef SED_HPP
# define SED_HPP

# include <fstream>
# include <iostream>
# include <string>

class Sed
{
  public:
	Sed(std::string filename);
	~Sed();

	bool replace(std::string s1, std::string s2);

  private:
	std::string _filename;
};

#endif
