//
// Created by Andrew Peterson on 2/20/20.
//

#include "Timelapse.h"

using namespace std;

int main() {
    try {
        new Timelapse();
    }
    catch (exception& e) {
        printf("\n\nError: %s", e.what());
        return 1;
    }
}
