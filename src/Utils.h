//
// Created by Andrew Peterson on 2/20/20.
//

#ifndef TIMELAPSE_AUTO_RAMP_UTILS_H
#define TIMELAPSE_AUTO_RAMP_UTILS_H

#include <string>
#include <filesystem>

using namespace std;

void validateImageFilesExist(const string& path, const string& xmpPath);
string getXmpName(const string& path);

#endif //TIMELAPSE_AUTO_RAMP_UTILS_H
