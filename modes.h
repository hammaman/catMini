#define WalkingDOF 8
const char *gaits[]={"bd","crR","trL","wk","bk","vt","cr","trR","crL","wkL","bkL","tr","bkR","wkR","buttUp","dropped","sit","calib","pee","balance","lifted","rest",};
const char bd[] PROGMEM = { 19,
 93, 93, 63, 63,-36,-36,  7,  7,
 83, 83, 49, 49,-41,-41, 14, 14,
 73, 73, 36, 36,-41,-41, 22, 22,
 63, 63, 34, 34,-36,-36, 19, 19,
 52, 52, 36, 36,-28,-28,  9,  9,
 45, 45, 40, 40,-19,-19, -1, -1,
 41, 41, 47, 47,-11,-11,-12,-12,
 41, 41, 55, 55, -4, -4,-21,-21,
 47, 47, 63, 63, -1, -1,-28,-28,
 54, 54, 78, 78,  4,  4,-34,-34,
 57, 57, 99, 99, 15, 15,-39,-39,
 56, 56,106,106, 27, 27,-36,-36,
 61, 61,107,107, 26, 26,-30,-30,
 69, 69,104,104, 18, 18,-21,-21,
 78, 78, 99, 99,  7,  7,-11,-11,
 87, 87, 91, 91, -3, -3, -2, -2,
 93, 93, 83, 83,-14,-14,  4,  4,
 96, 96, 78, 78,-23,-23,  5,  5,
 94, 94, 66, 66,-33,-33,  6,  6,
'\0'};
const char crR[] PROGMEM = { 21,
 58, 68, 63, 73,-12,-23,-17,-33,
 66, 62, 59, 88, -9,-23,-16,-29,
 73, 57, 55, 98, -5,-22,-15,-22,
 76, 52, 52,100,  3,-21,-15, -7,
 77, 40, 48, 89, 13,-16,-14, 26,
 75, 40, 45, 79, 26,-12,-13, 27,
 73, 45, 37, 81, 46,-14,-10, 13,
 96, 48, 47, 81,  2,-15,-20,  2,
 97, 53, 53, 76,-14,-16,-22, -4,
 91, 57, 58, 70,-25,-17,-23,-10,
 79, 60, 64, 62,-32,-17,-23,-12,
 61, 62, 69, 51,-31,-15,-23,-10,
 41, 65, 73, 39,-26,-15,-23, -6,
 20, 68, 78, 27,-14,-15,-22,  1,
  1, 71, 81, 13,  4,-14,-20, 11,
-15, 74, 78, -1, 35,-13,-12, 23,
  1, 76, 76,-24, 19, -8,-14, 51,
 15, 82, 74,  1,  5,-20,-15,  4,
 27, 79, 72, 20, -2,-21,-16,-11,
 40, 75, 69, 40, -8,-23,-17,-23,
 51, 70, 65, 62,-12,-23,-17,-32,
'\0'};
const char trL[] PROGMEM = { 21,
 52, 62, 48, 58, -2,-22,  6,-11,
 54, 44, 41, 62, -2,-17,  5,-11,
 56, 25, 33, 66, -2, -8,  7, -9,
 58,  2, 24, 70, -1, 12, 12, -5,
 60,-16, 14, 65, -1, 50, 19,  2,
 61,  1,  4, 63,  1, 33, 27,  1,
 65, 11,-13, 61,  2, 23, 45,  1,
 71, 21, -1, 60, -7, 16, 15, -1,
 68, 30, 21, 57, -9, 10, -6, -1,
 64, 38, 41, 56,-10,  7,-17, -2,
 60, 47, 59, 53,-11,  5,-23, -2,
 56, 54, 74, 52,-11,  4,-21, -2,
 52, 60, 84, 50,-10,  6,-15, -2,
 47, 63, 88, 47, -9, 10, -3, -1,
 37, 66, 79, 45, -3, 17, 26, -1,
 37, 67, 63, 41,  1, 25, 40,  1,
 39, 65, 65, 39,  1, 37, 28,  1,
 43, 80, 64, 38,  1, 24, 20, -4,
 45, 90, 63, 45, -1, -3, 13, -8,
 48, 86, 59, 49, -2,-15,  9, -9,
 50, 76, 54, 55, -2,-22,  6,-10,
'\0'};
const char wk[] PROGMEM = { 30,
 19, 67, 74, 50, 14, 15,-33,  2,
 24, 68, 86, 47, 10, 19,-30,  2,
 28, 71, 94, 43,  8, 25,-24,  3,
 33, 87, 96, 39,  6,  7, -9,  4,
 37, 97, 84, 34,  4,-13, 11,  5,
 41, 94, 69, 30,  3,-24, 25,  8,
 46, 86, 68, 25,  2,-31, 19, 10,
 49, 74, 67, 20,  2,-33, 15, 13,
 53, 59, 66, 15,  2,-31, 11, 16,
 56, 42, 65,  7,  2,-25,  9, 23,
 59, 23, 63,  2,  3,-13,  7, 19,
 61,  8, 61, 13,  5,  6,  5, -4,
 63,  2, 58, 30,  7, 25,  3,-19,
 65, 11, 55, 47,  9, 20,  2,-27,
 67, 17, 52, 63, 12, 16,  2,-32,
 67, 21, 48, 78, 16, 13,  2,-33,
 68, 26, 45, 89, 20,  9,  2,-29,
 75, 31, 41, 96, 22,  7,  3,-22,
 91, 35, 36, 94,  1,  5,  5, -5,
 97, 40, 32, 79,-17,  3,  7, 17,
 93, 44, 27, 68,-26,  2,  9, 22,
 84, 47, 23, 68,-31,  2, 11, 18,
 71, 51, 18, 67,-33,  2, 14, 14,
 56, 55, 12, 66,-31,  2, 19, 11,
 39, 57,  2, 64,-24,  3, 26,  8,
 18, 60,  8, 63, -9,  4,  7,  6,
  6, 62, 23, 60, 11,  6,-13,  4,
  4, 64, 39, 57, 25,  8,-24,  3,
 13, 66, 56, 55, 19, 11,-31,  2,
 18, 67, 71, 51, 15, 14,-33,  2,
'\0'};
const char bk[] PROGMEM = { 28,
 49, 61, 47, 63,  5,-17,  6,-17,
 43, 72, 52, 51,  6,-16,  6,-16,
 38, 79, 56, 37,  7,-11,  7,-10,
 31, 83, 59, 22,  9, -2, 10, -2,
 25, 84, 63,  4, 13, 12, 13, 12,
 17, 73, 64,-10, 18, 34, 18, 33,
 10, 62, 65,-11, 24, 44, 24, 44,
  2, 64, 64, -1, 31, 34, 31, 34,
-11, 65, 62,  7, 44, 26, 44, 26,
-10, 64, 74, 15, 33, 20, 33, 20,
  6, 63, 84, 22, 11, 15, 11, 15,
 19, 61, 84, 29,  1, 11,  1, 11,
 34, 57, 80, 35, -9,  8, -9,  8,
 48, 53, 73, 42,-15,  6,-15,  6,
 61, 49, 63, 47,-17,  5,-17,  6,
 72, 43, 51, 52,-16,  6,-16,  6,
 79, 38, 37, 56,-11,  7,-10,  7,
 83, 31, 22, 59, -2,  9, -2, 10,
 84, 25,  4, 63, 12, 13, 12, 13,
 73, 17,-10, 64, 34, 18, 33, 18,
 62, 10,-11, 65, 44, 24, 44, 24,
 64,  2, -1, 64, 34, 31, 34, 31,
 65,-11,  7, 62, 26, 44, 26, 44,
 64,-10, 15, 74, 20, 33, 20, 33,
 63,  6, 22, 84, 15, 11, 15, 11,
 61, 19, 29, 84, 11,  1, 11,  1,
 57, 34, 35, 80,  8, -9,  8, -9,
 53, 48, 42, 73,  6,-15,  6,-15,
'\0'};
const char vt[] PROGMEM = { 19,
 49, 31, 49, 31,  3, 35,  4, 35,
 39, 31, 39, 31, 20, 35, 20, 35,
 31, 31, 31, 31, 35, 35, 35, 35,
 31, 31, 31, 31, 35, 35, 35, 35,
 31, 32, 31, 32, 35, 33, 35, 32,
 31, 43, 31, 43, 35, 14, 35, 13,
 31, 53, 31, 53, 35, -2, 35, -2,
 31, 63, 31, 63, 35,-19, 35,-19,
 31, 58, 31, 58, 35,-11, 35,-11,
 31, 49, 31, 49, 35,  3, 35,  4,
 31, 39, 31, 39, 35, 20, 35, 20,
 31, 31, 31, 31, 35, 35, 35, 35,
 31, 31, 31, 31, 35, 35, 35, 35,
 31, 31, 31, 31, 35, 35, 35, 35,
 38, 31, 38, 31, 23, 35, 22, 35,
 48, 31, 48, 31,  5, 35,  6, 35,
 57, 31, 57, 31, -9, 35, -9, 35,
 62, 31, 62, 31,-17, 35,-17, 35,
 54, 31, 54, 31, -4, 35, -4, 35,
'\0'};
const char cr[] PROGMEM = { 21,
 58, 72, 58, 72,-11,-31,-11,-31,
 67, 52, 47, 87, -9,-28, -9,-28,
 73, 33, 35, 95, -5,-20, -5,-20,
 77, 12, 23, 97,  2, -5,  2, -6,
 79,-14,  9, 91, 12, 22, 12, 22,
 77,-11, -5, 75, 26, 33, 26, 33,
 77,  4,-23, 78, 42, 17, 42, 17,
 96, 17,  4, 78,  2,  6,  2,  6,
 97, 30, 24, 75,-14, -2,-14, -2,
 91, 43, 45, 70,-25, -8,-25, -8,
 79, 54, 64, 62,-31,-10,-31,-11,
 61, 64, 81, 51,-30,-10,-30,-10,
 40, 71, 92, 40,-23, -7,-24, -7,
 20, 76, 97, 28,-11, -1,-11, -1,
  1, 78, 96, 15,  4,  8,  4,  8,
-18, 78, 72,  1, 41, 20, 41, 20,
 -2, 74, 77,-14, 23, 37, 23, 37,
 12, 95, 79, -3, 10,  9, 10,  9,
 25, 97, 77, 17,  1, -9,  1, -9,
 38, 94, 72, 36, -6,-21, -6,-21,
 49, 84, 65, 56,-10,-29, -9,-29,
'\0'};
const char trR[] PROGMEM = { 21,
 48, 58, 53, 69,  5,-11, -2,-22,
 56, 54, 51, 81,  4,-10, -2,-18,
 61, 48, 48, 87,  7, -9, -1, -8,
 64, 39, 47, 86, 12, -5, -1, 12,
 66, 35, 44, 61, 19,  2, -1, 50,
 66, 38, 41, 64, 28,  1,  1, 33,
 63, 41, 35, 65, 45,  1,  2, 23,
 86, 44, 40, 63, 14, -1, -7, 15,
 89, 47, 46, 60, -6, -1, -9, 10,
 84, 49, 51, 56,-17, -2,-10,  7,
 73, 52, 56, 49,-23, -2,-10,  6,
 56, 53, 60, 44,-21, -2,-10,  4,
 37, 55, 64, 35,-14, -2,-10,  7,
 18, 58, 67, 27, -3, -1, -9, 11,
 -7, 59, 69, 17, 25, -1, -3, 17,
 -8, 61, 64,  7, 41,  1,  1, 25,
  4, 63, 63, -5, 28,  1,  1, 36,
 15, 70, 60, -6, 20, -5,  1, 24,
 25, 68, 59, 17, 13, -9, -1, -3,
 34, 65, 57, 36,  8,-10, -1,-15,
 41, 61, 55, 55,  6,-11, -2,-22,
'\0'};
const char crL[] PROGMEM = { 21,
 61, 73, 60, 65,-17,-33,-13,-24,
 63, 53, 48, 71,-15,-29, -9,-23,
 66, 32, 36, 75,-15,-22, -5,-23,
 69, 11, 23, 78,-15, -7,  3,-21,
 71,-17, 10, 83,-14, 26, 13,-16,
 74, -8, -4, 77,-13, 27, 26,-12,
 79,  6,-25, 75,-11, 13, 47,-14,
 81, 19,  4, 73,-20,  2,  2,-15,
 78, 32, 24, 70,-22, -5,-14,-16,
 74, 45, 45, 67,-23,-10,-25,-17,
 69, 56, 66, 64,-24,-12,-33,-17,
 64, 64, 83, 60,-23,-10,-32,-16,
 59, 71, 95, 57,-23, -6,-26,-16,
 53, 76,100, 53,-22,  1,-14,-15,
 48, 77, 98, 48,-20, 11,  4,-14,
 39, 76, 77, 45,-12, 24, 35,-13,
 43, 68, 81, 37,-13, 51, 18, -8,
 47, 96, 81, 46,-14,  5,  6,-20,
 51, 97, 78, 51,-16,-11, -2,-21,
 54, 92, 73, 57,-16,-23, -8,-23,
 59, 82, 65, 63,-17,-32,-11,-23,
'\0'};
const char wkL[] PROGMEM = { 30,
 39, 67, 74, 56, -2, 15,-33, -5,
 41, 68, 86, 54, -3, 19,-30, -5,
 43, 71, 94, 52, -4, 25,-24, -5,
 45, 87, 96, 50, -4,  7, -9, -5,
 48, 97, 84, 48, -5,-13, 11, -5,
 50, 94, 69, 45, -5,-24, 25, -4,
 52, 86, 68, 43, -5,-31, 19, -3,
 54, 74, 67, 41, -5,-33, 15, -3,
 56, 59, 66, 39, -5,-31, 11, -2,
 57, 42, 65, 34, -5,-25,  9,  1,
 59, 23, 63, 33, -5,-13,  7, -3,
 60,  8, 61, 40, -5,  6,  5,-14,
 62,  2, 58, 48, -4, 25,  3,-19,
 63, 11, 55, 55, -4, 20,  2,-21,
 64, 17, 52, 61, -3, 16,  2,-22,
 66, 21, 48, 67, -3, 13,  2,-22,
 67, 26, 45, 73, -2,  9,  2,-21,
 73, 31, 41, 77, -2,  7,  3,-20,
 81, 35, 36, 80,-12,  5,  5,-13,
 79, 40, 32, 74,-19,  3,  7, -3,
 75, 44, 27, 69,-20,  2,  9, -1,
 71, 47, 23, 68,-21,  2, 11, -1,
 65, 51, 18, 67,-22,  2, 14, -2,
 58, 55, 12, 65,-21,  2, 19, -3,
 52, 57,  2, 64,-20,  3, 26, -4,
 41, 60,  8, 63,-15,  4,  7, -4,
 34, 62, 23, 61, -7,  6,-13, -5,
 33, 64, 39, 59,  1,  8,-24, -5,
 36, 66, 56, 57, -1, 11,-31, -5,
 39, 67, 71, 56, -2, 14,-33, -5,
'\0'};
const char bkL[] PROGMEM = { 34,
 52, 61, 47, 57,  1,-17,  6, -7,
 51, 70, 51, 54,  1,-16,  6, -7,
 49, 77, 55, 51,  1,-13,  7, -7,
 49, 82, 58, 49,  1, -8,  8, -6,
 47, 84, 61, 45,  1,  1, 11, -6,
 46, 84, 63, 40,  1, 13, 14, -4,
 43, 73, 64, 35,  1, 34, 18, -1,
 43, 61, 65, 34,  1, 49, 23,  4,
 41, 63, 65, 36,  1, 37, 28,  3,
 39, 65, 64, 37,  2, 29, 36,  3,
 34, 65, 61, 40,  4, 24, 50,  2,
 35, 64, 75, 40, -1, 19, 31,  2,
 41, 63, 84, 43, -4, 15, 11,  1,
 43, 61, 84, 45, -5, 12,  1,  1,
 47, 59, 81, 45, -6,  8, -7,  1,
 50, 55, 77, 48, -7,  7,-13,  1,
 53, 52, 70, 49, -7,  6,-16,  1,
 56, 48, 61, 51, -7,  5,-17,  1,
 57, 43, 51, 51, -7,  6,-16,  1,
 60, 38, 39, 53, -7,  7,-12,  1,
 63, 34, 27, 55, -6,  8, -6,  1,
 65, 28, 15, 56, -5, 11,  3,  1,
 69, 22,  1, 57, -4, 14, 16,  1,
 67, 16,-13, 58,  1, 19, 39,  1,
 63, 10,-11, 59,  3, 24, 44,  1,
 63,  3, -3, 60,  3, 29, 35,  2,
 61, -4,  4, 61,  2, 37, 29,  2,
 61,-16, 11, 65,  2, 47, 23,  3,
 60, -5, 17, 69,  1, 24, 18, -3,
 59,  7, 23, 67,  1,  9, 14, -4,
 57, 19, 29, 65,  1,  1, 11, -5,
 57, 31, 35, 63,  1, -8,  8, -6,
 55, 45, 39, 60,  1,-14,  7, -7,
 53, 55, 44, 59,  1,-17,  6, -7,
'\0'};
const char tr[] PROGMEM = { 21,
 48, 62, 48, 69,  5,-22,  6,-22,
 56, 44, 41, 81,  4,-17,  5,-18,
 61, 25, 33, 87,  7, -8,  7, -8,
 64,  2, 24, 86, 12, 12, 12, 12,
 66,-16, 14, 61, 19, 50, 19, 50,
 66,  1,  4, 64, 28, 33, 27, 33,
 63, 11,-13, 65, 45, 23, 45, 23,
 86, 21, -1, 63, 14, 16, 15, 15,
 89, 30, 21, 60, -6, 10, -6, 10,
 84, 38, 41, 56,-17,  7,-17,  7,
 73, 47, 59, 49,-23,  5,-23,  6,
 56, 54, 74, 44,-21,  4,-21,  4,
 37, 60, 84, 35,-14,  6,-15,  7,
 18, 63, 88, 27, -3, 10, -3, 11,
 -7, 66, 79, 17, 25, 17, 26, 17,
 -8, 67, 63,  7, 41, 25, 40, 25,
  4, 65, 65, -5, 28, 37, 28, 36,
 15, 80, 64, -6, 20, 24, 20, 24,
 25, 90, 63, 17, 13, -3, 13, -3,
 34, 86, 59, 36,  8,-15,  9,-15,
 41, 76, 54, 55,  6,-22,  6,-22,
'\0'};
const char bkR[] PROGMEM = { 34,
 49, 55, 51, 63,  5, -7,  1,-17,
 44, 57, 51, 53,  6, -7,  1,-16,
 40, 60, 53, 42,  7, -7,  1,-13,
 35, 62, 54, 30,  8, -7,  1, -7,
 29, 64, 56, 18, 10, -6,  1,  1,
 23, 68, 57,  3, 14, -4,  1, 14,
 17, 68, 58,-10, 18, -1,  1, 33,
 11, 64, 59,-14, 23,  4,  1, 48,
  4, 63, 60, -4, 28,  3,  2, 37,
 -3, 62, 61,  3, 35,  3,  2, 30,
-16, 61, 64, 10, 50,  2,  4, 24,
 -9, 60, 69, 16, 31,  2, -1, 19,
  6, 59, 67, 22, 11,  1, -4, 15,
 18, 57, 66, 28,  1,  1, -5, 11,
 30, 57, 64, 33, -7,  1, -6,  9,
 42, 55, 61, 39,-13,  1, -7,  7,
 53, 54, 59, 43,-16,  1, -7,  6,
 63, 52, 56, 48,-17,  1, -7,  6,
 72, 51, 54, 52,-16,  1, -7,  6,
 78, 49, 51, 56,-12,  1, -7,  7,
 82, 48, 48, 59, -6,  1, -6,  9,
 84, 47, 44, 61,  3,  1, -5, 11,
 83, 45, 39, 63, 16,  1, -3, 15,
 70, 43, 35, 64, 39,  1,  1, 19,
 62, 42, 35, 65, 44,  1,  4, 24,
 64, 41, 36, 65, 36,  1,  3, 30,
 65, 39, 39, 64, 28,  2,  2, 37,
 65, 34, 40, 64, 23,  3,  2, 47,
 64, 37, 42, 79, 18, -3,  1, 24,
 63, 41, 43, 84, 14, -4,  1, 10,
 61, 44, 45, 84, 11, -5,  1,  1,
 58, 47, 45, 81,  9, -6,  1, -8,
 55, 51, 48, 75,  7, -7,  1,-14,
 51, 53, 50, 68,  6, -7,  1,-17,
'\0'};
const char wkR[] PROGMEM = { 30,
 19, 66, 65, 50, 14, -3,-22,  2,
 24, 67, 71, 47, 10, -2,-21,  2,
 28, 71, 77, 43,  8,  1,-20,  3,
 33, 78, 81, 39,  6, -8,-15,  4,
 37, 81, 77, 34,  4,-17, -7,  5,
 41, 77, 69, 30,  3,-20,  1,  8,
 46, 72, 68, 25,  2,-21, -1, 10,
 49, 66, 67, 20,  2,-22, -2, 13,
 53, 61, 65, 15,  2,-22, -3, 16,
 56, 53, 64,  7,  2,-20, -4, 23,
 59, 44, 63,  2,  3,-17, -4, 19,
 61, 35, 61, 13,  5, -8, -5, -4,
 63, 31, 60, 30,  7,  1, -5,-19,
 65, 35, 59, 47,  9, -1, -5,-27,
 67, 38, 56, 63, 12, -2, -5,-32,
 67, 40, 55, 78, 16, -3, -5,-33,
 68, 42, 53, 89, 20, -3, -5,-29,
 75, 44, 51, 96, 22, -4, -5,-22,
 91, 47, 49, 94,  1, -4, -5, -5,
 97, 49, 47, 79,-17, -5, -4, 17,
 93, 51, 45, 68,-26, -5, -4, 22,
 84, 53, 42, 68,-31, -5, -3, 18,
 71, 55, 40, 67,-33, -5, -2, 14,
 56, 57, 38, 66,-31, -5, -2, 11,
 39, 58, 31, 64,-24, -5,  1,  8,
 18, 59, 35, 63, -9, -5, -9,  6,
  6, 61, 44, 60, 11, -5,-17,  4,
  4, 62, 51, 57, 25, -4,-20,  3,
 13, 64, 59, 55, 19, -4,-22,  2,
 18, 65, 64, 51, 15, -3,-22,  2,
'\0'};
const char buttUp[] PROGMEM = { 1,
 20, 40,  1,  1,  5,  5,  3,  3, 90, 90, 45, 45,-60,-60,  5,  5,'\0'};
