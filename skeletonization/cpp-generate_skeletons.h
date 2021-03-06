#ifndef __CPP_GENERATE_SKELETONS__
#define __CPP_GENERATE_SKELETONS__

#include <inttypes.h>


// function calls across cpp files
void CppTopologicalThinning(const char *prefix, int64_t skeleton_resolution[3], const char *lookup_table_directory);
void CppFindEndpointVectors(const char *prefix, int64_t skeleton_resolution[3], float output_resolution[3]);
void CppApplyUpsampleOperation(const char *prefix, int64_t *input_segmentation, int64_t skeleton_resolution[3], float output_resolution[3]);


// universal variables and functions

static const int IB_Z = 0;
static const int IB_Y = 1;
static const int IB_X = 2;

#endif
