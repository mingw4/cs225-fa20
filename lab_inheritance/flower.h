/**
 * @file flower.h
 * Declaration of the Flower class.
 */

#pragma once

#include "shape.h"
#include "circle.h"
#include "drawable.h"
#include "rectangle.h"
#include "vector2.h"
#include "triangle.h"

/**
 * A subclass of Drawable that can draw a flower
 */
class Flower : public Drawable
{
  private:
    Vector2 stem_center;
    Vector2 leaf_center;
    Rectangle* stem;
    Circle* pistil; // center piece of flower
    Triangle* leaf;

    void drawPetals(cs225::PNG* canvas, const Vector2& center, int x, int y) const;

  public:
    Flower(const Vector2& center);
    void draw(cs225::PNG* canvas) const;
    ~Flower();
};
