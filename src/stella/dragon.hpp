#include <iostream>

class Animal {
   public:
   int weight;
   std::string color;

   virtual void set_weight(int new_weight) = 0;
   virtual void set_color(std::string new_color) = 0;
   virtual  int get_weight() = 0;
   virtual  std::string get_color() = 0;
   

};

class Mythical_creature {
    public:
    std::string superpower;
    int length;
    
    virtual void set_length(int new_length) = 0;
    virtual void set_superpower(std::string new_superpower) = 0; 
    virtual int get_length() = 0;
    virtual std::string get_superpower() = 0;
};

class Dragon : public Animal, Mythical_creature{
    public:
    void set_weight(int new_weight) override;
    void set_color(std::string new_color) override;
    void set_length(int new_length) override;
    void set_superpower(std::string new_superpower) override;
    int get_weight() override;
    int get_length() override;
    std::string get_color() override;
    std::string get_superpower() override;
    Dragon(int new_weight, int new_length, std::string new_color, std::string new_superpower);

};