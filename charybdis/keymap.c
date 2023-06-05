
// /Volumes/workspace/Bastardkb/bastardkb-qmk/keyboards/bastardkb/charybdis/4x6/keymaps/default/keymap.c

//  pwd
// /Volumes/workspace/Bastardkb/bastardkb-qmk
// qmk compile -c -kb bastardkb/charybdis/4x6/v2/elitec -km default 
// open '/Volumes/workspace/Bastardkb/bastardkb-qmk/bastardkb_charybdis_4x6_v2_elitec_default.hex'


#include QMK_KEYBOARD_H

// レイヤー切り変え
enum custom_keycodes {
  _BASE = SAFE_RANGE,
  _NUMBER,
  _SYMBOL1,
  _SYMBOL2,
  _MY_SPEC_1,
  _MY_SPEC_2,

  // 装飾用
  __________,
  XXXXXXXXXX,

  // 親指モディファイ
  MY_KC_LL,
  MY_KC_LR,
  MY_KC_RL,
  MY_KC_RR,

  // OSに渡す用
  MY_KC_0,

  // テンキー
  MY_KC_1,
  MY_KC_2,
  MY_KC_3,
  MY_KC_4,
  MY_KC_5,
  MY_KC_6,
  MY_KC_7,
  MY_KC_8,
  MY_KC_9,
  MY_KC_10,
  MY_KC_11,
  MY_KC_12,
  MY_KC_13,
  MY_KC_14,
  MY_KC_15,
  MY_KC_16,
  MY_KC_17,
  MY_KC_18,

  // テンキー + Ctrl + Shift + Alt + kc
  MY_KC_1_MEH,
  MY_KC_2_MEH,
  MY_KC_3_MEH,
  MY_KC_4_MEH,
  MY_KC_5_MEH,
  MY_KC_6_MEH,
  MY_KC_7_MEH,
  MY_KC_8_MEH,
  MY_KC_9_MEH,
  MY_KC_10_MEH,
  MY_KC_11_MEH,
  MY_KC_12_MEH,
  MY_KC_13_MEH,
  MY_KC_14_MEH,
  MY_KC_15_MEH,
  MY_KC_16_MEH,
  MY_KC_17_MEH,
  MY_KC_18_MEH,

  // テンキー + Ctrl + Shift + Alt + Gui + kc
  MY_KC_1_HYPR,
  MY_KC_2_HYPR,
  MY_KC_3_HYPR,
  MY_KC_4_HYPR,
  MY_KC_5_HYPR,
  MY_KC_6_HYPR,
  MY_KC_7_HYPR,
  MY_KC_8_HYPR,
  MY_KC_9_HYPR,
  MY_KC_10_HYPR,
  MY_KC_11_HYPR,
  MY_KC_12_HYPR,
  MY_KC_13_HYPR,
  MY_KC_14_HYPR,
  MY_KC_15_HYPR,
  MY_KC_16_HYPR,
  MY_KC_17_HYPR,
  MY_KC_18_HYPR,

  // 親指用
  MY_KC_LL_RR,
  MY_KC_LR_RL,
  MY_KC_LL_RL,
  MY_KC_LR_RR,

  // エイリアス
  MY_KC_JP,
  MY_KC_EN,

  MY_KC_SYM1,
  MY_KC_SYM2,
  MY_KC_NUM,
  MY_KC_SPEC_1,
  MY_KC_SPEC_2,

  MY_DRAG_SCROLL,
};

// レイヤー
#define _BASE 0
#define _NUMBER 1
#define _SYMBOL1 2
#define _SYMBOL2 3
#define _MY_SPEC_1 6
#define _MY_SPEC_2 7


// 装飾用
#define __________ KC_TRNS
#define XXXXXXXXXX KC_NO

// 親指モディファイ
#define MY_KC_LL KC_LSHIFT
#define MY_KC_LR KC_LGUI
#define MY_KC_RL KC_LALT
#define MY_KC_RR KC_LCTRL

// OSに渡す用
#define MY_KC_0 KC_KP_0

