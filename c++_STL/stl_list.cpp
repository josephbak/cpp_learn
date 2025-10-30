#include <iostream>
#include <list>

void displayRatings(const std::list<int>& playerRatings) {
    for(std::list<int>::const_iterator it = playerRatings.begin(); it != playerRatings.end(); it++){
        std::cout << "Player rating: " << *it << std::endl;
    }
}

void insertPlayerIntoOrderedList(int newPlayerRating, std::list<int>& playersByRating){
    for (std::list<int>::iterator it = playersByRating.begin(); it != playersByRating.end(); it++){
        if (*it > newPlayerRating) {
            playersByRating.insert(it, newPlayerRating);
            return;
        }
    }
    playersByRating.push_back(newPlayerRating);
}

int main() {

    // std::list<int> myList;
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_front(30);
    // myList.erase(myList.begin());
    // for(std::list<int>::iterator it=myList.begin(); it!=myList.end(); it++){
    //     std::cout << *it <<std::endl;
    // }

    std::list<int> allPlayers = {2, 9, 7, 6, 6, 7, 4, 1, 9, 8};

    std::list<int> beginners; //rating 1 - 5
    std::list<int> pros;    //rating 6 - 10

    for(std::list<int>::iterator it=allPlayers.begin(); it!=allPlayers.end(); it++){
        int rating = *it;
        if(rating >= 1 && rating <= 5){
            insertPlayerIntoOrderedList(rating, beginners);
            // beginners.push_back(rating);
        } else if (rating >= 6 && rating <= 10){
            // pros.push_back(rating);
            insertPlayerIntoOrderedList(rating, pros);
        }
    }

    std::cout << "Beginners: " << std::endl;
    displayRatings(beginners);

    std::cout << "Pros: " << std::endl;
    displayRatings(pros);


    
    
    return 0;
}