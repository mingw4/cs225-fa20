#include "StickerSheet.h"

#include<iostream>

StickerSheet::StickerSheet(const Image & picture, unsigned max) {
    basePicture_ = new Image(picture);
    stickers_ = new Image[max];
    indexx_ = new int[max]();
    indexy_ = new int[max]();
    props_max_ = max;
    props_ct_ = 0;
}

StickerSheet::~StickerSheet() {
    delete basePicture_;
    delete[] stickers_;
    delete[] indexx_;
    delete[] indexy_;
}

StickerSheet::StickerSheet(const StickerSheet & other) {
    props_ct_ = other.props_ct_;
    props_max_ = other.props_max_;
    basePicture_ = new Image(*(other.basePicture_));
    stickers_ = new Image[other.props_max_];
    indexx_ = new int[other.props_max_]();
    indexy_ = new int[other.props_max_]();
    for (unsigned i = 0; i < props_ct_; i++) {
        stickers_[i] = other.stickers_[i];
        indexx_[i] = other.indexx_[i];
        indexy_[i] = other.indexy_[i];
    }
}

int StickerSheet::addSticker(Image & sticker, unsigned x, unsigned y) {
    if (props_max_ == props_ct_) {
        return -1;
    }
    if (x > (*basePicture_).width() || y > (*basePicture_).height()) {
        return -1;
    }
    stickers_[props_ct_] = sticker;
    indexx_[props_ct_] = x;
    indexy_[props_ct_] = y;
    props_ct_++;
    return (props_ct_ - 1);
}

//not completed.
void StickerSheet::changeMaxStickers(unsigned max) {
    if (max <= props_max_) {
        Image * nstickers = new Image[max];
        int * nindexx = new int[max]();
        int * nindexy = new int[max]();
        for (unsigned i = 0; i < std::min(max, props_ct_); i++) {
            nstickers[i] = stickers_[i];
            nindexx[i] = indexx_[i];
            nindexy[i] = indexy_[i];
        }
        delete[] stickers_;
        delete[] indexx_;
        delete[] indexy_;
        indexx_ = nindexx;
        indexy_ = nindexy;
        stickers_ = nstickers;
        props_max_ = max;
        props_ct_ = std::min(max, props_ct_);
    }
    Image * nstickers = new Image[max];
    int * nindexx = new int[max]();
    int * nindexy = new int[max]();
    for (unsigned i = 0; i < props_ct_; i++) {
        nstickers[i] = stickers_[i];
        nindexx[i] = indexx_[i];
        nindexy[i] = indexy_[i];
    }
    delete[] stickers_;
    delete[] indexx_;
    delete[] indexy_;
    indexx_ = nindexx;
    indexy_ = nindexy;
    stickers_ = nstickers;
    props_max_ = max;
}

Image * StickerSheet::getSticker(unsigned index) {
    if (index < 0 || index >= props_ct_) {
        return NULL;
    }
    return (&stickers_[index]);
}

const StickerSheet & StickerSheet::operator=(const StickerSheet & other) {
    delete[] stickers_;
    delete basePicture_;
    props_ct_ = other.props_ct_;
    props_max_ = other.props_max_;
    basePicture_ = new Image(*(other.basePicture_));
    stickers_ = new Image[other.props_max_];
    indexx_ = new int[other.props_max_]();
    indexy_ = new int[other.props_max_]();
    for (unsigned i = 0; i < props_ct_; i++) {
        stickers_[i] = other.stickers_[i];
        indexx_[i] = other.indexx_[i];
        indexy_[i] = other.indexy_[i];
    }
    return (*this);
}

void StickerSheet::removeSticker (unsigned index) {
    if (index < 0 || index >= props_max_) {
        return;
    }
    for (unsigned i = index; i < props_ct_ - 1; i++) {
        stickers_[i] = stickers_[i + 1];
        indexx_[i] = indexx_[i + 1];
        indexy_[i] = indexy_[i + 1];
    }
    stickers_[props_ct_ - 1] = Image();
    indexx_[props_ct_ - 1] = int();
    indexy_[props_ct_ - 1] = int();
    props_ct_--;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
    if (index < 0 || index > (props_ct_ - 1)) {
        return false;
    }
    if (x < 0 || y < 0 || x > ((*basePicture_).width() - 1) || y > ((*basePicture_).height() - 1)) {
        return false;
    }
    indexx_[index] = x;
    indexy_[index] = y;
    return true;
}

Image StickerSheet::render() const {
    Image output = Image((*basePicture_));
    return output;
}


/**
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

*/