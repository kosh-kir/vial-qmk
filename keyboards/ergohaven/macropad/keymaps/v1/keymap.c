#include QMK_KEYBOARD_H
#include "ergohaven.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
                        KC_MUTE,
      KC_7, KC_8,       KC_9,
      KC_4, KC_5,       KC_6,
      KC_1, KC_2,       KC_3,
      KC_0, LAYER_PREV, LAYER_NEXT
  ),
  [1] = LAYOUT(
                        _______,
      KC_HOME, KC_INS,  KC_END,
      PREVWRD, KC_UP,   NEXTWRD,
      KC_LEFT, KC_DOWN, KC_RIGHT,
      KC_DEL,  _______, _______
  ),
  [2] = LAYOUT(
                        KC_BTN3,
      KC_CUT,  KC_COPY, KC_PASTE,
      KC_BTN1, KC_MS_U, KC_BTN2,
      KC_MS_L, KC_MS_D, KC_MS_R,
      KC_PSCR, _______, _______
  ),
  [3] = LAYOUT(
                        KC_MUTE,
      KC_BRID, KC_CPNL, KC_BRIU,
      KC_MYCM, KC_WSCH, KC_MAIL,
      KC_MPRV, KC_MPLY, KC_MNXT,
      KC_CALC, _______, _______
  ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
  [1] = { ENCODER_CCW_CW(KC_PGDN, KC_PGUP) },
  [2] = { ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_90;
}

static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0x7F, 0xBF,
    0xBF, 0xBF,
    0x9F, 0xBF,
    0x7F, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFD,
    0x7F, 0xF5,
    0xF5, 0xFB,
    0xD3, 0xF7,
    0xBF, 0xFF,
    0x5F, 0xBF,
    0x3F, 0x7F,
    0x7F, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0x7F, 0x3F,
    0xFF, 0xD3,
    0x5F, 0xD6,
    0xF3, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFE, 0xFD,
    0xF1, 0xE7,
    0xDF, 0x0F,
    0x3F, 0x7F,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFE, 0xA4,
    0x7E, 0x76,
    0x0A, 0x3F,
    0xBF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFB, 0xF6,
    0xEC, 0x08,
    0x71, 0xE1,
    0x83, 0x07,
    0x67, 0xEF,
    0xEF, 0xEF,
    0xC7, 0x0F,
    0x07, 0x07,
    0xCB, 0xEF,
    0x7B, 0x3B,
    0x23, 0x87,
    0x03, 0x0B,
    0xC7, 0xE7,
    0x38, 0x3D,
    0x0F, 0x83,
    0x09, 0x00,
    0x08, 0x02,
    0x13, 0x3F,
    0x7F, 0xFF,
    0x3F, 0x3F,
    0x3F, 0x0F,
    0x0F, 0x1F,
    0x0F, 0x00,
    0xFF, 0x1E,
    0x07, 0x3F,
    0x7F, 0xFF,
    0xF7, 0xF7,
    0xF0, 0x01,
    0x2F, 0xEF,
    0xEF, 0xF5,
    0xF5, 0xF5,
    0x9D, 0x7C,
    0x3C, 0x3F,
    0x3F, 0x11,
    0xF0, 0xF0,
    0xFC, 0x1E,
    0x00, 0x7C,
    0x3B, 0x23,
    0x1C, 0xFC,
    0x3E, 0x0F,
    0x2F, 0x00,
    0x24, 0x05,
    0x09, 0xFC,
    0x00, 0x20,
    0x00, 0x00,
    0x6C, 0x2A,
    0x23, 0x23,
    0x3F, 0x06,
    0x34, 0x3C,
    0x7C, 0x7E,
    0xFE, 0xFD,
    0xF4, 0xE1,
    0x39, 0x30,
    0x20, 0x00,
    0xBC, 0xFC,
    0xFC, 0x7C,
    0xF2, 0x0F,
    0x0F, 0x3E,
    0xFB, 0xF3,
    0x77, 0x10,
    0xA0, 0x81,
    0x80, 0xBF,
    0x3F, 0xFF,
    0xFA, 0xFA,
    0xF8, 0xCE,
    0x96, 0x80,
    0xF3, 0x1F,
    0xFF, 0xC0,
    0x00, 0xC0,
    0x48, 0x1E,
    0x82, 0xC3,
    0xF8, 0xD8,
    0x00, 0x00,
    0x10, 0x40,
    0x40, 0x07,
    0x00, 0x90,
    0x00, 0x50,
    0x02, 0x08,
    0x84, 0x84,
    0x06, 0x00,
    0xF0, 0xC8,
    0xC8, 0xC1,
    0x83, 0xF3,
    0xFF, 0xFF,
    0xCE, 0xC2,
    0xD0, 0x86,
    0xFF, 0xFF,
    0xDF, 0xC8,
    0xC0, 0xF0,
    0xC0, 0xC0,
    0xFF, 0xFF,
    0xFF, 0x11,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0x7F,
    0x38, 0x11,
    0x01, 0x21,
    0x4A, 0x58,
    0xFF, 0xFE,
    0xFF, 0xFF,
    0xFE, 0xFF,
    0xF8, 0xDE,
    0x1F, 0x0F,
    0xEF, 0xFF,
    0x2A, 0x18,
    0x1A, 0x18,
    0x1C, 0x1E,
    0x0E, 0x5E,
    0x1E, 0x1E,
    0x3E, 0x3E,
    0x3E, 0x3E,
    0x3F, 0x3F,
    0x3F, 0x1F,
    0x1E, 0x1F,
    0x1F, 0x1F,
    0x1F, 0x7F,
    0x7F, 0x5F,
    0x0F, 0x03,
    0xEF, 0xEF,
    0xDF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0x3F,
    0xFF, 0xFF,
    0xFF, 0xE7,
    0xE4, 0x61,
    0x73, 0x78,
    0x7C, 0xE4,
    0x80, 0x00,
    0x04, 0x04,
    0xA0, 0x00,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xF3,
    0xF7, 0xFE,
    0x3E, 0x0F,
    0x07, 0x83,
    0xE0, 0x60,
    0x60, 0x40,
    0x41, 0x40,
    0x40, 0x60,
    0x60, 0x61,
    0x10, 0x1C,
    0x07, 0x07,
    0xB7, 0xDF,
    0xEF, 0x6E,
    0x7C, 0x7C,
    0x7C, 0xF8,
    0xE0, 0xC0,
    0x03, 0x03,
    0x26, 0x30,
    0x21, 0x01,
    0x23, 0x03,
    0x03, 0x11,
    0x11, 0xB1,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFE,
    0xF8, 0xF0,
    0x20, 0x11,
    0x40, 0xF1,
    0xBE, 0xFD,
    0xD0, 0xB0,
    0x7F, 0xFF,
    0xFF, 0x1F,
    0x1F, 0x1F,
    0x0F, 0xD0,
    0xF0, 0xFC,
    0xFE, 0xFE,
    0xDE, 0xDE,
    0xDE, 0x7E,
    0x7E, 0xFC,
    0xF0, 0xF0,
    0xC8, 0xD0,
    0xC0, 0xC6,
    0xF6, 0xF2,
    0xF3, 0xF1,
    0xD6, 0x86,
    0xCE, 0x1E,
    0x0E, 0x10,
    0x08, 0x3F,
    0x3F, 0x3F,
    0x10, 0x00,
    0x10, 0x10,
    0x10, 0xC0,
    0xC0, 0xFE,
    0xFE, 0xFF,
    0xBF, 0x6F,
    0xF7, 0xB1,
    0xFD, 0x7B,
    0x3A, 0xDE,
    0xFB, 0xD3,
    0x63, 0x07,
    0x3F, 0x6B,
    0x7B, 0xFF,
    0xFF, 0xBD,
    0xBD, 0xC6,
    0xCE, 0xFF,
    0xFF, 0xFF,
    0xBF, 0x7F,
    0x3F, 0x3F,
    0xFF, 0xBF,
    0xFE, 0xFE,
    0xF4, 0xCF,
    0x0A, 0xDF,
    0xB7, 0xBF,
    0x3D, 0xFD,
    0xEF, 0xCF,
    0x39, 0xFF,
    0x7B, 0x77,
    0x31, 0x49,
    0x1C, 0x1A,
    0xC8, 0x40,
    0xE0, 0xF0,
    0xFA, 0xF8,
    0xFC, 0xFE,
    0xFE, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFD,
    0x3F, 0xDF,
    0xEF, 0xF7,
    0xFB, 0xED,
    0xE3, 0x00,
    0x80, 0xF8,
    0xF9, 0xF8,
    0xF1, 0xF3,
    0xE7, 0xE7,
    0xE7, 0xEF,
    0xE7, 0xEF,
    0xEF, 0xEF,
    0xEF, 0xEF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xEF,
    0xFF, 0xEE,
    0x13, 0xF5,
    0xE8, 0xFC,
    0xF8, 0xF0,
    0x0D, 0xF0,
    0xFF, 0xFE,
    0xFE, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFC, 0xFB,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFC, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xE7,
    0xF9, 0xFE,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFD, 0xFC,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
    0xFF, 0xFF,
};
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

