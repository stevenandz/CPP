#include <iomanip>
#include <string>
#include <string_view>

#include "planets_functions.cpp"

int main(void) {
  Earth* pointer{nullptr};
  std::unordered_set<std::string> valid_words;
  read_planets("planets.txt", valid_words);

  std::string planet{prompt_for_data<std::string>(
                    "Enter a planet to find your weight: ")};

  std::string_view begin{"The surface gravity of "};
  std::string_view weight_s{"Your weight on "};
  std::string_view is{" is: "};
  std::string selected_planet;

  planet[0] = toupper(planet[0]);

  std::cout << std::fixed << std::setprecision(2);

  if (is_valid_planet(planet, valid_words)) {
    double weight{prompt_for_data<double>("Enter weight in pounds: ")};
    if ((planet == "Mercury") || (planet == "Mars")) {
        selected_planet = "Mars and Mercury";
        pointer = new Mercury{weight};
        std::cout << begin << selected_planet << is
                  << pointer->GetSurfaceGravity() << '\n';
        std::cout << weight_s << selected_planet << is
                  << pointer->calculate_weight() << '\n';
        delete pointer;
    } else if (planet == "Venus") {
        selected_planet = "Venus";
        pointer = new Venus{weight};
        std::cout << begin << selected_planet << is
                  << pointer->GetSurfaceGravity() << '\n';
        std::cout << weight_s << selected_planet << is
                  << pointer->calculate_weight() << '\n';
        delete pointer;
    } else if (planet == "Jupiter") {
      selected_planet = "Jupiter";
      pointer = new Jupiter{weight};
      std::cout << begin << selected_planet << is
                << pointer->GetSurfaceGravity() << '\n';
      std::cout << weight_s << selected_planet << is
                << pointer->calculate_weight() << '\n';
       delete pointer;
    } else if (planet == "Saturn") {
      selected_planet = "Saturn";
      pointer = new Saturn{weight};
      std::cout << begin << selected_planet << is
                << pointer->GetSurfaceGravity() << '\n';
      std::cout << weight_s << selected_planet << is
                << pointer->calculate_weight() << '\n';
      delete pointer;
    } else if (planet == "Neptune") {
      selected_planet = "Neptune";
      pointer = new Neptune{weight};
      std::cout << begin << selected_planet << is
                << pointer->GetSurfaceGravity() << '\n';
      std::cout << weight_s << selected_planet << is
                << pointer->calculate_weight() << '\n';
      delete pointer;
    } else if (planet == "Uranus") {
      selected_planet = "Uranus";
      pointer = new Uranus{weight};
      std::cout << begin << selected_planet << is
                << pointer->GetSurfaceGravity() << '\n';
      std::cout << weight_s << selected_planet << is
                << pointer->calculate_weight() << '\n';
    } else if (planet == "Earth") {
      std::cout << "Your weight is the same!\n";
    }
  } else {
    std::cerr << "Could not find planet or input is invalid\n";
    return 1;
  }
}