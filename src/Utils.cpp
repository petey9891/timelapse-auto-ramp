//
// Created by Andrew Peterson on 2/20/20.
//

#include "Utils.h"

/**
 * Checks to see if there is an image and an xmp file
 * @param path a path to an image file
 */
void validateImageFilesExist(const string& path, const string& xmpPath) {
    assert(!path.empty());
    if (!filesystem::exists(path)) {
        throw runtime_error(path + " does not exist");
    }
    if (!filesystem::exists(xmpPath)) {
        throw runtime_error(xmpPath + " does not exist");
    }
}

/**
 * Generates a string with the xmp extension for a given filename
 * @param path path to an existing file
 * @return a string with the xmp extension
 */
string getXmpName(const string& path) {
    assert(!path.empty());

    int index = path.find_last_of('.');
    string p = path.substr(0, index);
    p.append(".xmp");
    return p;
}