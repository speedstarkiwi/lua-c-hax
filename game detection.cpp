// I made this in a video on YouTube where I explain how it works

bool checkplaceid_engine(uintptr_t rl, double id) {
    if (id == 000000 || rl == 000000) {
        return false; 
        exit(0);
    }
    else {
        lua_getglobal((lua_State*)rl, "game");
        lua_getfield((lua_State*)rl, -1, "PlaceId");

        double place = lua_tonumber((lua_State*)rl, -1);
        if (id == place) {
            return true;
        }
        else
            return false;
    }
}

if (checkplaceid_engine(rL, 69520) == true))
  //game found
  else
    //game not found :(
