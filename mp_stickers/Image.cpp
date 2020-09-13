#include <iostream>
#include "Image.h"
#include<cmath>



void Image::darken() {
    for (unsigned y = 0; y < this->height(); y++) {
        for (unsigned x = 0; x < this->width(); x++) {
            if (this->getPixel(x, y).l < 0.1) {
                this->getPixel(x, y).l = 0;
            } else {
                this->getPixel(x, y).l = this->getPixel(x, y).l - 0.1;
            }
        }
    }
}

void Image::darken(double amount) {
    for (unsigned y = 0; y < this->height(); y++) {
        for (unsigned x = 0; x < this->width(); x++) {
            if (this->getPixel(x, y).l < amount) {
                this->getPixel(x, y).l = 0;
            } else {
                this->getPixel(x, y).l = this->getPixel(x, y).l - amount;
            }
        }
    }
}

void Image::desaturate() {
    for (unsigned y = 0; y < this->height(); y++) {
        for (unsigned x = 0; x < this->width(); x++) {
            if (this->getPixel(x, y).s < 0.1) {
                this->getPixel(x, y).s = 0;
            } else {
                this->getPixel(x, y).s = this->getPixel(x, y).s - 0.1;
            }
        }
    }
}

void Image::saturate() {
    for (unsigned y = 0; y < this->height(); y++) {
        for (unsigned x = 0; x < this->width(); x++) {
            if (this->getPixel(x, y).s > 0.9) {
                this->getPixel(x, y).s = 1.0;
            } else {
                this->getPixel(x, y).s = this->getPixel(x, y).s + 0.1;
            }
        }
    }
}

void Image::desaturate(double amount) {
        for (unsigned y = 0; y < this->height(); y++) {
        for (unsigned x = 0; x < this->width(); x++) {
            if (this->getPixel(x, y).s < amount) {
                this->getPixel(x, y).s = 0;
            } else {
                this->getPixel(x, y).s = this->getPixel(x, y).s - amount;
            }
        }
    }
}

void Image::saturate(double amount) {
    for (unsigned y = 0; y < this->height(); y++) {
        for (unsigned x = 0; x < this->width(); x++) {
            if (this->getPixel(x, y).s > 1.0 - amount) {
                this->getPixel(x, y).s = 1.0;
            } else {
                this->getPixel(x, y).s = this->getPixel(x, y).s + amount;
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
    for (unsigned y = 0; y < this->height(); y++) {
        for (unsigned x = 0; x < this->width(); x++) {
            if (this->getPixel(x, y).l > 0.9) {
                this->getPixel(x, y).l = 1.0;
            } else {
                this->getPixel(x, y).l = this->getPixel(x, y).l + 0.1;
            }
        }
    }
}

void Image::lighten(double amount) {
    for (unsigned y = 0; y < this->height(); y++) {
        for (unsigned x = 0; x < this->width(); x++) {
            if (this->getPixel(x, y).l > (1 - amount)) {
                this->getPixel(x, y).l = 1.0;
            } else {
                this->getPixel(x, y).l = this->getPixel(x, y).l + amount;
            }
        }
    }
}

void Image::rotateColor(double degrees) {
     double deg;
    if (degrees > 360) {
        for (int i = 0; degrees >360; i++) {
            degrees = degrees - 360 * i;
        }
    }
    if (degrees <0) {
        for (int i = 0; degrees < 0; i++) {
            degrees = degrees + 360 * i;
        }
    }

     for (unsigned y = 0; y < this->height(); y++) {
        for (unsigned x = 0; x < this->width(); x++) {
            if (this->getPixel(x, y).h > (360 - degrees)) {
                this->getPixel(x, y).h = this->getPixel(x, y).h + degrees - 360.0;
            } else {
                this->getPixel(x, y).h = this->getPixel(x, y).h + degrees;
            }
        }
    }
}

void Image::scale(double factor) {
    Image output;
    output.resize(factor * this->width(), factor * this->height());
    for (unsigned y = 0; y < output.height(); y++) {
        for (unsigned x = 0; x < output.width(); x++) {
            int indexx = floor(x / factor);
            int indexy = floor(y / factor);
            output.getPixel(x, y) = this->getPixel(indexx, indexy);
        }
    }
    *this = output;
}

void Image::scale(unsigned w, unsigned h) {
    double factorx = w / this->width();
    double factory = h / this->height();
    if (factorx < factory) {
        this->scale(factorx);
    } else {
        this->scale(factory);
    }
}