#ifndef LVGLPORTANDROID_APPLIST_H
#define LVGLPORTANDROID_APPLIST_H

#include <iostream>
#include <map>
#include <lv_demos.h>
#include "pvz/pvz.h"
#include "tetris/cubegame.h"
#include "chess/LvChess.h"

using namespace std;

const map<string, void (*)(void)> lv_ci_example_list{
        {"default",   lv_demo_widgets},
        {"benchmark", lv_demo_benchmark},
        {"widgets",   lv_demo_widgets},
        {"music",     lv_demo_music},
        {"pvz",       pvz_start},
        {"tetris",    cube_game_start},
        {"chess",    lv_chess_start}
};

#endif //LVGLPORTANDROID_APPLIST_H
