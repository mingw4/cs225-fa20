#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

bool ImageTraversal::Iterator::isLegal(Point point) {
  if (point.x >= png_.width() || point.y >= png_.height()) {
    return false;
  } else if (trail_[point.x][point.y] == true) {
    return false;
  } else if (calculateDelta(png_.getPixel(point.x, point.y), png_.getPixel(start_.x, start_.y)) >= tolerance_) {
    return false;
  } else {
    return true;
  }
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */
  png_ = PNG();
  start_ = Point();
  tolerance_ = 0.0;
  trav_ = NULL;
}

ImageTraversal::Iterator::Iterator(PNG png, Point start, double tolerance, ImageTraversal* trav) {
  png_ = png;
  start_ = start;
  curr_ = start_;
  tolerance_ = tolerance;
  trav_ = trav;
  trail_.resize(png.width(), std::vector<bool>(png.height()));
  for (unsigned i = 0; i < png.width(); i++) {
    for (unsigned j = 0; j < png.height(); j++) {
      trail_[i][j] = false;
    }
  }
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
  trail_[curr_.x][curr_.y] = true;
  Point right = Point(curr_.x + 1, curr_.y);
  Point below = Point(curr_.x, curr_.y = 1);
  Point left = Point(curr_.x - 1, curr_.y);
  Point above = Point(curr_.x, curr_.y - 1);
  if (isLegal(right)) {
    trav_->add(right);
  }
  if (isLegal(below)) {
    trav_->add(below);
  }
  if (isLegal(left)) {
    trav_->add(left);
  }
  if (isLegal(above)) {
    trav_->add(above);
  }
  while(!trav_->empty() && !isLegal(trav_->peek())) {
    trav_->pop();
  }
  if (trav_->empty()) {
    return *this;
  } else if (isLegal(trav_->peek())) {
    curr_ = trav_->peek();
    return *this;
  }
  return *this;
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return trav_->peek();
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  if (trav_ == NULL && other.trav_ == NULL) {
    return false;
  } else if (trav_ != NULL && other.trav_ == NULL) {
    return true;
  } else if (trav_ == NULL && other.trav_ != NULL) {
    return true;
  } else if (trav_->empty() && other.trav_->empty()) {
    return false;
  } else if (trav_->empty() && !other.trav_->empty()) {
    return true;
  } else if (!(trav_->empty()) && other.trav_->empty()) {
    return true;
  } else if (trav_ == other.trav_) {
    return false;
  } else {
    return true;
  }
}

