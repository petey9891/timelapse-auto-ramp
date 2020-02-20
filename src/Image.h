//
// Created by Andrew Peterson on 2/20/20.
//

#ifndef TIMELAPSE_AUTO_RAMP_IMAGE_H
#define TIMELAPSE_AUTO_RAMP_IMAGE_H

#include <string>
#include <filesystem>

using namespace std;

class Image {
public:
    Image() = default;
    Image(string path, string xmpPath);
//    Image(const Image *pImage);
    Image(const Image& i) = default;
    Image& operator=(const Image& i) = default;
    ~Image() = default;

    bool operator<(const Image& i);
    [[nodiscard]] string toString() const;
    string xmpPath;
    string filename;

private:
};


#endif //TIMELAPSE_AUTO_RAMP_IMAGE_H
