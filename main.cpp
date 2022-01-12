#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <curses.h>
#include "chaptersMechanics.cpp"
#include "chapterOne.cpp"

int main(void){
    
    system("clear");
    
    
    
    // Stworzenie postaci i rozpoczecie rozgrywki
    
    std::cout << "Hello Adventurer! \n";
    
    newHero.createHero();
    
    // male intro
    
    std::cout << "And here begins the story of a little human known as " << newHero.name << "\n \n";
    std::cout << "Will it be a successful tale full of wealth, love and kindness? \n ";
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    std::cout << "...Or will it turn grim along the way? \n\n";
    newHero.addItem("Pie");
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    system("clear");

    // chapter 1
    
    beginChapterOne();
    
    std::cout << "koniec \n";

    
    return 0;
}
