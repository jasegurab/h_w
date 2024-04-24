#include <string>
#include <vector>

#include "csv.h"
#include "data.h"
#include "interestCalculator.h"

int main() {
    std::string in_filename;
    std::string out_filename;
    CSV csv;
    InterestCalculator interestCalculator;
    std::vector<Data> settings = csv.read(in_filename);  // we want: start money, monthly savingrate, interest
    std::vector<std::vector<float>> results;
    int number_of_years = 10;
    for (auto& d : settings) {
        results.push_back(interestCalculator.run(d, number_of_years));
    }
    csv.write(out_filename, results);

    // Data d = {.initalMoney = 0, .interest = 0.035, .monthlySavings = 1500};
    // InterestCalculator i;
    // i.run(d, 10);
}

// Name the 3 classes that need to be written and their public functions that need to be added
// Data: <correct>
// InterestCalculator:
// std::vector<float> run(const data &data, int number_of_years);
// CSV:
// std::vector<Data> read(const std::string &filename);
// void write(const std::string &filename, std::vector<float> &data);
//
//
//
//
// In File:
// 0,1,0.0
// 10000, 500, 3.0
// 0, 500, 3.0
// 2000, 500, 3.0
// 2000, 1000, 3.0
//
// Out File:
// example for: 1000,0, .0
// 1,2,3,4,5,6,7,8 ... number_of_years
//
//
// *.h
// class InterestCalculator{
// private:
// other functions that are not in the public interface
// public:
// std::vector<float> run(const data &data, int number_of_years);
//
// };
//
// *.cc
// #include "interestCalculator.h"
//
// std::vector<float> InterestCalculator::run(const data &data, int number_of_years){
// implementation
// }
//
//
// Interest is accumulated per month and added to the account once per year
