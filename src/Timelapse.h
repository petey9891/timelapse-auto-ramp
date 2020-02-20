//
// Created by Andrew Peterson on 2/20/20.
//

#ifndef TIMELAPSE_AUTO_RAMP_TIMELAPSE_H
#define TIMELAPSE_AUTO_RAMP_TIMELAPSE_H

#include <string>
#include <iostream>
#include <filesystem>
#include <set>

#include "Utils.h"
#include "Image.h"

using namespace std;

struct ImageComparator {
    bool operator()(const Image *lhs, const Image *rhs) const {
        return lhs->filename < rhs->filename;
    }
};

class Timelapse {
public:
    Timelapse();
    Timelapse(const Timelapse& t) = delete;
    Timelapse& operator=(const Timelapse& t) = delete;
    ~Timelapse() = default;

private:
    void welcome() const;

private:
    string initialPath;
    set<Image*, ImageComparator> images;
};

#endif //TIMELAPSE_AUTO_RAMP_TIMELAPSE_H
