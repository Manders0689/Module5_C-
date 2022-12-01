#include <iostream>
#include "character.hpp"

Character::Character(std::string new_name, std::string new_color, int new_year, std::string new_occupation)
    : name(new_name), color(new_color), year(new_year), occupation(new_occupation) {

    }

// Add the method's definition. Should return a string that includes the Character's bio.
std::string Character::view_profile() {

    std::string bio = "Name: " + name;
    bio += "\nColor: " + color;
    bio += "\nYear: " + std::to_string(year);
    std::string quote_string = "Quotes:\n";

    // Loop through quotes to access/display each element.
    for (std::string quote : quotes) {
        quote_string += " - " + quote + "\n";
    }
    return bio + "\n" + quote_string;

}

// Define add_quote().
void Character::add_quote(std::string new_quote) {
    // add new_quote to quotes.
    quotes.push_back(new_quote);
}