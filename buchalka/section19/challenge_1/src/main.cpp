/*
    Section 19 - Challenge 1
    Formatting output
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
    {
        "Tour Ticket Prices from Miami",
        {
            {
                "Colombia",
                { 
                    { "Bogota", 8778000, 400.98 },
                    { "Cali", 2401000, 424.12 },
                    { "Medellin", 2464000, 350.98 },
                    { "Cartagena", 972000, 345.34 } 
                },
            },
            {
                "Brazil",
                { 
                    { "Rio De Janiero", 13500000, 567.45 },
                    { "Sao Paulo", 11310000, 975.45 },
                    { "Salvador", 18234000, 855.99 }
                },
            },
            {
                "Chile",
                { 
                    { "Valdivia", 260000, 569.12 }, 
                    { "Santiago", 7040000, 520.00 }
                },
            },
            {
                "Argentina",
                { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    // Unformatted display so you can see how to access the vector elements
    std::cout << "\n" << tours.title << "\n" << std::endl;
    
    for(auto country : tours.countries) {           // loop through the countries
        std::cout << country.name << std::endl;
        for(auto city : country.cities) {          // loop through the cities for each country
            std::cout << "\t" << city.name 
                      << "\t" << city.population 
                      << "\t" << city.cost 
                      << std::endl;
        }
    }

    std::cout << std::endl << std::endl;

    // And here's my solution for a better formatted output
    std::cout << "\nReworking code for a better tabular output\n" << std::endl;

    // create a column legend showing every 10th column, up to 70
    std::cout << "---------+---------+---------+---------+---------+---------+---------+\n" << std::endl;

    const int total_width  {70};
    const int field1_width {20};
    const int field2_width {20};
    const int field3_width {15};
    const int field4_width {15};
    bool first_city_of_country {true};  // display country name in report if true

    // Report title (centered)
    int title_length = tours.title.length();
    std::cout << std::setw((total_width - title_length)/2) << "" << tours.title << "\n" << std::endl;

    // Header row and divider line
    std::cout << "Country            City                  Population              Price" << std::endl;
    std::cout << std::setw(total_width) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');

    for (Country country : tours.countries) {
        first_city_of_country = true;
        for (auto city : country.cities) {
            std::cout << std::setw(field1_width) << std::left << (first_city_of_country ? country.name : "")
                      << std::setw(field2_width) << std::left << city.name
                      << std::setw(field3_width) << std::right << city.population
                      << std::setw(field4_width) << std::right << city.cost
                      << std::endl;
            first_city_of_country = false;    
        }
    }

    std::cout << std::endl;
    return 0;
}