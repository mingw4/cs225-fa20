#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

MyColorPicker::MyColorPicker(int magicnum) {
  magicnum_ = magicnum;
}
/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */
HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  /* @todo [Part 3] */
  HSLAPixel pixel = HSLAPixel();
  pixel.h = (magicnum_ + x) % 280;
  pixel.a = ((magicnum_ % + 20 * y) % 3) / 3.0;
  pixel.l = ((magicnum_ + 80 * x) % 4) / 4.0;
  pixel.s = (magicnum_ % 8) / 8.0;
  return pixel;
}
