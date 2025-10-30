#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <list>
// #include <utility>



int main()
{
    // std::map<std::string, std::string> myDictionary;
    // std::unordered_map<std::string, std::string> myDictionary;
    // myDictionary.insert(std::pair<std::string, std::string>("orange", "die Orange"));
    // myDictionary.insert(std::pair<std::string, std::string>("banana", "die banane"));
    // myDictionary.insert(std::pair<std::string, std::string>("apple", "def Apfel"));

    // myDictionary["apple"] = "Die apple";
    // std::cout << myDictionary.size() << std::endl;

    // myDictionary.clear();
    // std::cout << myDictionary.size() << std::endl;

    // for (auto pair : myDictionary) {
    //     std::cout << pair.first << " - " << pair.second << std::endl;
    // }
    std::map<std::string, std::list<std::string>> pokedex;

    std::list<std::string> pikachuAttacks {"thunder shock", "tail whip", "quick attack"};
    std::list<std::string> charmanderAttacks {"flame thrower", "scary face"};
    std::list<std::string> chikoritaAttacks {"razor leaf", "poison powder"};

    pokedex.insert(std::pair<std::string, std::list<std::string>>("Pikachu", pikachuAttacks));
    pokedex.insert(std::pair<std::string, std::list<std::string>>("Charmander", charmanderAttacks));
    pokedex.insert(std::pair<std::string, std::list<std::string>>("Chikorita", chikoritaAttacks));

    for (auto pair : pokedex) {
        std::cout << pair.first << " - ";

        for (auto attack : pair.second) {
            std::cout << attack << ", ";
        }
        std::cout << std::endl;
    }

    return 0;
}