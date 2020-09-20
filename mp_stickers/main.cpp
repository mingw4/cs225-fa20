#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
    Image alma;     alma.readFromFile("tests/alma.png");
    Image i;        i.readFromFile("tests/i.png");
    Image f;        f.readFromFile("tests/soln_flower.png");
    Image c;        c.readFromFile("tests/soln_test_constuctor.png");
    StickerSheet sheet(alma, 5);
    sheet.addSticker(i, 40, 20);
    sheet.addSticker(f, 200, 80);
    sheet.addSticker(c, 400, 200);
    sheet.addSticker(f, 600, 400);
    (sheet.render()).writeToFile("MyImage.png");
    return 0;
}
