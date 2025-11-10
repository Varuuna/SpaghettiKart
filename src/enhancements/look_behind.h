#ifndef LOOK_BEHIND_H
#define LOOK_BEHIND_H

#include <common_structs.h>
#include <camera.h>

void look_behind_init(void);
void look_behind_update_input(Player* player, struct Controller* controller, s8 playerId);
void look_behind_apply_camera_transform(Camera* camera, Player* player, s8 playerId);
s8 is_look_behind_active(s8 playerId);

extern s8 gLookBehindActive[8];

#endif // LOOK_BEHIND_H