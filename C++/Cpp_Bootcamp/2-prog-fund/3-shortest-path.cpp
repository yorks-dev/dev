#include <iostream>

/**
 * @brief Shortest path between origin and final location
 * INPUT : NSSNWESNE. 
 * now find shortest move to reach same location. 
 */         

int main(){

    int x = 0, y = 0;
    int ch;
    std::cout << "Please enter the path : ";
    ch = std::cin.get();

    while(ch != '\n'){
        if(ch == 'N')
            y++;
        else if(ch == 'S')
            y--;
        else if(ch == 'E')
            x++;
        else if(ch == 'W')
            x--;
        ch = std::cin.get();
    }

    std::cout << x << " , " << y << std::endl;



}