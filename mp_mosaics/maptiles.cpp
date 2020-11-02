/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */
    size_t j = 0;
    size_t size = theTiles.size();
    vector<Point<3>> vec;
    map<Point<3>, size_t> mp;
    MosaicCanvas* mc = new MosaicCanvas(theSource.getRows(), theSource.getColumns());
    while (j < size) {
        mp[convertToXYZ(theTiles[j].getAverageColor())] = j;
        vec.push_back(convertToXYZ(theTiles[j].getAverageColor()));
        ++j;
    }
    KDTree<3> t(vec);
    for (size_t k = 0; k < theSource.getColumns(); ++k) {
        for (size_t l = 0; l < theSource.getRows(); ++l) {
            TileImage* tile = &theTiles[mp[mp.find(t.findNearestNeighbor(convertToXYZ(theSource.getRegionColor(l, k))))]];
            mc->setTile(l, k, tile);
        }
    }
    return mc;
}

