#include "music.h"
#include <fstream>
#include <cstdio>
#include <sstream>
using namespace std;



void Music::SoundSystem()
{
    System_Create(&pSystem);

    pSystem->init(4, FMOD_INIT_NORMAL, NULL);

    pSystem->createSound("../sound/music1.mid", FMOD_LOOP_NORMAL | FMOD_DEFAULT, NULL, &pSound[0]);
}

void Music::Play(int Sound_num)
{
    pSystem->playSound(pSound[Sound_num], NULL, 0, pChannel);
}

void Music::Open()
{
    std::ofstream fout("a.txt", ios_base::binary);


    std::ifstream ifs{ "../sound/music1.mid", std::ios::binary };
    if (!ifs) {
        std::cout << "ERROR: Unable to open scene file: "
            << "music1.mid" << "\n";
        exit(EXIT_FAILURE);
    }
    else
    {
        cout << "hello";
    }

    ifs.seekg(0, std::ios::beg);
    std::string line;

    while (getline(ifs, line))
    {
        std::istringstream line_modelname{ line };
        std::string model_name;
        line_modelname >> model_name;
        fout << model_name << endl;
    }
    fout.close();
    ifs.close();
}