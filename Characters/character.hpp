#include <vector>

class Character {
private:
    std::string name;
    std::string color;
    int year;
    std::string occupation;
    std::vector<std::string> quotes;

public:
    Character(std::string new_name, std::string new_color, int new_year, std::string new_occupation);
    // Declare view_profile
    std::string view_profile();
    void add_quote(std::string new_quote);

};