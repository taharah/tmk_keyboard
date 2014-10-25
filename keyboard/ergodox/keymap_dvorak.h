static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  |   \  |           |   '  |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  | ~Fn1 |           | ~Fn3 |   Y  |   U  |   I  |   O  |   P  |   [    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LShift |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | RShift |
     * |--------+------+------+------+------+------|  Fn0 |           | ~Fn4 |------+------+------+------+------+--------|
     * | LCtrl  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RCtrl  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | ~Fn1 | ~Fn2 | Caps | LAlt | LGui |                                       |  Lft |  Up  |  Dn  | Rght | ~Fn4 |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | +Fn2 | Home |       | PgUp | Del  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 | BkSp |  ESC |------|       |------| Enter| Space|
     *                                 |      |      |  Spc |       | Ins  |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // layout: layer 0: default
        // left hand
        GRV,1,2,3,4,5,FN29,
        ESC,SCLN,COMM,DOT,P,Y,LBRC,
        TAB,A,O,E,U,I,
        FN0,QUOT,Q,J,K,X,FN1,
        APP,LGUI,LALT,LCTRL,LSFT,
                                HOME, END,
                                      FN2,
                              SPC,FN4,FN3,
        // right hand
        CAPS,6,7,8,9,0,EQL,
        RBRC,F,G,C,R,L,BSLS,
             D,H,T,N,S,MINS,
        FN5,B,M,W,V,Z,SLSH,
             RSFT,RCTRL,RALT,RGUI,APP,
        PGUP,PGDN,
        FN6,
        FN7,FN8,BSPC
    ),

    KEYMAP(  // layout: layer 1: F-keys, movement, and special functions, e.g., cut, copy, and paste
        // left hand
        NO,F1,F2,F3,F4,F5,F6,
        TRNS,SLCK,WH_U,UP,WH_D,PSCR,NO,
        TRNS,WH_L,LEFT,DOWN,RIGHT,WH_R,
        TRNS,NO,PGUP,PGDN,HOME,END,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                       NO,NO,
                                        TRNS,
                              TRNS,TRNS,TRNS,
        // right hand
             F7,F8,F9,F10,F11,F12,NO,
             NO,FN9,FN10,FN11,NO,NO,NO,
                FN12,FN13,FN14,FN15,FN16,NO,
             NO,FN17,FN18,_VOLUP,_VOLDOWN,_MUTE,NO,
                TRNS,TRNS,TRNS,TRNS,TRNS,
        NO,NO,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 2: Numbers and symbols
        // left hand
        NO,NO,NO,NO,NO,NO,NO,
        TRNS,FN19,FN20,FN21,FN22,FN23,NO,
        TRNS,1,2,3,4,5,
        TRNS,NO,PMNS,PPLS,DOT,LBRC,NO,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             NO,NO,NO,NO,NO,NO,NO,
             NO,FN24,FN25,FN26,FN27,FN28,NO,
                  6,7,8,9,0,TRNS,
             TRNS,RBRC,COMM,PSLS,PEQL,NO,NO,
                  TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 3: F-keys only
        // left hand
        GRV, 1, 2, 3, 4, 5, TRNS,
        ESC, Q, E, R, T, Y, U,
        TAB, G, A, W, D, H,
        LSFT, Z, X, C, V, B, J,
        F5, F4, F3, F2, F1,
                                          NO,NO,
                                             NO,
                                     FN1,FN2,NO,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  NO,
             NO,  NO,  F13,  F14,  F15,  F16,  NO,
                  NO,  F17,  F18,  F19,  F20,  NO,
             NO,  NO,  F21,  F22, F23, F24, NO,
                       NO,NO,NO,NO,NO,
        NO,NO,
        NO,
        NO,NO,NO
    ),
/*
    KEYMAP(  // layout: layer 4: F-keys + cursor
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        FN7, NO,  PGUP,UP,  PGDN,PGUP,TRNS,
        TRNS,NO,  LEFT,DOWN,RGHT,PGDN,
        TRNS,NO,  NO,  END, HOME,NO,  TRNS,
        FN5, TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, MINS,
             TRNS,PGUP,PGUP,UP,  PGDN,NO,  FN7,
                  PGDN,LEFT,DOWN,RGHT,NO,  TRNS,
             TRNS,NO,  HOME,END, NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),

    KEYMAP(  // layout: layer 5: Workman layout
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,Q,   D,   R,   W,   B,   TRNS,
        TRNS,A,   S,   H,   T,   G,
        TRNS,Z,   X,   M,   C,   V,   TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,J,   F,   U,   P,   4,   TRNS,
                  Y,   N,   E,   O,   I,   TRNS,
             TRNS,K,   L,   TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer N: transparent on edges, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // layout: layer N: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_MODS_KEY(MOD_LSFT, KC_TAB),               // SHIFT+TAB
    [1] = ACTION_LAYER_TOGGLE(1),                          // LAYER 1 TOGGLE
    [2] = ACTION_MODS_KEY(MOD_LALT, KC_TAB),               // ALT+TAB
    [3] = ACTION_MODS_KEY(MOD_LALT | MOD_LSFT, KC_TAB),    // ALT+SHIFT+TAB
    [4] = ACTION_LAYER_TAP_KEY(1, KC_ENT),                 // LAYER 1 TEMP TOGGLE AND ENTER ON PRESS
    [5] = ACTION_LAYER_TOGGLE(2),                          // LAYER 2 TOGGLE
    [6] = ACTION_MODS_KEY(MOD_LCTL, KC_TAB),               // CTRL+TAB
    [7] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_TAB),    // CTRL+SHIFT+TAB
    [8] = ACTION_LAYER_TAP_KEY(1, KC_DEL),                 // LAYER 2 TEMP TOGGLE AND DELETE ON PRESS
    [9] = ACTION_MODS_KEY(MOD_LCTL, KC_T),                 // CTRL+T
    [10] = ACTION_MODS_KEY(MOD_LCTL, KC_Z),                // CTRL+Z
    [11] = ACTION_MODS_KEY(MOD_LCTL, KC_A),                // CTRL+A
    [12] = ACTION_MODS_KEY(MOD_LCTL, KC_N),                // CTRL+N
    [13] = ACTION_MODS_KEY(MOD_LCTL, KC_X),                // CTRL+X
    [14] = ACTION_MODS_KEY(MOD_LCTL, KC_C),                // CTRL+C
    [15] = ACTION_MODS_KEY(MOD_LCTL, KC_V),                // CTRL+V
    [16] = ACTION_MODS_KEY(MOD_LCTL, KC_F),                // CTRL+F
    [17] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_N),     // CTRL+SHIFT+N
    [18] = ACTION_MODS_KEY(MOD_LCTL, KC_Y),                // CTRL+Y
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_1),                // UPPERCASE NUMBER SYMBOLS 0-9
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [26] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [27] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [29] = ACTION_LAYER_TOGGLE(3),
};

static const uint16_t PROGMEM fn_actions_3[] = {
    [1] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SPC),
    [2] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_K),
};

#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_3_SIZE   (sizeof(fn_actions_3) / sizeof(fn_actions_3[0]))

/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);

    action_t action;
    action.code = ACTION_NO;

    if (layer == 3 && FN_INDEX(keycode) < FN_ACTIONS_3_SIZE) {
        action.code = pgm_read_word(&fn_actions_3[FN_INDEX(keycode)]);
    }

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}
