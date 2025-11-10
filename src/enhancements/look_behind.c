#include "look_behind.h"
#include <libultraship.h>

s8 gLookBehindActive[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

void look_behind_init(void) {
    for (int i = 0; i < 8; i++) {
        gLookBehindActive[i] = 0;
    }
}

void look_behind_update_input(Player* player, struct Controller* controller, s8 playerId) {
    if (controller->button & L_CBUTTONS) {
        gLookBehindActive[playerId] = 1;
    } else {
        gLookBehindActive[playerId] = 0;
    }
}

void look_behind_apply_camera_transform(Camera* camera, struct Controller* controller, s8 playerId) {
    // Apply look-behind camera transformation
    // This will modify the camera's position and rotation
    // Implementation details here...
    if (gLookBehindActive[playerId]) {
        camera->rot[0] = 5000;
    }
    return 0;
}

s8 is_look_behind_active(s8 playerId) {
    if (playerId >= 0 && playerId < 8) {
        return gLookBehindActive[playerId];
    }
    return 0;
}