const char dropped[] PROGMEM = { 1,
  1, 30,  1,  1, -5, -5, 15, 15,-75,-75, 60, 60, 60, 60,-30,-30,'\0'};
const char sit[] PROGMEM = { 1,
  1,  1,  1,  1, -5, -5, 20, 20, 45, 45, 90, 90, 45, 45,-45,-45,'\0'};
const char calib[] PROGMEM = { 1,
  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,'\0'};
const char pee[] PROGMEM = { 1,
 45, 20,  1,  1, 15,-10, 60,-10, 45, 45, 60, 15, 15, 45,-30,  1,'\0'};
const char balance[] PROGMEM = { 1,
  1, 20,  1,  1,  1,  1,  1,  1, 30, 30, 15, 15, 30, 30, 30, 30,'\0'};
const char lifted[] PROGMEM = { 1,
  1,-20,  1,  1,  1,  1,  1,  1, 30, 30, 15, 15, 90, 90,-90,-90,'\0'};
const char rest[] PROGMEM = { 1,
  1, 10,  1,  1, -3, -3,  3,  3, 60, 60, 60, 60,-45,-45,-45,-45,'\0'};
const char* const gaits_table[] PROGMEM = {bd, crR, trL, wk, bk, vt, cr, trR, crL, wkL, bkL, tr, bkR, wkR, buttUp, dropped, sit, calib, pee, balance, lifted, rest, };
char *dutyAng=new char [274]; 
