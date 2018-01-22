#pragma once

#include "realtype.h"

////
// Global types
////
typedef struct
{
    real S;
    real X;
    real T;
    real R;
    real V;
} TOptionData;


////
// Global parameters
////
//Number of time steps
#define   NUM_STEPS 2048
//Max option batch size
#define MAX_OPTIONS 1024
