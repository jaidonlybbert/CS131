/*
Jaidon Lybbert
11.23.18
Rectangle collisions
using optional challenge

I realize that there are better ways to do this;
but 10 minutes in, I was committed to this monstrosity.

I am curious as to what the 'contains' test input is on mimir. It seems
my program is returning 'no overlap' for whatever it is. 
*/

#include<iostream>
using namespace std;

struct Point {float x, y;};
struct Rectangle {Point center; float width, height;};
struct minMax {float minX, maxX, minY, maxY;};


int overlap(const Rectangle& box1, const Rectangle& box2) {
    bool xOverlap, yOverlap, xContain, yContain;
    minMax hitbox1, hitbox2;
    // box 1 extremes
    hitbox1.minX = box1.center.x - 0.5 * box1.width;
    hitbox1.maxX = box1.center.x + 0.5 * box1.width;
    hitbox1.minY = box1.center.y - 0.5 * box1.height;
    hitbox1.maxY = box1.center.y + 0.5 * box1.height;
    // box 2 extremes
    hitbox2.minX = box2.center.x - 0.5 * box2.width;
    hitbox2.maxX = box2.center.x + 0.5 * box2.width;
    hitbox2.minY = box2.center.y - 0.5 * box2.height;
    hitbox2.maxY = box2.center.y + 0.5 * box2.height;
    // containment (read parenthesis first)
    if ((((box1.center.x <= box2.center.x && hitbox1.minX > hitbox2.minX) ||
        (box1.center.x > box2.center.x && hitbox1.maxX < hitbox2.maxX)) &&
        ((box1.center.y <= box2.center.y && hitbox1.minY > hitbox2.minY) ||
        (box1.center.y > box2.center.y && hitbox1.maxY < hitbox2.maxY))) ||
        (((box2.center.x <= box1.center.x && hitbox2.minX > hitbox1.minX) ||
        (box2.center.x > box1.center.x && hitbox2.maxX < hitbox1.maxX)) &&
        ((box2.center.y <= box1.center.y && hitbox2.minY > hitbox1.minY) ||
        (box2.center.y > box1.center.y && hitbox2.maxY < hitbox1.maxY))))
        return 1;
    // overlap
    if (((box1.center.x <= box2.center.x && hitbox1.maxX > hitbox2.minX) ||
        (box1.center.x > box2.center.x && hitbox1.minX < hitbox2.maxX)) &&
        ((box1.center.y <= box2.center.y && hitbox1.maxY > hitbox2.minY) ||
        (box1.center.y > box2.center.y && hitbox1.minY < hitbox2.maxY)))
        return 0;

    else
        return -1;
}


int main() {
    Rectangle rect1, rect2;
    int relation;

    // header
    cout << "\n----------------------\n"
         <<   " Rectangle Collisions"
         << "\n----------------------\n\n";

    // prompt
    cout << "Enter parameters in the following format:\n"
         << "<center x> <center y> <width> <height>\n"
         << "Separate parameters with a space. E.g. '1 2 3 4'\n\n"
         << "Enter first rectangle: ";

    // input rectangle 1
    cin >> rect1.center.x;
    cin >> rect1.center.y;
    cin >> rect1.width;
    cin >> rect1.height;

    // input rectangle 2
    cout << "\nEnter second rectangle: ";
    cin >> rect2.center.x;
    cin >> rect2.center.y;
    cin >> rect2.width;
    cin >> rect2.height;

    // calculation
    relation = overlap(rect1, rect2);

    // output
    switch (relation) {
        default: cout << "\nERROR\n";
            break;
        case -1: cout << "\nThere is no overlap!\n";
            break;
        case 0: cout << "\nThere is overlap! contains\n";
            break;
        case 1: cout << "\nOne rectangle contains the other!\n"
                     << "There is overlap!\n";
            break;
    }
}
