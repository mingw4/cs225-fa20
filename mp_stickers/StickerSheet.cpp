#include "StickerSheet.h"

#include<iostream>

StickerSheet::StickerSheet(const Image& picture, unsigned max) {
    Image scene_ = picture;
    stickers[max];
}

StickerSheet::~StickerSheet() {
    delete (&scene_);
    for (unsigned i = 0; i < sizeof(stickers); i++) {
        delete stickers[i];
    }
}

StickerSheet::StickerSheet(const StickerSheet& other) {
    Image scene_ = other.scene_;
    stickers[sizeof(other.stickers)];
    for (unsigned i = 0; i < sizeof(stickers); i++) {
        stickers[i] = new Image((*other.stickers[i]));
    }
}

//incomplete.
int StickerSheet::addSticker(Image & sticker, unsigned x, unsigned y) {
    if (x < 0 || y < 0) {
        return -1;
    }
    return 0;
}

//incomplete.
void StickerSheet::changeMaxStickers(unsigned max) {}

Image * StickerSheet::getSticker(unsigned index) {
    return stickers[index];
}

const StickerSheet & StickerSheet::operator=(const StickerSheet & other) {
    return other;
}



void StickerSheet::removeSticker(unsigned index) {}

Image StickerSheet::render() const {
    return scene_;
}

bool StickerSheet::translate (unsigned index, unsigned x, unsigned y) {
    return true;
}

