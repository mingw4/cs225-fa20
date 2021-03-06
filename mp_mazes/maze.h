/* Your code here! */

#pragma once
#include <iostream>
#include <vector>
#include "cs225/PNG.h"
#include "dsets.h"



class SquareMaze {
    public:
        SquareMaze() = default;
        void makeMaze(int width, int height);
        bool canTravel(int x, int y, int dir) const;
        void setWall(int x, int y, int dir, bool exists);
        std::vector<int> solveMaze();
        cs225::PNG* drawMaze() const;
        cs225::PNG* drawMazeWithSolution();

    private:
        int widthOfMaze;
        int heightOfMaze;
        std::vector<bool> downSide;
        std::vector<bool> rightHandSide;
};