// テンキー
#define MY_KC_1 KC_KP_1
#define MY_KC_2 KC_KP_2
#define MY_KC_3 KC_KP_3
#define MY_KC_4 KC_KP_4
#define MY_KC_5 KC_KP_5
#define MY_KC_6 KC_KP_6
#define MY_KC_7 KC_KP_7
#define MY_KC_8 KC_KP_8
#define MY_KC_9 KC_KP_9
#define MY_KC_10 KC_KP_PLUS
#define MY_KC_11 KC_KP_EQUAL
#define MY_KC_12 KC_KP_DOT
#define MY_KC_13 KC_KP_MINUS
#define MY_KC_14 KC_KP_SLASH
#define MY_KC_15 KC_KP_ASTERISK
#define MY_KC_16 KC_NONUS_BACKSLASH
#define MY_KC_17 KC_NUM_LOCK
#define MY_KC_18 KC_KP_ENTER

// テンキー + Ctrl + Shift + Alt + kc
#define MY_KC_1_MEH MEH(KC_KP_1)
#define MY_KC_2_MEH MEH(KC_KP_2)
#define MY_KC_3_MEH MEH(KC_KP_3)
#define MY_KC_4_MEH MEH(KC_KP_4)
#define MY_KC_5_MEH MEH(KC_KP_5)
#define MY_KC_6_MEH MEH(KC_KP_6)
#define MY_KC_7_MEH MEH(KC_KP_7)
#define MY_KC_8_MEH MEH(KC_KP_8)
#define MY_KC_9_MEH MEH(KC_KP_9)
#define MY_KC_10_MEH MEH(KC_KP_PLUS)
#define MY_KC_11_MEH MEH(KC_KP_EQUAL)
#define MY_KC_12_MEH MEH(KC_KP_DOT)
#define MY_KC_13_MEH MEH(KC_KP_MINUS)
#define MY_KC_14_MEH MEH(KC_KP_SLASH)
#define MY_KC_15_MEH MEH(KC_KP_ASTERISK)
#define MY_KC_16_MEH MEH(KC_NONUS_BACKSLASH)
#define MY_KC_17_MEH MEH(KC_NUM_LOCK)
#define MY_KC_18_MEH MEH(KC_KP_ENTER)

// テンキー + Ctrl + Shift + Alt + Gui + kc
#define MY_KC_1_HYPR HYPR(KC_KP_1)
#define MY_KC_2_HYPR HYPR(KC_KP_2)
#define MY_KC_3_HYPR HYPR(KC_KP_3)
#define MY_KC_4_HYPR HYPR(KC_KP_4)
#define MY_KC_5_HYPR HYPR(KC_KP_5)
#define MY_KC_6_HYPR HYPR(KC_KP_6)
#define MY_KC_7_HYPR HYPR(KC_KP_7)
#define MY_KC_8_HYPR HYPR(KC_KP_8)
#define MY_KC_9_HYPR HYPR(KC_KP_9)
#define MY_KC_10_HYPR HYPR(KC_KP_PLUS)
#define MY_KC_11_HYPR HYPR(KC_KP_EQUAL)
#define MY_KC_12_HYPR HYPR(KC_KP_DOT)
#define MY_KC_13_HYPR HYPR(KC_KP_MINUS)
#define MY_KC_14_HYPR HYPR(KC_KP_SLASH)
#define MY_KC_15_HYPR HYPR(KC_KP_ASTERISK)
#define MY_KC_16_HYPR HYPR(KC_NONUS_BACKSLASH)
#define MY_KC_17_HYPR HYPR(KC_NUM_LOCK)
#define MY_KC_18_HYPR HYPR(KC_KP_ENTER)

// 親指用
#define MY_KC_LL_RR KC_F19
#define MY_KC_LR_RL KC_F18
#define MY_KC_LL_RL KC_F17
#define MY_KC_LR_RR KC_F16

// エイリアス
#define MY_KC_JP KC_LANG1
#define MY_KC_EN KC_LANG2




// この秒数(ms)以内に、キーアップでワンショット発火
#define ONE_SHOT_TIME 200

// この秒数(ms)以内に、キー同時押しWワンショット発動の条件
#define W_ONE_SHOT_DOWN_TIME 100

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT_charybdis_4x6(
    XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                           XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,
    KC_TAB, KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_DEL,
    MY_KC_SYM1,   KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                               KC_H,       KC_J,       KC_K,       KC_L,          KC_UP,   MY_KC_SYM2,
    MY_KC_NUM,  KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                               KC_N,       KC_M, KC_LEFT,     KC_DOWN,  KC_RIGHT,    KC_ENTER,
                                           MY_KC_LL, MY_KC_LR,   MY_DRAG_SCROLL,                 MY_KC_RL,  MY_KC_RR,
                                                   MY_KC_SPEC_2, XXXXXXXXXX,                      MY_KC_SPEC_1
),

