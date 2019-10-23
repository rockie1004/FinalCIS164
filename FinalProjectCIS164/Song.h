#pragma once
#include <string>

class Song
{
	std::string name="";
	std::string artist="";
public:
	Song();
	Song(std::string, std::string);
	std::string display();
};

