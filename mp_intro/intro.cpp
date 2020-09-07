#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>


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

  return png;
}