[_NUMBER] = LAYOUT_charybdis_4x6(
    XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                         XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,
    XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                         XXXXXXXXXX, KC_7,       KC_8,       KC_9,       XXXXXXXXXX, XXXXXXXXXX,
    __________, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                         XXXXXXXXXX, KC_4,       KC_5,       KC_6,       XXXXXXXXXX, __________,
    __________, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                         KC_0,       KC_1,       KC_2,       KC_3,       XXXXXXXXXX, __________,
                                      __________, __________,  __________,                          __________, __________,
                                                   __________, __________,                          __________
),

[_SYMBOL1] = LAYOUT_charybdis_4x6(
    XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                         XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,
    XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                         KC_CIRC,    KC_LABK,    KC_RABK,    KC_LBRACKET,KC_RBRACKET,XXXXXXXXXX,
    __________, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                         KC_EQUAL,   KC_PLUS,    KC_MINUS,   KC_ASTR,    KC_PERC,    KC_DLR,
    XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                         KC_TILD,    KC_LPRN,    KC_RPRN,    KC_LCBR,    KC_RCBR,    __________,
                                      __________, __________,  __________,                          __________, __________,
                                                   __________, __________,                          __________
),

[_SYMBOL2] = LAYOUT_charybdis_4x6(
    XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                         XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,
    XXXXXXXXXX, KC_QUESTION,KC_EXLM,        KC_AMPR, KC_PIPE, KC_UNDS,                                    XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,
    KC_AT,      KC_COLON,   KC_SCOLON,        KC_DOT, KC_COMMA, KC_HASH,                                          XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, __________,
    __________, KC_BSLASH, KC_SLASH, KC_GRAVE, KC_QUOTE, KC_DQUO,                                   XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, __________,
                                      __________, __________,  __________,                          __________, __________,
                                                   __________, __________,                          __________
),

[_MY_SPEC_1] = LAYOUT_charybdis_4x6(
   XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                          XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,
    MY_KC_16,   MY_KC_1,    MY_KC_2,    MY_KC_3,    MY_KC_4,    MY_KC_5,                            MY_KC_5_HYPR, MY_KC_4_HYPR, MY_KC_3_HYPR, MY_KC_2_HYPR, MY_KC_1_HYPR, MY_KC_16_HYPR,
    MY_KC_17,   MY_KC_6,    MY_KC_7,    MY_KC_8,    MY_KC_9,    MY_KC_10,                           MY_KC_10_HYPR, MY_KC_9_HYPR, MY_KC_8_HYPR, MY_KC_7_HYPR, MY_KC_6_HYPR, MY_KC_17_HYPR,
    MY_KC_18,   MY_KC_11,   MY_KC_12,   MY_KC_13,   MY_KC_14,   MY_KC_15,                           MY_KC_15_HYPR, MY_KC_14_HYPR, MY_KC_13_HYPR, MY_KC_12_HYPR, MY_KC_11_HYPR, MY_KC_18_HYPR,
                                      __________, __________,  __________,                          __________, __________,
                                                   __________, __________,                          __________
),


[_MY_SPEC_2] = LAYOUT_charybdis_4x6(
    XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                              XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,
    XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                         XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,      XXXXXXXXXX,
    KC_SPACE, KC_LSHIFT,      KC_LGUI,      KC_LALT,      KC_LCTRL,  XXXXXXXXXX,                         XXXXXXXXXX, KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3, XXXXXXXXXX,      KC_BSPACE,
    KC_ESCAPE, XXXXXXXXXX,      XXXXXXXXXX,     XXXXXXXXXX,     XXXXXXXXXX, XXXXXXXXXX,                         XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,      KC_ENTER,
                                      __________, __________,  __________,                          __________, __________,
                                                   __________, __________,                          __________
),
};

static bool one_shot_modifiers_through_flg = false;
static bool is_input_mode_en = false;

