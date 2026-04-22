#include <iostream>
#include <unordered_map> //  hash table
#include <vector>
#include <string>


class HashExamples {
    public:
        template <typename T>
        static void countFrequency(const std::vector<T>& v) {
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

            std::unordered_map<T, int> dupe;
            
            for (const T& i : v) {
                dupe[i]++;
                if (dupe[i] >= 2) {
                    return true;
                }
            }

            return false;
        }

        static char firstNonRepeatingChar(const std::string& s) {
            //  return null character if none
            //  else return the first char that does not repeat

            std::unordered_map<char, int> repe;

            //  mark count of all chars
            for (const char& i : s) {
                repe[i]++;
            }

            //  go through and find first with only 1 occurance
            for (const char& i : s) {
                if (repe[i] == 1) {
                    return i;
                }
            }

            return '\0';
        }

        static void groupStrings(const std::vector<std::string>& strings) {
            /*
                <first_letter> : strings
                //  each character references a vector of strings
            */

           std::unordered_map<char, std::vector<std::string>> stri;

            //  for every string, add it into the vector at the first characters pos
            for (const std::string& i : strings) {
                stri[i[0]].push_back(i);
            }

            //  for each character pos A-Z find and output every string in the vector
            for (char j = 'A'; j <= 'Z'; j++) {
                if (stri[j].size() > 0) {
                    std::cout << j << ": \n";
                    for (int k = 0; k < stri[j].size(); k++) {
                        std::cout << stri[j].at(k) << ", ";
                    }
                    std::cout << "\n========" << std::endl;
                }
            }
        }

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

    std::cout << "\nCount Frequency...\n";
    std::vector<int> v {1, 2, 3, 4, 1, 2, 2, 2, 5, 5, 12};
    HashExamples::countFrequency(v);
    
    std::cout << "\nCheck duplicates...\n";
    std::vector<std::string> v2 {"hello", "apple", "banana", "hey", "ban", "apple"};
    std::cout << HashExamples::hasDuplicates(v2) << std::endl;

    std::cout << "\nFirst non-repeated character = [";
    std::string v3 = "superstitious";
    std::cout << HashExamples::firstNonRepeatingChar(v3) << "]" << std::endl;
    
    std::cout << "\nGroup Strings: \n";
    std::vector<std::string> v4 {"Apperatus", "Appollo", "Distinguished", "Diabolical", "Questionable", "Quest", "Query", "Queue", "Quadrent", "Zoo", "Cow", "Money"};
    HashExamples::groupStrings(v4);

    

    return 0;
}