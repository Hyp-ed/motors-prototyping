#include <iostream> 
#include "dragon.hpp"

void Dragon::set_weight(int new_weight){
    weight = new_weight;
}

void Dragon::set_length(int new_length){
    length = new_length;
}

void Dragon::set_color(std::string new_color){
    color = new_color;
}

void Dragon::set_superpower(std::string new_superpower){
    superpower = new_superpower;
}

int Dragon::get_weight() {
    return weight;
}

int Dragon::get_length() {
    return length;
}

std::string Dragon::get_color() {
    return color;
}

std::string Dragon::get_superpower() {
    return superpower;
}

Dragon::Dragon(int new_weight, int new_length, std::string new_color, std::string new_superpower){
    weight = new_weight;
    length = new_length;
    color = new_color;
    superpower = new_superpower;
}

int main(){
    Dragon dragon_of_doom(666, 6, "red", "fireballs");

    std::cout << "My fave dragon's weight is " << dragon_of_doom.get_weight() << " kg.\n";
    std::cout << "He is a " << dragon_of_doom.get_length() << "-meter-long monster.\n";
    std::cout << "He is a big and scary " << dragon_of_doom.get_color() << " beast and all you measly mortals should be deathly afraid of his " << dragon_of_doom.get_superpower() << ".\n";

}