typedef struct OneShotModifier {
  uint16_t key;
  uint16_t send_key;
  uint16_t down_ms;
  int layer;
  bool is_down;
}
one_shot_modifier;
one_shot_modifier one_shot_modifiers[] = {
  {
    MY_KC_LL,
    KC_ENTER,
    MY_KC_LL,
    _BASE,
    false
  },
  {
    MY_KC_LR,
    KC_BSPACE,
    MY_KC_LR,
    _BASE,
    false
  },
  {
    MY_KC_RL,
    KC_ESCAPE,
    MY_KC_RL,
    _BASE,
    false
  },
  {
    MY_KC_RR,
    KC_SPACE,
    MY_KC_RR,
    _BASE,
    false
  },
  {
    MY_KC_SPEC_1,
    MY_KC_0,
    MY_KC_SPEC_1,
    _MY_SPEC_1,
    false
  },
    {
    MY_KC_SPEC_2,
    MY_KC_0,
    MY_KC_SPEC_2,
    _MY_SPEC_2,
    false
  },
  {
    MY_KC_SYM1,
    KC_SPACE,
    MY_KC_SYM1,
    _SYMBOL1,
    false
  },
  {
    MY_KC_SYM2,
    KC_BSPACE,
    MY_KC_SYM2,
    _SYMBOL2,
    false
  },
  {
    MY_KC_NUM,
    KC_ESCAPE,
    MY_KC_NUM,
    _NUMBER,
    false
  },
};
int one_shot_modifiers_cnt = (sizeof(one_shot_modifiers) / sizeof(one_shot_modifier));

typedef struct SimultaneouslyOneShotModifier {
  uint16_t key1;
  uint16_t key2;
  uint16_t send_key;
  uint16_t down_ms1;
  uint16_t down_ms2;
}
simultaneously_one_shot_modifier;
simultaneously_one_shot_modifier simultaneously_one_shot_modifiers[] = {
  // LL LR
  {
    MY_KC_LL,
    MY_KC_LR,
    MY_KC_JP,
    MY_KC_LL,
    MY_KC_LR
  },
  {
    MY_KC_LR,
    MY_KC_LL,
    MY_KC_JP,
    MY_KC_LR,
    MY_KC_LL
  },

  // RL RR
  {
    MY_KC_RL,
    MY_KC_RR,
    MY_KC_EN,
    MY_KC_LL,
    MY_KC_LR
  },
  {
    MY_KC_RR,
    MY_KC_RL,
    MY_KC_EN,
    MY_KC_LR,
    MY_KC_LL
  },

  // LL RR
  {
    MY_KC_LL,
    MY_KC_RR,
    MY_KC_LL_RR,
    MY_KC_LL,
    MY_KC_RR
  },
  {
    MY_KC_RR,
    MY_KC_LL,
    MY_KC_LL_RR,
    MY_KC_RR,
    MY_KC_LL
  },

  // LR RL
  {
    MY_KC_LR,
    MY_KC_RL,
    MY_KC_LR_RL,
    MY_KC_LR,
    MY_KC_RL
  },
  {
    MY_KC_RL,
    MY_KC_LR,
    MY_KC_LR_RL,
    MY_KC_RL,
    MY_KC_LR
  },

  // LL RL
  {
    MY_KC_LL,
    MY_KC_RL,
    MY_KC_LL_RL,
    MY_KC_LL,
    MY_KC_RL
  },
  {
    MY_KC_RL,
    MY_KC_LL,
    MY_KC_LL_RL,
    MY_KC_RL,
    MY_KC_LL
  },

  // LR RR
  {
    MY_KC_LR,
    MY_KC_RR,
    MY_KC_LL_RL,
    MY_KC_LR,
    MY_KC_RR
  },
  {
    MY_KC_RR,
    MY_KC_LR,
    MY_KC_LL_RL,
    MY_KC_RR,
    MY_KC_LR
  },
};
int simultaneously_one_shot_modifiers_cnt = (sizeof(simultaneously_one_shot_modifiers) / sizeof(simultaneously_one_shot_modifier));

void set_input_mode(uint16_t keycode) {
  if (keycode == MY_KC_EN) {
    is_input_mode_en = true;
  }

  if (keycode == MY_KC_JP) {
    is_input_mode_en = false;
  }
}

