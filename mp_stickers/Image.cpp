#include <iostream>
#include "Image.h"



void Image::darken() {
    for (unsigned y = 1; y < this->height(); y++) {
        for (unsigned x = 1; x < this->width(); x++) {
            if (this->getPixel(x, y).l < 0.1) {
                this->getPixel(x, y).l = 0;
            } else {
                this->getPixel(x, y).l = this->getPixel(x, y).l - 0.1;
            }
        }
    }
}

void Image::darken(double amount) {
    for (unsigned y = 1; y < this->height(); y++) {
        for (unsigned x = 1; x < this->width(); x++) {
            if (this->getPixel(x, y).l < amount) {
                this->getPixel(x, y).l = 0;
            } else {
                this->getPixel(x, y).l = this->getPixel(x, y).l - amount;
            }
        }
    }
}

void Image::desaturate() {
    for (unsigned y = 1; y < this->height(); y++) {
        for (unsigned x = 1; x < this->width(); x++) {
            if (this->getPixel(x, y).s < 0.1) {
                this->getPixel(x, y).s = 0;
            } else {
                this->getPixel(x, y).s = this->getPixel(x, y).s - 0.1;
            }
        }
    }
}

void Image::desaturate(double amount) {
        for (unsigned y = 1; y < this->height(); y++) {
        for (unsigned x = 1; x < this->width(); x++) {
            if (this->getPixel(x, y).s < amount) {
                this->getPixel(x, y).s = 0;
            } else {
                this->getPixel(x, y).s = this->getPixel(x, y).s - amount;
            }
        }
    }
}

void Image::grayscale() {
    for (unsigned x = 0; x < this->width(); x++) {
        for (unsigned y = 0; y < this->height(); y++) {
            this->getPixel(x, y).s = 0;
        }
    }
}

void Image::illinify() {
    for (unsigned int x = 0; x < this->width(); x++) {
        for (unsigned int y = 0; y < this->height(); y++) {
            if (this->getPixel(x, y).h > 113.5 && this->getPixel(x, y).h < 293.5) {
                this->getPixel(x, y).h = 216;
            } else {
                this->getPixel(x, y).h = 11;
            }
        }
    }
}

void Image::lighten() {
    for (unsigned y = 1; y < this->height(); y++) {
        for (unsigned x = 1; x < this->width(); x++) {
            if (this->getPixel(x, y).l > 0.9) {
                this->getPixel(x, y).l = 1.0;
            } else {
                this->getPixel(x, y).l = this->getPixel(x, y).l + 0.1;
            }
        }
    }
}

void Image::lighten(double amount) {
    for (unsigned y = 1; y < this->height(); y++) {
        for (unsigned x = 1; x < this->width(); x++) {
            if (this->getPixel(x, y).l > (1 - amount)) {
                this->getPixel(x, y).l = 1.0;
            } else {
                this->getPixel(x, y).l = this->getPixel(x, y).l + amount;
            }
        }
    }
}

void Image::rotateColor(double degrees) {
     for (unsigned y = 1; y < this->height(); y++) {
        for (unsigned x = 1; x < this->width(); x++) {
            if (this->getPixel(x, y).h > (360 - degrees)) {
                for (int n = 1; this->getPixel(x, y).h > 360; n++) {
                    this->getPixel(x, y).h = this->getPixel(x, y).h + degrees - 360.0 * n;
                }
            } else {
                this->getPixel(x, y).h = this->getPixel(x, y).h + degrees;
            }
        }
    }
}

void Image::scale(double factor) {
    this->resize(factor * this->width(), factor * this->height());
}

void Image::scale(unsigned w, unsigned h) {
    double factor = std::min(w / this->width(), h / this->height());
    this->resize(factor * this->width(), factor * this->height());
}