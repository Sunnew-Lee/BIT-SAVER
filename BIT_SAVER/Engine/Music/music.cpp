#include "music.h"
#include <fstream>
#include <cstdio>
#include <sstream>
#include <vector>
#include "../../Engine/Input/Input.h"
#include "../Engine.h"

using namespace std;
void Music::Init()
{
    result = FMOD_System_Create(&pSystem, FMOD_VERSION);
    ErrorCheck(result);
    result = FMOD_System_Init(pSystem, MUSIC_END, FMOD_INIT_NORMAL, nullptr);
    ErrorCheck(result);

    //MusicName.push_back("../sound/boss.mp3");
    MusicName.push_back("../sound/rewind.mp3");
    MusicName.push_back("../sound/button2.mp3");
    //MusicName.push_back("../sound/120.mp3");

    Load();
}

void Music::Load()
{
    result = FMOD_System_CreateSound(pSystem, "../sound/boss.mp3", FMOD_DEFAULT, nullptr, &pSound[BOSS]);
    ErrorCheck(result);

    result = FMOD_System_CreateSound(pSystem, "../sound/Energy.mp3", FMOD_DEFAULT, nullptr, &pSound[ENERGY]);
    ErrorCheck(result);

    result = FMOD_System_CreateSound(pSystem, "../sound/button2.mp3", FMOD_DEFAULT, nullptr, &pSound[SOUND_EFFECT1]);
    ErrorCheck(result);

    result = FMOD_System_CreateSound(pSystem, "../sound/120.mp3", FMOD_DEFAULT, nullptr, &pSound[BPM120]);
    ErrorCheck(result);

    //result = FMOD_System_CreateSoundGroup(pSystem, "BGM", &bgm_group);
    //ErrorCheck(result);
    //result = FMOD_System_CreateSoundGroup(pSystem, "SFX", &sfx_group);
    //ErrorCheck(result);

}
void Music::Play(int sound_num)
{
    result = FMOD_System_PlaySound(pSystem, pSound[sound_num], 0, 0, &pChannel[sound_num]);
    ErrorCheck(result);
}

void Music::Stop(int sound_num)
{
    result = FMOD_Channel_Stop(pChannel[sound_num]);
    ErrorCheck(result);
}

void Music::Update()
{
    result = FMOD_System_Update(pSystem);
}

void Music::Resume(int sound_num)
{
    result = FMOD_Channel_SetPaused(pChannel[sound_num], false);
    ErrorCheck(result);
}

void Music::Pause(int sound_num)
{
    result = FMOD_Channel_SetPaused(pChannel[sound_num], false);
    ErrorCheck(result);
}

void Music::volumeUp(int sound_num)
{
    if (volume < SOUND_MAX) {
        volume += SOUND_WEIGHT;
    }
    result = FMOD_Channel_SetVolume(pChannel[sound_num], volume);
    ErrorCheck(result);
}

void Music::volumeDown(int sound_num)
{
    if (volume > SOUND_MIN) {
        volume -= SOUND_WEIGHT;
    }
    result = FMOD_Channel_SetVolume(pChannel[sound_num], volume);
    ErrorCheck(result);
}


void Music::Release()
{
    FMOD_System_Close(pSystem);
    FMOD_System_Release(pSystem);

}

void Music::ErrorCheck(FMOD_RESULT results)
{

    if (results != FMOD_OK) {
        Engine::GetLogger().LogError("Error: ");
        exit(EXIT_FAILURE);
    }

}



