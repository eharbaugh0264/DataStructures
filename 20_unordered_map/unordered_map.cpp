#include <iostream>
#include <unordered_map> //  hash table
#include <vector>
#include <string>


class HashExamples {
    public:
        template <typename T>
        static void countFrequency(const std::vector<T>& v) {
            template <typename T>
            std::unordered_map<T, int> freq;
            
            for (const T& i : v) {
                freq[i]++;
            }
            
            //  Iterate through the tables
            for (const auto& f : freq) {
                std::cout << f.first << " : " << f.second << std::endl;
            }
            
            
        }
        
        //  iterate, and if you find it, you have a duplicate
        template <typename T>
        static bool hasDuplicates(const std::vector<T>& v) {

        }

        static char firstNonRepeatingChar(const std::string& s) {
            //  return null character if none
            //  else return the first char that does not repeat
        }

        static void groupStrings(const std::vector<std::string>& strings) {
            /*
                <first_letter> : strings
                //  each character references a vector of strings
            
            */
        }
        //  it would be so funny if he asked one of these three on the exam


    private:


};


int main() {

    std::unordered_map<std::string, int> grades;

    //Insert
    grades["Michael"] = 90;
    grades["Anna"] = 95;
    grades["John"] = 76;
    
    //  Iterate through the tables
    for (const auto& grade : grades) {
        //  print key and value
        std::cout << grade.first << " : " << grade.second << std::endl;
    }
    
    //  search (find method)
    auto it = grades.find("John");
    
    if (it == grades.end()) {
        std::cout << "Not found\n";
    }
    else {
        std::cout << "Found:\n";
        std::cout << it->first << " : " << it->second << std::endl;
        
    }

    std::cout << "Count Frequency...\n";
    std::vector<int> v {1, 2, 3, 4, 1, 2, 2, 2, 5, 5, 12};
    HashExamples::countFrequency(v);
    
    std::cout << "Check duplicates...\n";
    std::vector<std::string> v {"hello", "apple", "banana", "hey", "ban", "apple"};
    std::cout << HashExamples::hasDuplicates(v) << std::endl;

    return 0;
}