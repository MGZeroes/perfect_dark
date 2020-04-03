#ifndef _IN_GAME_WEATHER_H
#define _IN_GAME_WEATHER_H
#include <ultra64.h>
#include "types.h"

u32 weatherRender(void);
void func0f1312d8(struct weatherparticledata *data, u32 arg1, f32 arg2, f32 arg3);
struct weatherparticledata *weatherAllocateParticles(void);
void func0f131610(struct weatherdata *weather);
void func0f131678(s32 arg0);
void weatherSetIntensity(s32 intensity);
void weatherTickRain(struct weatherdata *weather);
void weatherTickSnow(struct weatherdata *weather);
void weatherConfigureRain(u32 intensity);
void weatherConfigureSnow(u32 intensity);
bool weatherIsRoomWeatherProof(u32 param_1);
u32 weatherRenderRain(void);
u32 weatherRenderSnow(void);
void weatherFree(void);

#endif