void key_send(uint16_t keycode) {
  set_input_mode(keycode);
  one_shot_modifiers_through_flg = true;
  register_code(keycode);
  unregister_code(keycode);
}

uint16_t get_diff_time_ms(uint16_t a, uint16_t b) {
  if (a > b) {
    return a - b;
  }
  return b - a;
}

int find_one_shot_modifier_no(uint16_t keycode) {
  for (int i = 0; i <= one_shot_modifiers_cnt; i++) {
    if (one_shot_modifiers[i].key == keycode) {
      return i;
    }
  }
  return -1;
}

bool is_key_down(uint16_t keycode) {
  int no = find_one_shot_modifier_no(keycode);
  return one_shot_modifiers[no].is_down;
}

bool can_one_shot_modifier(uint16_t keycode) {
  int no = find_one_shot_modifier_no(keycode);
  if (one_shot_modifiers_through_flg) {
    return false;
  }

  if (timer_elapsed(one_shot_modifiers[no].down_ms) > ONE_SHOT_TIME) {
    return false;
  }

  return true;
}

void layer_change(int layer, bool on) {
  if (layer == _BASE) {
    return;
  }
  if (on) {
    layer_on(layer);
    return;
  }
  layer_off(layer);
}

void send_one_shot_modifier(uint16_t keycode) {
  int no = find_one_shot_modifier_no(keycode);
  key_send(one_shot_modifiers[no].send_key);
}

void set_modifier_key_down(uint16_t keycode) {
  int no = find_one_shot_modifier_no(keycode);
  layer_change(one_shot_modifiers[no].layer, true);

  one_shot_modifiers[no].down_ms = timer_read();
  one_shot_modifiers[no].is_down = true;
  one_shot_modifiers_through_flg = false;
}

int find_simultaneously_one_shot_modifier_pear_no(uint16_t keycode) {
  for (int i = 0; i <= simultaneously_one_shot_modifiers_cnt; i++) {
    if (simultaneously_one_shot_modifiers[i].key1 != keycode) {
      continue;
    }

    int pear_no = find_one_shot_modifier_no(simultaneously_one_shot_modifiers[i].key2);
    if (pear_no > -1 && !one_shot_modifiers[pear_no].is_down) {
      continue;
    }
    return pear_no;
  }
  return -1;
}

int find_simultaneously_one_shot_modifier_no(uint16_t key1, uint16_t key2) {
  for (int i = 0; i <= simultaneously_one_shot_modifiers_cnt; i++) {
    if (simultaneously_one_shot_modifiers[i].key1 == key1 && simultaneously_one_shot_modifiers[i].key2 == key2) {
      return i;
    }

    if (simultaneously_one_shot_modifiers[i].key1 == key2 && simultaneously_one_shot_modifiers[i].key2 == key1) {
      return i;
    }
  }
  return -1;
}

bool can_simultaneously_one_shot_modifier(uint16_t keycode) {
  if (one_shot_modifiers_through_flg) {
    return false;
  }

  int pear_no = find_simultaneously_one_shot_modifier_pear_no(keycode);
  if (pear_no == -1) {
    return false;
  }

  int current_no = find_one_shot_modifier_no(keycode);
  uint16_t current_down_time = timer_elapsed(one_shot_modifiers[current_no].down_ms);
  if (current_down_time > ONE_SHOT_TIME) {
    return false;
  }

  uint16_t pear_down_time = timer_elapsed(one_shot_modifiers[pear_no].down_ms);
  return get_diff_time_ms(pear_down_time, current_down_time) < W_ONE_SHOT_DOWN_TIME;
}

void send_simultaneously_one_shot_modifier(uint16_t keycode) {
  int current_no = find_one_shot_modifier_no(keycode);
  int pear_no = find_simultaneously_one_shot_modifier_pear_no(keycode);
  int no = find_simultaneously_one_shot_modifier_no(one_shot_modifiers[current_no].key, one_shot_modifiers[pear_no].key);
  unregister_code(one_shot_modifiers[pear_no].key);
  key_send(simultaneously_one_shot_modifiers[no].send_key);
}

