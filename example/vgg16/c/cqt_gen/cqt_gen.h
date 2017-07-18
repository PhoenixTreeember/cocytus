//----------------------------------------------------------------------------------------------------
// This file is automatically generated.
// 2017/07/13 00:00:00
//----------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "cqt.h"
#include "cqt_net.h"

CQT_NET* cqt_init(void);
int cqt_load_weight_from_files(CQT_NET* np, const char *path);
int cqt_run(CQT_NET* np, void *dp);

extern int cqt_process;

// cocytus network
extern CQT_NET g_cqt_vgg16;

//Layers
extern LY_InputLayer input_1;
extern LY_Conv2D block1_conv1;
extern LY_Conv2D block1_conv2;
extern LY_MaxPooling2D block1_pool;
extern LY_Conv2D block2_conv1;
extern LY_Conv2D block2_conv2;
extern LY_MaxPooling2D block2_pool;
extern LY_Conv2D block3_conv1;
extern LY_Conv2D block3_conv2;
extern LY_Conv2D block3_conv3;
extern LY_MaxPooling2D block3_pool;
extern LY_Conv2D block4_conv1;
extern LY_Conv2D block4_conv2;
extern LY_Conv2D block4_conv3;
extern LY_MaxPooling2D block4_pool;
extern LY_Conv2D block5_conv1;
extern LY_Conv2D block5_conv2;
extern LY_Conv2D block5_conv3;
extern LY_MaxPooling2D block5_pool;
extern LY_Flatten flatten;
extern LY_Dense fc1;
extern LY_Dense fc2;
extern LY_Dense predictions;

//weights
extern NUMPY_HEADER nph_block1_conv1_W;
extern NUMPY_HEADER nph_block1_conv1_b;
extern float w_block1_conv1_W[64][3][3][3];
extern float w_block1_conv1_b[64];
extern NUMPY_HEADER nph_block1_conv2_W;
extern NUMPY_HEADER nph_block1_conv2_b;
extern float w_block1_conv2_W[64][64][3][3];
extern float w_block1_conv2_b[64];
extern NUMPY_HEADER nph_block2_conv1_W;
extern NUMPY_HEADER nph_block2_conv1_b;
extern float w_block2_conv1_W[128][64][3][3];
extern float w_block2_conv1_b[128];
extern NUMPY_HEADER nph_block2_conv2_W;
extern NUMPY_HEADER nph_block2_conv2_b;
extern float w_block2_conv2_W[128][128][3][3];
extern float w_block2_conv2_b[128];
extern NUMPY_HEADER nph_block3_conv1_W;
extern NUMPY_HEADER nph_block3_conv1_b;
extern float w_block3_conv1_W[256][128][3][3];
extern float w_block3_conv1_b[256];
extern NUMPY_HEADER nph_block3_conv2_W;
extern NUMPY_HEADER nph_block3_conv2_b;
extern float w_block3_conv2_W[256][256][3][3];
extern float w_block3_conv2_b[256];
extern NUMPY_HEADER nph_block3_conv3_W;
extern NUMPY_HEADER nph_block3_conv3_b;
extern float w_block3_conv3_W[256][256][3][3];
extern float w_block3_conv3_b[256];
extern NUMPY_HEADER nph_block4_conv1_W;
extern NUMPY_HEADER nph_block4_conv1_b;
extern float w_block4_conv1_W[512][256][3][3];
extern float w_block4_conv1_b[512];
extern NUMPY_HEADER nph_block4_conv2_W;
extern NUMPY_HEADER nph_block4_conv2_b;
extern float w_block4_conv2_W[512][512][3][3];
extern float w_block4_conv2_b[512];
extern NUMPY_HEADER nph_block4_conv3_W;
extern NUMPY_HEADER nph_block4_conv3_b;
extern float w_block4_conv3_W[512][512][3][3];
extern float w_block4_conv3_b[512];
extern NUMPY_HEADER nph_block5_conv1_W;
extern NUMPY_HEADER nph_block5_conv1_b;
extern float w_block5_conv1_W[512][512][3][3];
extern float w_block5_conv1_b[512];
extern NUMPY_HEADER nph_block5_conv2_W;
extern NUMPY_HEADER nph_block5_conv2_b;
extern float w_block5_conv2_W[512][512][3][3];
extern float w_block5_conv2_b[512];
extern NUMPY_HEADER nph_block5_conv3_W;
extern NUMPY_HEADER nph_block5_conv3_b;
extern float w_block5_conv3_W[512][512][3][3];
extern float w_block5_conv3_b[512];
extern NUMPY_HEADER nph_fc1_W;
extern NUMPY_HEADER nph_fc1_b;
extern float w_fc1_W[4096][25088];
extern float w_fc1_b[4096];
extern NUMPY_HEADER nph_fc2_W;
extern NUMPY_HEADER nph_fc2_b;
extern float w_fc2_W[4096][4096];
extern float w_fc2_b[4096];
extern NUMPY_HEADER nph_predictions_W;
extern NUMPY_HEADER nph_predictions_b;
extern float w_predictions_W[1000][4096];
extern float w_predictions_b[1000];

//outputs
extern float input_1_output[3][224][224];
extern float block1_conv1_output[64][224][224];
extern float block1_conv2_output[64][224][224];
extern float block1_pool_output[64][112][112];
extern float block2_conv1_output[128][112][112];
extern float block2_conv2_output[128][112][112];
extern float block2_pool_output[128][56][56];
extern float block3_conv1_output[256][56][56];
extern float block3_conv2_output[256][56][56];
extern float block3_conv3_output[256][56][56];
extern float block3_pool_output[256][28][28];
extern float block4_conv1_output[512][28][28];
extern float block4_conv2_output[512][28][28];
extern float block4_conv3_output[512][28][28];
extern float block4_pool_output[512][14][14];
extern float block5_conv1_output[512][14][14];
extern float block5_conv2_output[512][14][14];
extern float block5_conv3_output[512][14][14];
extern float block5_pool_output[512][7][7];
extern float flatten_output[25088];
extern float fc1_output[4096];
extern float fc2_output[4096];
extern float predictions_output[1000];


