#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>
#include <cmath>


void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2.
  cs225::PNG* original = new cs225::PNG();
  original->readFromFile(inputFile);
  unsigned width = original->width();
  unsigned height = original->height();

  cs225::PNG* output = new cs225::PNG(width, height);
  
  for (unsigned y = 0; y < height; y++) {
    for (unsigned x = 0; x < width; x++) {
      cs225::HSLAPixel thePixel = (*original).getPixel(x, y);
      (*output).getPixel(width - x, height - y) = thePixel;
    }
  }
  output->writeToFile(outputFile);
  delete output;
  delete original;
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3
  for (unsigned y = 0; y < height; y++) {
    for (unsigned x = 0; x < width; x++) {
      png.getPixel(x,y).h = 160 * sin(x / 255) + 180;
      png.getPixel(x,y).s = 0.2 * (cos(x + 3) + sin(y)) + 0.5;
      png.getPixel(x,y).l = 0.15 * (cos(x - y) - sin(y - 20)) + 0.5;
      png.getPixel(x,y).a = 0.1 * (cos(x) + sin(y + x)) + 0.5;
    }
  }
  return png;
}
