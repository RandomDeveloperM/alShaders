#pragma once

#include <ai.h>
#include <map>
#include <string>
#include <vector>

struct ShaderData
{
   AtSampler* diffuse_sampler;
   AtSampler* glossy_sampler;
   AtSampler* glossy2_sampler;
   AtSampler* refraction_sampler;
   AtSampler* backlight_sampler;
   int GI_diffuse_depth;
   int GI_reflection_depth;
   int GI_refraction_depth;
   int GI_glossy_depth;
   int GI_diffuse_samples;
   int diffuse_samples2;
   int GI_glossy_samples;
   int glossy_samples2;
   int GI_glossy2_samples;
   int glossy2_samples2;
   int GI_refraction_samples;
   int refraction_samples2;
   int diffuse_sample_offset;
   int glossy_sample_offset;
   int glossy2_sample_offset;
   int refraction_sample_offset;
   int backlight_sample_offset;
   int total_samples;
   AtCritSec cs;
   std::map<AtNode*, int> lightGroups;
   std::map<AtNode*, float> shadowDensities;
   bool specular1NormalConnected;
   bool specular2NormalConnected;
   bool lightGroupsIndirect;
   bool standardAovs;
   bool transmitAovs;
   int numLights;
   bool rrTransmission;
   int rrTransmissionDepth;

   // data for doing RR
   int AA_samples;
   float AA_samples_inv;
   int total_depth;
   int* perm_table;
   int* perm_table_diffuse;
   int* perm_table_spec1;
   int* perm_table_spec2;
   int* perm_table_backlight;
   int xres;

   float specular1IndirectClamp;
   float specular2IndirectClamp;
   float transmissionClamp;

   // AOV names
   std::vector<std::string> aovs;
   std::vector<std::string> aovs_rgba;
};

#define RAND_STREAM_ALSURFACE_RR_PERMUTE 0
#define RAND_STREAM_ALSURFACE_RR_DIFF_PERMUTE 10000
#define RAND_STREAM_ALSURFACE_RR_SPEC1_PERMUTE 20000
#define RAND_STREAM_ALSURFACE_RR_SPEC2_PERMUTE 30000
#define RAND_STREAM_ALSURFACE_RR_BACKLIGHT_PERMUTE 40000


#define TEA_STREAM_ALSURFACE_RR_OFFSET 0
#define TEA_STREAM_ALSURFACE_RR_JITTER 1

#define TEA_STREAM_ALSURFACE_RR_DIFF_OFFSET 2
#define TEA_STREAM_ALSURFACE_RR_DIFF_JITTER 3

#define TEA_STREAM_ALSURFACE_RR_SPEC1_OFFSET 4
#define TEA_STREAM_ALSURFACE_RR_SPEC1_JITTER 5

#define TEA_STREAM_ALSURFACE_RR_SPEC2_OFFSET 6
#define TEA_STREAM_ALSURFACE_RR_SPEC2_JITTER 7

#define TEA_STREAM_ALSURFACE_RR_BACKLIGHT_OFFSET 8
#define TEA_STREAM_ALSURFACE_RR_BACKLIGHT_JITTER 9
