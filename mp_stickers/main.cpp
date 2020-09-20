#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
    Image alma;     alma.readFromFile("tests/alma.png");
    Image i;        i.readFromFile("tests/i.png");
    StickerSheet sheet(alma, 5);
    sheet.addSticker(i, 40, 20);
    sheet.addSticker(i, 200, 80);
    sheet.addSticker(i, 400, 200);
    sheet.addSticker(i, 600, 400);
    (sheet.render()).writeToFile("myImage.png");
    return 0;
}
