//
// Created by Andrew Peterson on 2/20/20.
//

#include "Timelapse.h"

Timelapse::Timelapse(): images() {
    // Print welcome statement
    this->welcome();

    // Get first the first photo
//    getline(cin, this->initialPath);
//    this->initialPath =  "/Users/andrewpeterson/Documents/Testing-photos/DSC_0119.nef";

    string path = "/Users/andrewpeterson/Documents/Testing-photos/";
    if (!filesystem::is_directory(path)) {
        throw runtime_error("Must be a valid directory.");
    }

    for (auto f : filesystem::directory_iterator(path)) {
        if (f.path().extension() == ".xmp") {
            images.insert(new Image(f.path(), f.path().filename()));
        }
    }

    for (auto f : images) {
        printf("%s\n", f->toString().c_str());
    }

}

/**
 * Generates welcome message and prompts user for starting photo
 * Returns a string containing the path to the starting photo
 */
void Timelapse::welcome() const {
    printf("Welcome to timelapse-auto-ramp.\n");
    printf("This project is based upon the original timelapse-auto-ramp plugin written by Devon Crawford.\n");
    printf("> To get started, please input the path to the directory:\n");
};



