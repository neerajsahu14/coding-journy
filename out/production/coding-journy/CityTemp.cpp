#include <bits/stdc++.h>
#include <vector>
#include <string>
#include<algorithm>

struct CityTemp {
    std::string city;
    double temperature;
};

int main() {
    std::vector<CityTemp> cityTemps;

    cityTemps.push_back({"New York", 22.5});
    cityTemps.push_back({"Los Angeles", 25.3});
    cityTemps.push_back({"Chicago", 18.7});
n
    for (const auto& entry : cityTemps) {
        std::cout << "City: " << entry.city << ", Temperature: " << entry.temperature << "°C\n";
    }

    return 0;
}