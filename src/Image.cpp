//
// Created by Andrew Peterson on 2/20/20.
//

#include "Image.h"

#include <utility>

Image::Image(string xmpPath, string filename):
   xmpPath{ std::move(xmpPath) }, filename{ std::move(filename) }
{
}

//Image::Image(const Image *pImage):
//  xmpPath{ pImage->xmpPath },  filename{ pImage->filename }
//{
//}

bool Image::operator<(const Image &i) {
    return filename < i.filename;
}

string Image::toString() const {
    return this->filename;
}