void set_modifier_key_up(uint16_t keycode) {
  unregister_code(keycode);
  int no = find_one_shot_modifier_no(keycode);
  layer_change(one_shot_modifiers[no].layer, false);

  if (can_simultaneously_one_shot_modifier(keycode)) {
    one_shot_modifiers[no].is_down = false;
    send_simultaneously_one_shot_modifier(keycode);
    return;
  }

  if (can_one_shot_modifier(keycode)) {
    one_shot_modifiers[no].is_down = false;
    send_one_shot_modifier(keycode);
    return;
  }

  one_shot_modifiers[no].is_down = false;
}

void pre_send_hankaku(void) {
  for (int i = 0; i <= one_shot_modifiers_cnt; i++) {
      if (one_shot_modifiers[i].is_down) {
          unregister_code(one_shot_modifiers[i].key);
      }
  }

  key_send(MY_KC_EN);

  for (int i = 0; i <= one_shot_modifiers_cnt; i++) {
      if (one_shot_modifiers[i].is_down) {
          register_code(one_shot_modifiers[i].key);
      }
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t * record) {
  switch (keycode) {
  case MY_DRAG_SCROLL:
    if (record -> event.pressed) {
      if (charybdis_get_pointer_dragscroll_enabled()) {
        charybdis_set_pointer_dragscroll_enabled(false);
        return true;
      }

      charybdis_set_pointer_dragscroll_enabled(true);
      return true;
    }

    // 親指モディファイ
  case MY_KC_LL:
  case MY_KC_LR:
  case MY_KC_RL:
  case MY_KC_RR:    
    if (record -> event.pressed) {
      register_code(keycode);
      set_modifier_key_down(keycode);
      return true;
    }
    unregister_code(keycode);
    set_modifier_key_up(keycode);
    return true;

  // レイヤー切り変え
  case MY_KC_SPEC_1:
  case MY_KC_SPEC_2:
  case MY_KC_SYM1:
  case MY_KC_SYM2:
  case MY_KC_NUM:
    if (record -> event.pressed) {
      set_modifier_key_down(keycode);
      return true;
    }
    set_modifier_key_up(keycode);
    return true;

    // 記号, 数値 ime off
  case KC_0:
  case KC_1:
  case KC_2:
  case KC_3:
  case KC_4:
  case KC_5:
  case KC_6:
  case KC_7:
  case KC_8:
  case KC_9:
  case KC_UNDS:
  case KC_PIPE:
  case KC_AMPR:
  case KC_EXLM:
  case KC_QUESTION:
  case KC_HASH:
  case KC_COMMA:
  case KC_DOT:
  case KC_SCOLON:
  case KC_COLON:
  case KC_AT:
  case KC_DQUO:
  case KC_QUOTE:
  case KC_GRAVE:
  case KC_SLASH:
  case KC_BSLASH:
  case KC_CIRC:
  case KC_LABK:
  case KC_RABK:
  case KC_LBRACKET:
  case KC_RBRACKET:
  case KC_EQUAL:
  case KC_PLUS:
  case KC_MINUS:
  case KC_ASTR:
  case KC_PERC:
  case KC_DLR:
  case KC_TILD:
  case KC_LPRN:
  case KC_RPRN:
  case KC_LCBR:
  case KC_RCBR:
    if (!record -> event.pressed) {
      return true;
    }
    one_shot_modifiers_through_flg = true;

    if (is_input_mode_en) {
      return true;
    }

    is_input_mode_en = true;

    pre_send_hankaku();
    return true;

    // shift ダウン時に ime off
  case KC_A:
  case KC_B:
  case KC_C:
  case KC_D:
  case KC_E:
  case KC_F:
  case KC_G:
  case KC_H:
  case KC_I:
  case KC_J:
  case KC_K:
  case KC_L:
  case KC_M:
  case KC_N:
  case KC_O:
  case KC_P:
  case KC_Q:
  case KC_R:
  case KC_S:
  case KC_T:
  case KC_U:
  case KC_V:
  case KC_W:
  case KC_X:
  case KC_Y:
  case KC_Z:
    if (!record -> event.pressed) {
      return true;
    }
    one_shot_modifiers_through_flg = true;

    if (is_input_mode_en) {
      return true;
    }

    if (!is_key_down(MY_KC_LL)) {
      return true;
    }

    is_input_mode_en = true;

    pre_send_hankaku();
    return true;
  }

  one_shot_modifiers_through_flg = true;
  return true;
}
