#include "StickerSheet.h"

#include<iostream>

StickerSheet::StickerSheet(const Image & picture, unsigned max) {}

StickerSheet::~StickerSheet() {}

StickerSheet::StickerSheet(const StickerSheet & other) {}

int StickerSheet::addSticker(Image & sticker, unsigned x, unsigned y) {
    return 0;
}

void StickerSheet::changeMaxStickers(unsigned max) {}

Image * StickerSheet::getSticker(unsigned index) {
    return NULL;
}

const StickerSheet & StickerSheet::operator=(const StickerSheet & other) {
    return other;
}

void StickerSheet::removeSticker(unsigned index) {}

Image StickerSheet::render() const {
    Image i =Image();
    return i;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
    return true;
}

