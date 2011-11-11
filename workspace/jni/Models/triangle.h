/*
created with obj2opengl.pl

source file    : ./triangle.obj
vertices       : 18
faces          : 8
normals        : 18
texture coords : 0


// include generated arrays
#import "Models/triangle.h"

// set input data to arrays
glVertexPointer(3, GL_FLOAT, 0, triangleVerts);
glNormalPointer(GL_FLOAT, 0, triangleNormals);

// draw data
glDrawArrays(GL_TRIANGLES, 0, triangleNumVerts);
*/

unsigned int triangleNumVerts = 24;

float triangleVerts [] = {
  // f 1//1 2//2 3//3
  0.5, -0.288675126657483, -0.0295534724781688,
  -0.5, -0.288675126657483, -0.0295534724781688,
  -5.73151461735083e-18, 0.577350238795465, -0.0295534724781688,
  // f 4//4 5//5 6//6
  0.445544551580297, -0.257235266026113, 0.0295534724781688,
  -0.5, -0.288675126657483, -0.0295534724781688,
  0.5, -0.288675126657483, -0.0295534724781688,
  // f 5//5 4//4 7//7
  -0.5, -0.288675126657483, -0.0295534724781688,
  0.445544551580297, -0.257235266026113, 0.0295534724781688,
  -0.445544551580297, -0.257235266026113, 0.0295534724781688,
  // f 8//8 9//9 10//10
  -0.445544551580297, -0.257235266026113, 0.0295534724781688,
  -5.73151461735083e-18, 0.577350238795465, -0.0295534724781688,
  -0.5, -0.288675126657483, -0.0295534724781688,
  // f 9//9 8//8 11//11
  -5.73151461735083e-18, 0.577350238795465, -0.0295534724781688,
  -0.445544551580297, -0.257235266026113, 0.0295534724781688,
  -5.73151461735083e-18, 0.514470546571727, 0.0295534724781688,
  // f 12//12 13//13 14//14
  -5.73151461735083e-18, 0.577350238795465, -0.0295534724781688,
  0.445544551580297, -0.257235266026113, 0.0295534724781688,
  0.5, -0.288675126657483, -0.0295534724781688,
  // f 13//13 12//12 15//15
  0.445544551580297, -0.257235266026113, 0.0295534724781688,
  -5.73151461735083e-18, 0.577350238795465, -0.0295534724781688,
  -5.73151461735083e-18, 0.514470546571727, 0.0295534724781688,
  // f 16//16 17//17 18//18
  0.445544551580297, -0.257235266026113, 0.0295534724781688,
  -5.73151461735083e-18, 0.514470546571727, 0.0295534724781688,
  -0.445544551580297, -0.257235266026113, 0.0295534724781688,
};

float triangleNormals [] = {
  // f 1//1 2//2 3//3
  0, 0, -1,
  0, 0, -1,
  0, 0, -1,
  // f 4//4 5//5 6//6
  0, -0.882872449424001, 0.469612859755846,
  0, -0.882872449424001, 0.469612859755846,
  0, -0.882872439644357, 0.469612878141582,
  // f 5//5 4//4 7//7
  0, -0.882872449424001, 0.469612859755846,
  0, -0.882872449424001, 0.469612859755846,
  0, -0.882872432717113, 0.469612891164804,
  // f 8//8 9//9 10//10
  -0.764589926129256, 0.441436235129893, 0.469612920580347,
  -0.764589926129256, 0.441436235129893, 0.469612920580347,
  -0.764589899879183, 0.441436222166012, 0.469612975504874,
  // f 9//9 8//8 11//11
  -0.764589926129256, 0.441436235129893, 0.469612920580347,
  -0.764589926129256, 0.441436235129893, 0.469612920580347,
  -0.764589951184019, 0.441436223238861, 0.469612890965558,
  // f 12//12 13//13 14//14
  0.764589926129256, 0.441436235129893, 0.469612920580347,
  0.764589926129256, 0.441436235129893, 0.469612920580347,
  0.764589899879183, 0.441436222166012, 0.469612975504874,
  // f 13//13 12//12 15//15
  0.764589926129256, 0.441436235129893, 0.469612920580347,
  0.764589926129256, 0.441436235129893, 0.469612920580347,
  0.764589951184019, 0.441436223238861, 0.469612890965558,
  // f 16//16 17//17 18//18
  0, 0, 1,
  0, 0, 1,
  0, 0, 1,
};

