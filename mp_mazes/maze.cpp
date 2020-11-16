/* Your code here! */
#include <iostream>
#include <vector>
#include "cs225/PNG.h"
#include "dsets.h"
#include "maze.h"

SquareMaze::SquareMaze() {
    width_ = 0;
    height_ = 0;
    maze_ = new std::vector<std::pair<bool, bool>>;
    path_ = new DisjointSets();
}


SquareMaze::~SquareMaze() {
    delete maze_;
    delete path_;
    maze_ = NULL;
    path_ = NULL;
}


void SquareMaze::makeMaze(int width, int height) {
    delete maze_;
    delete path_;
    width_ = width;
    height_ = height;
    maze_ = new std::vector<std::pair<bool, bool>>;
    path_ = new DisjointSets();
    for (int j = 0; j < width_ * height_; ++j) {
        maze_->push_back(std::make_pair(true, true));
    }
    path_->addelements(width_ * height_);
    bool flag = false;
    srand (time(NULL));
    unsigned count = 0;
    while (height_ * width_ != count + 1) {
        flag = true;
        unsigned contiguous = rand() % 2;
        unsigned wall = rand() % (height_ * width_);
        if (height_ != (wall % width_) + 1 && contiguous == 1) {
            if (path_->find(width_ + wall) !=  path_->find(wall)) {
                path_->setunion(width_ + wall, wall);
                setWall(wall % width_, wall / width_, 0, false);
                ++count;
            }
        } else if ((wall% width_) + 1 != width_ && contiguous == 0) {
            if (path_->find(1 + wall) != path_->find(wall)) {
                path_->setunion(1 + wall, wall);
                setWall(wall % width_, wall / width_, 1, false);
                ++count;
            }
        }
    }
    
}




bool SquareMaze::canTravel(int x, int y, int dir) const {
    if (3 == dir) {
        if (1 > y) {
            return false;
        } else if ((*maze_)[(y - 1) * width_ + x].first) {
            return false;
        } else {
            return true;
        }
    } else if (2 == dir) {
        if (1 > x) {
            return false;
        } else if ((*maze_)[y * width_ + x - 1].second) {
            return false;
        } else {
            return true;
        }
    } else if (1 == dir) {
        if (height_ - 2 < y) {
            return false;
        } else if ((*maze_)[y * width_ + x].first) {
            return false;
        } else {
            return true;
        }
    } else if (0 == dir) {
        if (width_ - 2 < x) {
            return false;
        } else if ((*maze_)[y * width_ + x].second) {
            return false;
        } return true;
    } else {
        return false;
    }
}








void SquareMaze::setWall(int x, int y, int dir, bool exists) {
    if (0 != dir && 1 != dir) {
        return;
    }
    if (1 == dir) {
        (*maze_)[x + width_ * y].first = exists;
    } else {
        (*maze_)[x + width_ * y].second = exists;
    }
}


std::vector<int> SquareMaze::solveMaze() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    return vec;
}



cs225::PNG* SquareMaze::drawMaze() const {
    cs225::PNG* ptr = new cs225::PNG(1 + width_ * 10, 1 + height_ * 10);
    for (int h = 0; h < height_; ++h) {
        for (int w = 0; w < width_; ++w) {
            if (w == 0) {
                for (unsigned idx = 0; 9 >= idx; ++idx) {
                    (ptr->getPixel(0, 10 * h + idx)).l = 0.0;
                }
            }
            if (h == 0) {
                for (unsigned idx = 0; 9 >= idx; ++idx) {
                    (ptr->getPixel(idx + w * 10, 0)).l = 0.0;
                }
            }
            if (!canTravel(w, h, 1)) {
                for (unsigned idx = 0; 1 > idx; ++idx) {
                    (ptr->getPixel(idx + w * 10, 10 * h + 10)).l = 0.0;
                }
            }
            if (!canTravel(w, h, 0)) {
                for (unsigned idx = 0; 11 > idx; ++idx) {
                    (ptr->getPixel(10 + w * 10, idx + 10 * h)).l = 0.0;
                }
            }
        }
    }
    return ptr;
}





cs225::PNG* SquareMaze::drawMazeWithSolution() {
    cs225::PNG* ptr = new cs225::PNG();
    return ptr;
}