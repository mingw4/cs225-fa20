/**
 * @file HSLAPixel.h
 *
 * @author CS 225: Data Structures
 * @version 2018r1-lab1
 */

#pragma once

#include <iostream>
#include <sstream>

namespace cs225 {
    class HSLAPixel {
        public:
            //h denotes the hue of the pixel [0,360)
            double h;
            //s denotes the saturation of the pixel [0,1]
            double s;
            //l denotes the luminance of the pixel, [0,1]
            double l;
            //a denotes the alpha chanel, namely transparancy, [0,1]
            double a;
            HSLAPixel();
            HSLAPixel(double hue,
            double saturation,
            double luminance);
            HSLAPixel(double hue,
            double saturation,
            double luminane,
            double alpha);
    };
};

