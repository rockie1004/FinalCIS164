#include "Song.h"

Song::Song() {};
Song::Song(std::string newName, std::string newArtist) { name = newName; artist = newArtist; };
std::string Song::display() { return name + " (" + artist + ")"; }