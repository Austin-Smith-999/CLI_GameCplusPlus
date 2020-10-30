#include <iostream>

int main()
{

    std::cout << "You're a secret agent breaking into secure server room";
    std::cout << std::endl;
    std::cout << "Enter correct codes to continue";

    const int CodeA = 4;   
    const int CodeB = 9;    
    const int CodeC = 1;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "There are 3 number in the code: " << std::endl;
    std::cout << "The codes add up to: " << CodeSum << std::endl;
    std::cout << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cout << "Enter number" << std::endl;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You Entered: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    if (GuessSum == CodeSum)
    {
        std::cout << "You win!";
    }
    

    return 0;
}
