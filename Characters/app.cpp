#include <iostream>
#include "character.hpp"

int main() {

    Character lightening_mcqueen("Lightening McQueen", "red", 2006, "Race Car");
    lightening_mcqueen.add_quote("Speed. I am speed.");
    lightening_mcqueen.add_quote("Floating like a Cadillac. Stinging like a Beemer.");
    // Print result of Lightening's bio.
    std::cout << lightening_mcqueen.view_profile();
    std::cout << "\n\n";

    Character sally_carrera("Sally Carrera", "blue", 2002, "Owner of Cozy Cone Motel");
    sally_carrera.add_quote("Do you want to stay at the Cozy Cone or what?");
    sally_carrera.add_quote("Back then, cars came across the country a whole different way.");
    // Print result of Sally's bio.
    std::cout << sally_carrera.view_profile();
    std::cout << "\n\n";

    Character doc_hudson("Doc Hudson", "dark blue", 1951, "Judge/Doctor");
    doc_hudson.add_quote("I know his type. Race car. He's the last thing this town needs");
    doc_hudson.add_quote("The deal was you fix the road, not make it worse. Now scrape it off, and start over again.");
    // Print result of Doc's bio.
    std::cout << doc_hudson.view_profile();
    std::cout << "\n\n";

}