#ifndef CHARACTER_H
#define CHARACTER_H

#include <array>
#include <memory>
#include <string>
#include <map>
#include <vector>
#include "race.hxx"

class Character {

private:
	std::unique_ptr<Race> m_race;
	std::string m_name;
	std::map<std::string, int> m_appearance;
	std::array<int, 6> m_attributes;
	std::vector<std::string> m_languages;

public:
	Character();

	void printAttributes();
	void printLanguages();
	void printPhysAttributes();
	std::string getName();
	const Race &getRace() const;
	Race &getRace();

};
#endif
