#include <iostream>
#include <iomanip>
#include <valarray>
#include "increment.h"

#include <cstdlib>

using namespace std;

int main(int argc, char **argv) {

  g4m::incrementCurvesHf rtShort  //Short rotation time
    (150, 6.55, 0., -1.2, -0.35,
     0., 0.9, -0.8242, -0.4273, -0.4, -1.476, 4.283, -0.3, 3.610, -1.071,
     0.1, 1., -2.0670, -0.3028, 0.5, 1.5, 150, 0.01, 0.5, 0.5,
     0.8, 1./500., 2., 0.01, 0.5, 22.09082, 0.62065,-0.025, 1.50614, -0.25346,
     22.70, 16.56, -0.012, 0.24754, -1.81373, 1.0945, 0.0999, -1.6033,
     1.6, 0.95, 1.5);

  g4m::incrementCurvesHf rtNormal  //Average rotation times
    (150, 8.0, 0., -1.4, -0.3,
     0., 0.9, -0.8242, -0.4273, -0.4, -1.476, 4.283, -0.3, 3.610, -1.071,
     0.1, 1., -2.0670, -0.3028, 0.5, 1.5, 150, 0.01, 0.5, 0.5,
     0.8, 1./500., 2., 0.01, 0.5, 22.09082, 0.62065,-0.02, 1.50614, -0.25346,
     22.70, 16.56, -0.01, 0.24754, -1.81373, 1.0945, 0.0999, -1.6033,
     1.6, 0.95, 1.5);

  g4m::incrementCurvesHf rtLong  //Long rotation times
    (150, 9.0, 0., -1.5, -0.2,
     0., 0.9, -0.8242, -0.4273, -0.4, -1.476, 4.283, -0.3, 3.610, -1.071,
     0.1, 1., -2.0670, -0.3028, 0.5, 1.5, 150, 0.01, 0.5, 0.5,
     0.8, 1./500., 2., 0.01, 0.5, 22.09082, 0.62065,-0.015, 1.50614, -0.25346,
     22.70, 16.56, -0.008, 0.24754, -1.81373, 1.0945, 0.0999, -1.6033,
     1.6, 0.95, 1.5);



  g4m::incrementCurvesHf spruceHf //Spruce Assmann
    (151.4, //c0
     13.87, -3.54, //c1
     -3.144, 0.760, //c2
     0., 0.9, -0.8242, -0.4273,                 //maxDens0
     -0.4, -1.476, 4.283, -0.3, 3.610, -1.071,  //maxDens1
     0.1, 1., -2.0670, -0.3028,                 //maxDens2
     0.5,                                       //maxDens3
     1.5, 150, 0.01, 0.5, 0.5,                  //imul0
     0.8, 1./500., 2., 0.01, 0.5,               //imul0
     22.09082, 0.62065, -0.01965, 1.50614, -0.25346, //h
     22.70, 16.56,                              //d0
     -0.01068, 0.24754, -1.81373,               //d1
     1.0945, 0.0999, -1.6033,                   //d2
     1.6,                                       //dmul
     0.95,                                      //iCrit
     1.5);                                      //MAI

  g4m::incrementCurvesHf poplarHf  //Poplar Schober
    (45.6, //c0
     8.73, -0.72, //c1
     -2.84, 0.30, //c2
     0., 0.9, -0.8242, -0.4273,                 //maxDens0
     -0.4, -1.476, 4.283, -0.3, 3.610, -1.071,  //maxDens1
     0.1, 1., -2.0670, -0.3028,                 //maxDens2
     0.5,                                       //maxDens3
     1.5, 150, 0.01, 0.5, 0.5,                  //imul0
     0.8, 1./500., 2., 0.01, 0.5,               //imul0
     22.09082, 0.62065, -0.01965, 1.50614, -0.25346, //h
     22.70, 16.56,                              //d0
     -0.01068, 0.24754, -1.81373,               //d1
     1.0945, 0.0999, -1.6033,                   //d2
     1.6,                                       //dmul
     0.95,                                      //iCrit
     1.5);                                      //MAI



  g4m::incrementCurvesAs spruceAssmannAs (-0.25,-2.2232,-1.0051,0.5819,168.882,80.586,4.478,-1.387,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Spruce Assmann



  g4m::incrementCurvesAs birkeAs (-0.25,-1.5,-0.4606,1.1703,80,50,1.995,-1.688,0.7202,0,0,0,-0.4206*2,0,0,0,0,0,1./3.,0,0,0,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,28.21854,0.69093,-0.02408,1.1495,-0.38323,359.321356,0,-0.002412,1.975119,-1,0.9,0,0,1.6,0.95,1.);  //Birch Schober

  g4m::incrementCurvesAs bucheAs (-0.17,-1.5,-0.2632,1.7216,150,200,2.442,-1.403,0.5,0.4,-1.187,1.276,-0.3229288*2.,0,0,0,0,0,0.3,-1,-2,-0.5,0.5,1.5,300,0.01,0.5,0.5,0.8,1./1000.,2,0.01,0.5,26.23477,0.54207,-0.02244,2.83767,-0.50563,15.83,74.71,-4.159e-05,-0.9923,-0.004373,1.091,-0.2611,-0.324,1.6,0.95,1.);//Beech Schober

  g4m::incrementCurvesAs eicheAs (-0.2,-1.3,-1.349,0.903,200,400,3.584,-3.167,0.5,0.3,-2.965,3.313,-0.4,-0.8641,0.2251,0,0,0,0.25,-1,-2,-0.5,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,29.37228,0.34116,-0.01368,1.31252,-0.48015,-86.8528,308.9106,-0.791,406.4532,1.1412,0.7776,-0.3564,-0.3578,1.6,0.95,1.);//Oak Schober

  g4m::incrementCurvesAs fichteAs (-0.3,-1.5,-0.4623,1.7642,100,150,2.392,-1.677,0.7084,0,0,0,-0.2924*2.,0,0,0,0,0,1./6.,0,0,0,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,29.09635,0.40238,-0.02657,2.94636,-0.6358,-19.461123,148.221898,-0.001119,0,0,1.09096,0.441565,-0.985074,1.6,0.95,1.); //Spruce Schober

  g4m::incrementCurvesAs kieferAs (-0.25,-1.5,-1.924,0.3958,150,150,1.848,-2.553,0.7132,0,0,0,-0.3560*2.,0,0,0,0,0,1./5.,0,0,0,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,27.0265,0.58402,-0.01938,1.37488,-0.24993,45.136126,15,-0.009022,0.31607,-1.603006,1.021864,0.010874,-2.59959,1.6,0.95,1.); //Pine Schober

  g4m::incrementCurvesAs laercheAs (-0.25,-1,-1.4586,0.7094,180,100,3.11,-1.958,0.7254,0,0,0,-0.1579*2.,0,0,0,0,0,1./12.,0,0,0,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,28.17079,0.47984,-0.02412,1.45201,-0.13738,45.48136,17.22811,-0.03933,6.58638,-0.43354,0.85409,0.06031,-3.22827,1.6,0.95,1.); //Larch Schober

  g4m::incrementCurvesAs tanneAs (-0.3,-1.8,-0.2965,1.754,100,150,0.4784,-0.664,0.6045,0,0,0,-0.3426*2.,0,0,0,0,0,1./4.,0,0,0,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,26.90735,0.51876,-0.01789,3.2034,-0.56154,184.42266,115.0486,-0.01765,8.8706,0.58547,0.25676,-0.82119,-0.08923,1.6,0.95,1.); //Fir Schober



  g4m::incrementCurvesAs pineAs  //Pine Anatoly
    (-0.3835, -0.2416, -1.7576, 1.1638,         //k
     170, 114.343, -2.804, 1.044,               //tMax
     0., 0.9, -0.8242, -0.4273,                 //maxDens0
     -0.4, -1.476, 4.283, -0.3, 3.610, -1.071,  //maxDens1
     0.1, 1., -2.0670, -0.3028,                 //maxDens2
     0.5,                                       //maxDens3
     1.5, 150, 0.01, 0.5, 0.5,                  //imul0
     0.8, 1./500., 2., 0.01, 0.5,               //imul0
     22.09082, 0.62065, -0.01965, 1.50614, -0.25346, //h
     22.70, 16.56,                              //d0
     -0.01068, 0.24754, -1.81373,               //d1
     1.0945, 0.0999, -1.6033,                   //d2
     1.6,                                       //dmul
     0.95,                                      //iCrit
     1.5);                                      //MAI

  g4m::incrementCurvesAs beechAs (0,-0.5998,-0.2467,0.7674,245.5516,100,2.6345,-0.8978,0.69135,0,0,0,-0.03177,0,0,0,0,0,1./8.-1.,1,0,0,0.5,1.5,300,0.01,0.5,0.5,0.8,1./1000.,2,0.01,0.5,21.29459,0.48722,-0.01967,1.81479,-0.29145,30.707,7.008,-0.01051,-0.19793,0.2977,1.423,1.025,-16.85,1.6,0.95, 1.); //Beech Anatoly

  g4m::incrementCurvesAs birchAs (0,-0.7422,-0.54,0.5719,136.958,100,0.2972,-0.7543,0,0.9,-0.953,-0.9236,-0.4,1.052,0.108,0,0,0,0.1,1,-2.5,-0.4,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,23.23597,0.44554,-0.02485,1.36973,-0.42941,13.61,10.69,-0.02688,0.24196,-0.7015,1.337,0.0708,-2.1515,1.6,0.95, 1.); //Birch Anatoly

  g4m::incrementCurvesAs firAs (-0.4562,-0.7403,-1.0772,1.4803,0.6713,300,-0.2151,-0.9929,0.5,0.2,-0.7642,0.3156,-0.4,0.4468,0.1425,0,0,0,0.25,-1,-2,-0.5,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,24.82935,0.60708,-0.0212,2.41308,-0.48246,16.11,17.78,-0.01436,0.37424,-1.52401,2.282,1.2718,-0.7707,1.6,0.95, 1.); //Fir Anatoly

  g4m::incrementCurvesAs larchAs (0,-0.388,-0.01226,0.85934,195.3724,600,0.9883,1.0784,0,0.9,-2.1347,-0.3437,-0.4,1.3238,0.4061,0,0,0,0.1,1,-2.5,-0.3,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,23.63487,0.50281,-0.01557,1.16199,-0.18673,25.196,9.118,-0.01376,0.64637,-0.79909,1.0817,0.1667,-0.9408,1.6,0.95, 1.); //Larch Anatoly

  g4m::incrementCurvesAs oakAs (0,-0.6,-0.4419,0.3179,16.6688,300,-0.6066,-1.1243,0.7,0.3,-0.4339,0.5288,-0.4,2.01561,-0.07354,0,0,0,0.1,1,-3.5,0.3,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,21.26281,0.51987,-0.01901,1.34081,-0.10979,-7.511,41.689,-0.02201,0.58055,1.72465,3.6757,1.7544,0.3264,1.6,0.95, 1.); //Oak Anatoly

  g4m::incrementCurvesAs spruceAs (0,-0.9082,-0.2728,0.6483,209.6889,300,1.8536,0.4811,0,0.9,-0.143,-0.5915,-0.4,0.4507,0.3713,0,0,0,0.1,1,-2,-0.3,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,22.58866,0.6168,-0.02102,2.4176,-0.35816,16.11,17.78,-0.01436,0.37424,-1.52401,2.282,1.2718,-0.7707,1.6,0.95, 1.); //Spruce Anatoly



  g4m::incrementCurvesAs pinusHalepensisAs //Montero Spain
    (-0.3,-0.306,-2.052,1.673,150,130,1.898,-1.141,0.92,0.07,-4.25,6.168,-0.4,0.93237,-0.00468,0,0,0,0.25,-1.,-2,-0.5,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,26.59488,0.62839,-0.02023,1.05953,-0.03489,18.7252,46.3833,-0.2643,14.1425,-0.6368,0.8948,0.000422233,-4.9625,1.6,0.95,1.);

  g4m::incrementCurvesAs pinusSylvestrisAs  //Abejon Spain
    (0,-0.54,-0.3369,0.5073,225,65,16.69,-21.22,0.83,0.15,-2.819,2.885,-0.1,0.3007,0.1045,0,0,0,0.25,-1,-2,-0.5,0.5,1.5,150,0.01,0.5,0.5,0.8,1./500.,2,0.01,0.5,29.94785,0.74558,-0.01588,1.32741,0.19407,20.34,36.86,-2.08e-05,-0.9984,-0.000227187,1.189,0,1,1.6,0.95,1.);



  g4m::incrementCurvesAs ilvessaloBirchAs (-0.1,-0.5560,-0.1365,-2.0064,400,-325.070,4.985,-3.5,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Birch Finnland Ilvessalo



  g4m::incrementCurvesAs pqSpruceAs (-0.2,-0.4,-0.1220,1.8345,350,100,0,0.776,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Spruce PipeQual

  g4m::incrementCurvesAs pqPineAs (-0.2,-0.5,-0.6361,1.1998,200,300,1.816,-1.246,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //pine PipeQual


  g4m::incrementCurvesAs piBeechAs (-0.2671,-0.2334,-3.8842,-1.8490,474.789,655.717,-7.068,4.402,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Beech Picus

  g4m::incrementCurvesAs piSpruceAs (-0.3641,-52.7111,-6.1741,0.2943,-646.403,945.370,-1.643,-1.468,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Spruce Picus

  g4m::incrementCurvesAs piOakAs (-0.1781,-1.0421,-3.7204,1.0574,300,1512.405,2.885,-3.722,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Oak Picus

  g4m::incrementCurvesAs piPineAs (-0.2523,-0.3219,-14.8589,-2.8190,261.892,323.775,-9.763,4.875,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Pine Picus

  g4m::incrementCurvesAs piLarchAs (-2.936e-01,-4.020e-02,-2.855e+06,-1.247e+01,285.788,116.032,-17.287,5.248,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Larch Picus

  g4m::incrementCurvesAs piFirAs (-0.3449,-1.3433,-3.4040,0.6076,186.619,142.930,1.337,-3.258,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Fir Picus


  g4m::incrementCurvesAs goPineAs (1.246963,-1.097645,0.172259,-0.006605,3000,1400,2.875,-2,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Pine Gotilwa

  g4m::incrementCurvesAs goAleppoAs (-0.08,0.02212,-0.05967,-1.37455,2600,1200,1.491,-2,0.753,0,0,0,-0.1951*2.,0,0,0,0,0,1./6.,0,0,0,0.5,-0.266,150,0.000254,2.496e-09,8.205,0.4364,1./500.,2.169,0.01,2.178,24.62079,0.46573,-0.02426,2.58884,-0.30364,700,0,-0.0005094,0.9633471,-0.886505,2,1.2122679,0.1034592,1.6,0.95,1.5);  //Aleppo Pine Gotilwa

  std::valarray<g4m::incrementCurves*> sp(33);
  sp[0] = &rtShort;
  sp[1] = &rtNormal;
  sp[2] = &rtLong;
  sp[3] = &spruceHf;
  sp[4] = &poplarHf;
  sp[5] = &spruceAssmannAs;
  sp[6] = &birkeAs;
  sp[7] = &bucheAs;
  sp[8] = &eicheAs;
  sp[9] = &fichteAs;
  sp[10] = &kieferAs;
  sp[11] = &laercheAs;
  sp[12] = &tanneAs;
  sp[13] = &pineAs;
  sp[14] = &beechAs;
  sp[15] = &birchAs;
  sp[16] = &firAs;
  sp[17] = &larchAs;
  sp[18] = &oakAs;
  sp[19] = &spruceAs;
  sp[20] = &pinusHalepensisAs;
  sp[21] = &pinusSylvestrisAs;
  sp[22] = &ilvessaloBirchAs;
  sp[23] = &pqSpruceAs;
  sp[24] = &pqPineAs;
  sp[25] = &piBeechAs;
  sp[26] = &piSpruceAs;
  sp[27] = &piOakAs;
  sp[28] = &piPineAs;
  sp[29] = &piLarchAs;
  sp[30] = &piFirAs;
  sp[31] = &goPineAs;
  sp[32] = &goAleppoAs;

  std::valarray<double> mai = {0.1, 0.25, 0.5, 0.75, 1, 1.5, 2, 3, 5, 10, 15, 20, 30};

  cout << fixed << setprecision(1);
  for(unsigned int j=0; j<mai.size(); ++j) {
    cout << mai[j];
    for(unsigned int i=0; i<sp.size(); ++i) {
      sp[i]->setMai(mai[j]);
      double topt = sp[i]->gTOpt();
      cout << "\t" << topt;
    }
    cout << endl;
  }
  cout << endl;
  for(unsigned int j=0; j<mai.size(); ++j) {
    cout << mai[j];
    for(unsigned int i=0; i<sp.size(); ++i) {
      sp[i]->setMai(mai[j]);
      double topt = sp[i]->gTOpt();
      cout << "\t" << sp[i]->gTcp(topt);
    }
    cout << endl;
  }
  cout << endl;
  for(unsigned int j=0; j<mai.size(); ++j) {
    cout << mai[j];
    for(unsigned int i=0; i<sp.size(); ++i) {
      sp[i]->setMai(mai[j]);
      double topt = sp[i]->gTOpt();
      cout << "\t" << sp[i]->gD(topt);
    }
    cout << endl;
  }
  cout << endl;
  for(unsigned int j=0; j<mai.size(); ++j) {
    cout << mai[j];
    for(unsigned int i=0; i<sp.size(); ++i) {
      sp[i]->setMai(mai[j]);
      double topt = sp[i]->gTOpt();
      cout << "\t" << sp[i]->gH(topt);
    }
    cout << endl;
  }
  cout << endl;

  g4m::incrementTab iTab(rtShort,
     5.,      //maiMax
     0.25,   //maiStep
     600,    //tMax
     1,      //tStep
     0.25,   //sdNatStep
     1.5,    //sdTabMax
     0.25,   //sdTabStep
     10.);    //timeframe
  {
    double mai = 1.5;
    cout << "mai\tgwl\tinc\tbm\tdbm\tdbh\theight\tmai" << endl;
    for(int i=0; i<60; ++i) {
      cout << i*10 <<"\t"<< iTab.gGwlt(i*10.,mai) <<"\t"<< iTab.gIncGwlt(i*10.,mai) <<"\t"<< iTab.gBmt(i*10.,mai) <<"\t"<< iTab.gIncBmt(i*10.,mai) <<"\t"<< iTab.gDbht(i*10.,mai) <<"\t"<< iTab.gHeight(i*10.,mai) <<"\t"<< iTab.gMait(i*10.,mai) << endl;
    }
    cout << endl;
    iTab.set(rtNormal, 5.,0.25,600,1,0.25,1.5,0.25,10.);
    for(int i=0; i<60; ++i) {
      cout << i*10 <<"\t"<< iTab.gGwlt(i*10.,mai) <<"\t"<< iTab.gIncGwlt(i*10.,mai) <<"\t"<< iTab.gBmt(i*10.,mai) <<"\t"<< iTab.gIncBmt(i*10.,mai) <<"\t"<< iTab.gDbht(i*10.,mai) <<"\t"<< iTab.gHeight(i*10.,mai) <<"\t"<< iTab.gMait(i*10.,mai) << endl;
    }
    cout << endl;
    iTab.set(rtLong, 5.,0.25,600,1,0.25,1.5,0.25,10.);
    for(int i=0; i<60; ++i) {
      cout << i*10 <<"\t"<< iTab.gGwlt(i*10.,mai) <<"\t"<< iTab.gIncGwlt(i*10.,mai) <<"\t"<< iTab.gBmt(i*10.,mai) <<"\t"<< iTab.gIncBmt(i*10.,mai) <<"\t"<< iTab.gDbht(i*10.,mai) <<"\t"<< iTab.gHeight(i*10.,mai) <<"\t"<< iTab.gMait(i*10.,mai) << endl;
    }
    cout << endl;
  }

  g4m::incrementTab iTabShort(rtShort,30.,0.25,600,1,0.25,1.5,0.25,10.);
  g4m::incrementTab iTabNormal(rtNormal,30.,0.25,600,1,0.25,1.5,0.25,10.);
  g4m::incrementTab iTabLong(rtLong,30.,0.25,600,1,0.25,1.5,0.25,10.);
  g4m::incrementTab* iiTab[3];
  iiTab[0] = &iTabShort;
  iiTab[1] = &iTabNormal;
  iiTab[2] = &iTabLong;
  double bm=30.;
  for(unsigned int j=0; j<mai.size(); ++j) {
    double mmai = mai[j];
    cout << mmai << "\t" << bm;
    for(int scen=0; scen<3; ++scen) { //0..maxInc, 1..maxBm, 3..curBm
      for(int tab=0; tab<3; ++tab) {
	double uoptt = 0.;
	if(scen<2) {uoptt = iiTab[tab]->gTopt(mmai, scen);}
	else {uoptt = iiTab[tab]->gUt(bm, mmai);}
	cout << "\t" << uoptt;
	cout << "\t" << iiTab[tab]->gAvgBmt(uoptt, mmai);
	cout << "\t" << iiTab[tab]->gMait(uoptt, mmai);
	cout << "\t" << iiTab[tab]->gDbht(uoptt, mmai);
      }
    }
    cout << endl;
  }



  return(0);
}
