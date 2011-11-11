/*
created with obj2opengl.pl

source file    : ./square.obj
vertices       : 24
faces          : 12
normals        : 24
texture coords : 0


// include generated arrays
#import "Models/square.h"

// set input data to arrays
glVertexPointer(3, GL_FLOAT, 0, squareVerts);
glNormalPointer(GL_FLOAT, 0, squareNormals);

// draw data
glDrawArrays(GL_TRIANGLES, 0, squareNumVerts);
*/

unsigned int squareNumVerts = 36;

float squareVerts [] = {
  // f 1//1 2//2 3//3
  0.500624998745875, 0.500624986045875, -0.05000000127,
  -0.499375001254125, -0.499374963154125, -0.05000000127,
  -0.499375001254125, 0.500624986045875, -0.05000000127,
  // f 2//2 1//1 4//4
  -0.499375001254125, -0.499374963154125, -0.05000000127,
  0.500624998745875, 0.500624986045875, -0.05000000127,
  0.500624998745875, -0.499374963154125, -0.05000000127,
  // f 5//5 6//6 7//7
  -0.451874994967625, 0.450624984775875, 0.05000000127,
  0.500624998745875, 0.500624986045875, -0.05000000127,
  -0.499375001254125, 0.500624986045875, -0.05000000127,
  // f 6//6 5//5 8//8
  0.500624998745875, 0.500624986045875, -0.05000000127,
  -0.451874994967625, 0.450624984775875, 0.05000000127,
  0.450624997475875, 0.450624984775875, 0.05000000127,
  // f 9//9 10//10 11//11
  0.500624998745875, 0.500624986045875, -0.05000000127,
  0.450624997475875, -0.451875007667625, 0.05000000127,
  0.500624998745875, -0.499374963154125, -0.05000000127,
  // f 10//10 9//9 12//12
  0.450624997475875, -0.451875007667625, 0.05000000127,
  0.500624998745875, 0.500624986045875, -0.05000000127,
  0.450624997475875, 0.450624984775875, 0.05000000127,
  // f 13//13 14//14 15//15
  0.450624997475875, -0.451875007667625, 0.05000000127,
  -0.499375001254125, -0.499374963154125, -0.05000000127,
  0.500624998745875, -0.499374963154125, -0.05000000127,
  // f 14//14 13//13 16//16
  -0.499375001254125, -0.499374963154125, -0.05000000127,
  0.450624997475875, -0.451875007667625, 0.05000000127,
  -0.451874994967625, -0.451875007667625, 0.05000000127,
  // f 17//17 18//18 19//19
  -0.451874994967625, -0.451875007667625, 0.05000000127,
  -0.499375001254125, 0.500624986045875, -0.05000000127,
  -0.499375001254125, -0.499374963154125, -0.05000000127,
  // f 18//18 17//17 20//20
  -0.499375001254125, 0.500624986045875, -0.05000000127,
  -0.451874994967625, -0.451875007667625, 0.05000000127,
  -0.451874994967625, 0.450624984775875, 0.05000000127,
  // f 21//21 22//22 23//23
  0.450624997475875, -0.451875007667625, 0.05000000127,
  -0.451874994967625, 0.450624984775875, 0.05000000127,
  -0.451874994967625, -0.451875007667625, 0.05000000127,
  // f 22//22 21//21 24//24
  -0.451874994967625, 0.450624984775875, 0.05000000127,
  0.450624997475875, -0.451875007667625, 0.05000000127,
  0.450624997475875, 0.450624984775875, 0.05000000127,
};

float squareNormals [] = {
  // f 1//1 2//2 3//3
  0, 0, -1,
  0, 0, -1,
  0, 0, -1,
  // f 2//2 1//1 4//4
  0, 0, -1,
  0, 0, -1,
  0, 0, -1,
  // f 5//5 6//6 7//7
  0, 0.894427190999916, 0.447213595499958,
  0, 0.894427190999916, 0.447213595499958,
  0, 0.894427189845818, 0.447213597808153,
  // f 6//6 5//5 8//8
  0, 0.894427190999916, 0.447213595499958,
  0, 0.894427190999916, 0.447213595499958,
  0, 0.894427192278694, 0.447213592942402,
  // f 9//9 10//10 11//11
  0.894427190999916, 0, 0.447213595499958,
  0.894427190999916, 0, 0.447213595499958,
  0.894427189845818, 0, 0.447213597808153,
  // f 10//10 9//9 12//12
  0.894427190999916, 0, 0.447213595499958,
  0.894427190999916, 0, 0.447213595499958,
  0.894427192278694, 0, 0.447213592942402,
  // f 13//13 14//14 15//15
  0, -0.903277655951345, 0.429056495416446,
  0, -0.903277655951345, 0.429056495416446,
  0, -0.903277641841891, 0.429056525120587,
  // f 14//14 13//13 16//16
  0, -0.903277655951345, 0.429056495416446,
  0, -0.903277655951345, 0.429056495416446,
  0, -0.903277651564944, 0.429056504650983,
  // f 17//17 18//18 19//19
  -0.903277492126803, 0, 0.429056840310363,
  -0.903277492126803, 0, 0.429056840310363,
  -0.903277486003785, 0, 0.429056853200928,
  // f 18//18 17//17 20//20
  -0.903277492126803, 0, 0.429056840310363,
  -0.903277492126803, 0, 0.429056840310363,
  -0.903277478891157, 0, 0.429056868174878,
  // f 21//21 22//22 23//23
  0, 0, 1,
  0, 0, 1,
  0, 0, 1,
  // f 22//22 21//21 24//24
  0, 0, 1,
  0, 0, 1,
  0, 0, 1,
};