void render_layer_state(void) {
    oled_write_ln_P(PSTR(EH_VERSION_STR), false);

    oled_set_cursor(0, 2);
    oled_write_ln_P(PSTR("lvl:"), false);
    // oled_write_P(PSTR("\n"), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("ZERO\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("ONE\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("TWO\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("THREE\n"), false);
            break;
        case _FOUR:
            oled_write_P(PSTR("FOUR\n"), false);
            break;
        case _FIVE:
            oled_write_P(PSTR("FIVE\n"), false);
            break;
        case _SIX:
            oled_write_P(PSTR("SIX\n"), false);
            break;
        case _SEVEN:
            oled_write_P(PSTR("SEVEN\n"), false);
            break;
        case _EIGHT:
            oled_write_P(PSTR("EIGHT\n"), false);
            break;
        case _NINE:
            oled_write_P(PSTR("NINE\n"), false);
            break;
         case _TEN:
            oled_write_P(PSTR("TEN\n"), false);
            break;
         case _ELEVEN:
            oled_write_P(PSTR("ELEVEN\n"), false);
            break;
         case _TWELVE:
            oled_write_P(PSTR("TWELVE\n"), false);
            break;
         case _THIRTEEN:
            oled_write_P(PSTR("THIRTEEN\n"), false);
            break;
         case _FOURTEEN:
            oled_write_P(PSTR("FOURTEEN\n"), false);
            break;
         case _FIFTEEN:
            oled_write_P(PSTR("FIFTEEN\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
            oled_write_P(PSTR("\n"), false);
}

bool oled_task_user(void) {
  render_layer_state();
  render_logo();
  return true;
}

#endif
