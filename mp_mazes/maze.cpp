/* Your code here! */
#include <iostream>
#include <vector>
#include "cs225/PNG.h"
#include "dsets.h"
#include "maze.h"

SquareMaze::SquareMaze() {

}

void SquareMaze::makeMaze(int width, int height) {
    
}

bool SquareMaze::canTravel(int x, int y, int dir) const {
    return true;
}

void SquareMaze::setWall(int x, int y, int dir, bool exists) {

}

std::vector<int> solveMaze() {
    std::vector<int> vec;
    return vec;
}

cs225::PNG* SquareMaze::drawMaze() const {
    cs225::PNG* ptr = new cs225::PNG();
    return ptr;
}
cs225::PNG* SquareMaze::drawMazeWithSolution() {
    cs225::PNG* ptr = new cs225::PNG();
    return ptr;
}