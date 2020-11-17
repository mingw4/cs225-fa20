/* Your code here! */
#include <iostream>
#include <vector>
#include "cs225/PNG.h"
#include "dsets.h"
#include "maze.h"

int indexOfSquare(int x, int y, int width) {
    return x + y * width;
}

int rightHandNeighbor(int x, int y, int width) {
    return x + 1 + y * width;
}

int leftHandNeighbor(int x, int y, int width) {
    return x - 1 + y * width;
}

int downSideNeighbor(int x, int y, int width) {
    return x + (y + 1) * width;
}

int upSideNeighbor(int x, int y, int width) {
    return x + (y - 1) * width;
}

void setColor(cs225::PNG *maze, int x, int y, double l, double h, double s) {
    cs225::HSLAPixel *pixel = &(maze->getPixel(x, y));
    pixel->h = h;
    pixel->s = s;
    pixel->l = l;
}

static int rightDir = 0;
static int downDir = 1;
static int leftDir = 2;
static int upDir = 3;

/* height and width of single square*/
static int squareHeight = 10;
static int squareWidth = 10;

/* target color, Red*/
static double targetColorL = 0.5;
static double targetColorH = 0;
static double targetColorS = 1;

void SquareMaze::makeMaze(int width, int height) {
    widthOfMaze = width;
    heightOfMaze = height;
    for (int i = 0; i < width * height; i++) {
        downSide.push_back(true);
        rightHandSide.push_back(true);
    }

    DisjointSets noCycles;
    noCycles.addelements(widthOfMaze * heightOfMaze);
    // a spanning tree
    int edges = 0;
    int vertices = widthOfMaze * heightOfMaze - 1;
    while (edges < vertices) {
        int x = rand() % widthOfMaze;
        int y = rand() % heightOfMaze;
        int idx = indexOfSquare(x, y, widthOfMaze);
        int coin = rand() % 2;
        // randomly determine which side to beak
        if (coin) {
            if (x < widthOfMaze - 1 && rightHandSide[idx]) {
                int idxOfRightNeighbor = rightHandNeighbor(x, y, widthOfMaze);
                int root = noCycles.find(idx);
                int rootOfNeighbor = noCycles.find(idxOfRightNeighbor);
                if (root != rootOfNeighbor) {
                    rightHandSide[idx] = false;
                    noCycles.setunion(root, rootOfNeighbor);
                    edges++;
                }
            }
        } else if (!coin) {
            if (y < heightOfMaze - 1 && downSide[idx]) {
                int idxOfDownSideNeighbor = downSideNeighbor(x, y, widthOfMaze);
                int root = noCycles.find(idx);
                int rootOfNeighbor = noCycles.find(idxOfDownSideNeighbor);
                if (root != rootOfNeighbor) {
                    downSide[idx] = false;
                    noCycles.setunion(root, rootOfNeighbor);
                    edges++;
                }
            }
        }
    }
}




bool SquareMaze::canTravel(int x, int y, int dir) const {
    int idx = indexOfSquare(x, y, widthOfMaze);
    bool result = false;
    if (dir == rightDir) {
        result = !rightHandSide[idx];
    } else if (dir == downDir) {
        result = !downSide[idx];
    } else if (dir == leftDir) {
        if (x != 0) {
            int idxOfLeftNeighbor = leftHandNeighbor(x, y, widthOfMaze);
            result = !rightHandSide[idxOfLeftNeighbor];
        }
    } else {
        if (y != 0) {
            int idxOfUpNeighbor = upSideNeighbor(x, y, widthOfMaze);
            result = !downSide[idxOfUpNeighbor];
        }
    }
    return result;
}








void SquareMaze::setWall(int x, int y, int dir, bool exists) {
    int idx = indexOfSquare(x, y, widthOfMaze);
    if (dir == downDir) {
        downSide[idx] = exists;
    } else if (dir == rightDir) {
        rightHandSide[idx] = exists;
    }
}


std::vector<int> SquareMaze::solveMaze() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    return vec;
}



cs225::PNG* SquareMaze::drawMaze() const {
    int picHeight = heightOfMaze * squareHeight + 1;
    int widthHeight = widthOfMaze * squareWidth + 1;
    cs225::PNG *ptr = new cs225::PNG(widthHeight, picHeight);
    // side color should be black in the first square
    for (int i = 0; i < picHeight; i++) {
        ptr->getPixel(0, i).l = 0.0;
    }
    for (int i = 10; i < widthHeight; i++) {
        ptr->getPixel(i, 0).l = 0.0;
    }

    for (int x = 0; x < widthOfMaze; x++) {
        for (int y = 0; y < heightOfMaze; y++) {
            int idx = indexOfSquare(x, y, widthOfMaze);
            if (rightHandSide[idx]) {
                for (int i = 0; i < 11; i++) {
                    int xOfPixel = squareWidth * x + squareWidth;
                    int yOfPixel = squareHeight * y + i;
                    (ptr->getPixel(xOfPixel, yOfPixel)).l = 0.0;
                }
            }
            if (downSide[idx]) {
                for (int i = 0; i < 11; i++) {
                    int xOfPixel = squareWidth * x + i;
                    int yOfPixel = squareHeight * y + squareHeight;
                    (ptr->getPixel(xOfPixel, yOfPixel)).l = 0.0;
                }
            }
        }
    }
    return ptr;
}





cs225::PNG* SquareMaze::drawMazeWithSolution() {
    cs225::PNG *maze = drawMaze();
    std::vector<int> moveDir = solveMaze();
    int x = squareWidth >> 1;
    int y = squareHeight >> 1;
    for (int dir : moveDir) {
        if (dir == rightDir) {
            for (int i = 0; i < squareWidth; i++) {
                setColor(maze, x++, y, targetColorL, targetColorH, targetColorS);
            }
        } else if (dir == downDir) {
            for (int i = 0; i < squareHeight; i++) {
                setColor(maze, x, y++, targetColorL, targetColorH, targetColorS);
            }
        } else if (dir == leftDir) {
            for (int i = 0; i < squareWidth; i++) {
                setColor(maze, x--, y, targetColorL, targetColorH, targetColorS);
            }
        } else {
            for (int i = 0; i < squareHeight; i++) {
                setColor(maze, x, y--, targetColorL, targetColorH, targetColorS);
            }
        }
    }

    setColor(maze, x, y, targetColorL, targetColorH, targetColorS);
    (&maze->getPixel(x, y))->a = 1.0;
    x -= 4;
    y += 5;
    for (int idx = 0; idx < 9; idx++) {
        setColor(maze, x, y, 1.0, maze->getPixel(x, y).h, maze->getPixel(x, y).s);
        maze->getPixel(x, y).a = 1.0;
        x++;
    }
    return maze;
}