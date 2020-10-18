
#include "cs225/PNG.h"
#include "FloodFilledImage.h"
#include "Animation.h"

#include "imageTraversal/DFS.h"
#include "imageTraversal/BFS.h"

#include "colorPicker/RainbowColorPicker.h"
#include "colorPicker/GradientColorPicker.h"
#include "colorPicker/GridColorPicker.h"
#include "colorPicker/SolidColorPicker.h"
#include "colorPicker/MyColorPicker.h"

using namespace cs225;

int main() {
  PNG png;
  png.readFromFile("tests/i.png");
  FloodFilledImage myimage(png);
  BFS bfs(png, Point (80, 80), 0.21);
  MyColorPicker mycolor(86);
  myimage.addFloodFill(bfs, mycolor);
  DFS dfs(png, Point(100, 100), 0.8);
  MyColorPicker mycolor2(7);
  myimage.addFloodFill(dfs, mycolor2);
  BFS bfs2(png, Point(9,9), 0.49);
  myimage.addFloodFill(bfs2, mycolor);
  Animation animation = myimage.animate(499);
  // @todo [Part 3]
  // - The code below assumes you have an Animation called `animation`
  // - The code provided below produces the `myFloodFill.png` file you must
  //   submit Part 3 of this assignment -- uncomment it when you're ready.
  
  
  PNG lastFrame = animation.getFrame( animation.frameCount() - 1 );
  lastFrame.writeToFile("myFloodFill.png");
  animation.write("myFloodFill.gif");


  return 0;
}
