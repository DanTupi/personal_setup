// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum ferris_layers {
  _MOUSE,
  _DVORAK,
  _NUMBERS,
  _LOWER,
  _FS,
  _NAV,
  _UNICODE,
};

#define COMBO_ONLY_FROM_LAYER _DVORAK

enum combos {
  AO_ESC,
  EU_SPC,
  CP_RIGHT,
  CQ_LEFT,
  CD_UP,
  CDP_DOWN,
  QJ_LSHIFT,
  SCQ_GRV,
  JK_TAB,
  HT_ENT,
  NS_GUI,
  VZ_RALT,
  CR_LALT,
  RL_RCTL,
  MW_BSPC,
  GC_DEL,
  WV_RSHIFT,
  OE_LCTL,
  OEU_LGUI,
//   TN_UNI,
};

const uint16_t PROGMEM ao_combo[] = {KC_A, KC_O, COMBO_END};
const uint16_t PROGMEM eu_combo[] = {KC_E, KC_U, COMBO_END};
const uint16_t PROGMEM cp_combo[] = {KC_COMM, KC_P, COMBO_END};
const uint16_t PROGMEM cq_combo[] = {KC_COMM, KC_QUOT, COMBO_END};
const uint16_t PROGMEM cd_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM cdp_combo[] = {KC_COMM, KC_DOT, KC_P, COMBO_END};
const uint16_t PROGMEM qj_combo[] = {KC_Q, KC_J, COMBO_END};
const uint16_t PROGMEM scq_combo[] = {KC_SCLN, KC_Q, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM ht_combo[] = {KC_H, KC_T, COMBO_END};
const uint16_t PROGMEM ns_combo[] = {KC_N, KC_S, COMBO_END};
const uint16_t PROGMEM vz_combo[] = {KC_V, KC_Z, COMBO_END};
const uint16_t PROGMEM cr_combo[] = {KC_C, KC_R, COMBO_END};
const uint16_t PROGMEM rl_combo[] = {KC_R, KC_L, COMBO_END};
const uint16_t PROGMEM mw_combo[] = {KC_M, KC_W, COMBO_END};
const uint16_t PROGMEM gc_combo[] = {KC_G, KC_C, COMBO_END};
const uint16_t PROGMEM wv_combo[] = {KC_W, KC_V, COMBO_END};
const uint16_t PROGMEM oe_combo[] = {KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM oeu_combo[] = {KC_O, KC_E, KC_U, COMBO_END};
// const uint16_t PROGMEM tn_combo[] = {KC_T, KC_N, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [AO_ESC] = COMBO(ao_combo, KC_ESC),
  [EU_SPC] = COMBO(eu_combo, KC_SPC),
  [CP_RIGHT] = COMBO(cp_combo, KC_RIGHT),
  [CQ_LEFT] = COMBO(cq_combo, KC_LEFT),
  [CD_UP] = COMBO(cd_combo, KC_UP),
  [CDP_DOWN] = COMBO(cdp_combo, KC_DOWN),
  [QJ_LSHIFT] = COMBO(qj_combo, KC_LSFT),
  [SCQ_GRV] = COMBO(scq_combo, KC_GRV),
  [JK_TAB] = COMBO(jk_combo, KC_TAB),
  [HT_ENT] = COMBO(ht_combo, KC_ENT),
  [NS_GUI] = COMBO(ns_combo, KC_RGUI),
  [VZ_RALT] = COMBO(vz_combo, KC_RALT),
  [CR_LALT] = COMBO(cr_combo, KC_LALT),
  [RL_RCTL] = COMBO(rl_combo, KC_RCTL),
  [MW_BSPC] = COMBO(mw_combo, KC_BSPC),
  [GC_DEL] = COMBO(gc_combo, KC_DEL),
  [WV_RSHIFT] = COMBO(wv_combo, KC_RSFT),
  [OE_LCTL] = COMBO(oe_combo, KC_LCTL),
  [OEU_LGUI] = COMBO(oeu_combo, KC_LGUI),
//   [TN_UNI] = COMBO(tn_combo, OSL(_UNICODE)),
};

enum unicode_names {
  SINQUO,
  DOUQUO,
  TILDE,
  MINCEDILHA,
  MAICEDILHA,
  MINACRASE,
  MAIACRASE,
  MINAACENTO,
  MAIAACENTO,
  MINATIO,
  MAIATIO,
  MINOCIRCUN,
  MAIOCIRCUN,
  MINOACENTO,
  MAIOACENTO,
  MINOTIO,
  MAIOTIO,
  MINECIRCUN,
  MAIECIRCUN,
  MINEACENTO,
  MAIEACENTO,
  MINUACENTO,
  MAIUACENTO,
  MINIACENTO,
  MAIIACENTO
};

const uint32_t PROGMEM unicode_map[] = {
  [SINQUO] = 0x0027, // '
  [DOUQUO] = 0x0022, // "
  [TILDE] = 0x007E, // ~
  [MINCEDILHA] = 0x00E7, // ç
  [MAICEDILHA] = 0x00C7, // Ç
  [MINACRASE] = 0x00E0, // à
  [MAIACRASE] = 0x00C0, // À
  [MINAACENTO] = 0x00E1, // á
  [MAIAACENTO] = 0x00C1, // Á
  [MINATIO] = 0x00E3, // ã
  [MAIATIO] = 0x00C3, // Ã
  [MINOCIRCUN] = 0x00F4, // ô
  [MAIOCIRCUN] = 0x00D4, // Ô
  [MINOACENTO] = 0x00F3, // ó
  [MAIOACENTO] = 0x00D3, // Ó
  [MINOTIO] = 0x00F5, // õ
  [MAIOTIO] = 0x00D5, // Õ
  [MINECIRCUN] = 0x00EA, // ê
  [MAIECIRCUN] = 0x00CA, // Ê
  [MINEACENTO] = 0x00E9, // é
  [MAIEACENTO] = 0x00C9, // É
  [MINUACENTO] = 0x00FA, // ú
  [MAIUACENTO] = 0x00DA, // Ú
  [MINIACENTO] = 0x00ED, // í
  [MAIIACENTO] = 0x00CD // Í
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MOUSE] = LAYOUT( /* [> MOUSE <] - 0 */
    OSL(_FS),  KC_NO,   KC_MS_U, KC_NO,   KC_NO,                   KC_WH_L,   KC_WH_R,    KC_MS_ACCEL2,    KC_MS_ACCEL1,   KC_MS_ACCEL0,
    OSL(_NAV),  KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,                  KC_NO,     KC_BTN1,    KC_WH_D,         KC_WH_U,        KC_BTN2,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_ESC,                    KC_TAB,    KC_RGUI,    KC_RALT,         KC_RCTL,        KC_RSFT,
                                    KC_NO, TO(_NUMBERS),        TO(_DVORAK), KC_ENT
  ),

  [_DVORAK] = LAYOUT( /* DVORAK - 1 */
    KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,                          KC_F, KC_G, KC_C, KC_R, KC_L,
    KC_A,    KC_O,    KC_E,   KC_U, KC_I,                          KC_D, KC_H, KC_T, KC_N, KC_S,
    KC_SCLN, KC_Q,    KC_J,   KC_K, KC_X,                          KC_B, KC_M, KC_W, KC_V, KC_Z,
                                OSL(_LOWER), OSL(_NUMBERS),    KC_SPC, KC_BSPC
  ),

  [_NUMBERS] = LAYOUT( /* [> NUMBERS <] - 2 */
    KC_EXLM, KC_AT,  KC_HASH,  KC_DLR,  KC_PERC,                    KC_CIRC, KC_AMPR,  KC_ASTR, KC_LPRN, KC_RPRN,
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,     KC_8,    KC_9,    KC_0,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_ESC,                     KC_TAB,  KC_RGUI,  KC_RALT, KC_RCTL, KC_RSFT,
                                    TO(_MOUSE), OSL(_LOWER),    TO(_DVORAK), OSL(_UNICODE)
  ),

  [_LOWER] = LAYOUT( /* [> LOWER <] - 3 */
    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
    KC_MINS, KC_EQL,  KC_GRV,  KC_SLSH,  KC_NO,                   TO(_FS), KC_LBRC,  KC_RBRC, KC_BSLS, TO(_NAV),
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,  KC_ESC,                  KC_TAB,   KC_RGUI,  KC_RALT, KC_RCTL, KC_RSFT,
                                    TO(_MOUSE), TO(_NUMBERS),       TO(_DVORAK), KC_ENT
  ),

  [_FS] = LAYOUT( /* [> FUNCTIONS <] - 4 */
    KC_F11,  KC_F12,  CG_SWAP, CG_NORM, KC_NO,                  RESET,  UC_MOD,   KC_NO,   KC_NO,   KC_NO,
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                  KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_ESC,                 KC_TAB, KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT,
                                    TO(_MOUSE), TO(_NUMBERS),     TO(_DVORAK), KC_ENT
  ),

  [_NAV] = LAYOUT( /* [> NAVIGADION <] - 5 */
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_LEFT,  KC_DOWN, KC_UP,   KC_RIGHT,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_ESC,                KC_TAB,  KC_RGUI,  KC_RALT, KC_RCTL, KC_RSFT,
                                    TO(_MOUSE), TO(_NUMBERS),     TO(_DVORAK), KC_ESC
  ),
  [_UNICODE] = LAYOUT( /* [> UNICODE <] - 6 */
    XP(MINATIO, MAIATIO), XP(MINOTIO, MAIOTIO), X(TILDE), KC_GRV, KC_NO,                 KC_PERC, KC_QUES, XP(MINCEDILHA, MAICEDILHA), KC_AMPR, KC_UNDS,
    XP(MINAACENTO, MAIAACENTO), XP(MINOACENTO, MAIOACENTO), XP(MINEACENTO, MAIEACENTO), XP(MINUACENTO, MAIUACENTO), XP(MINIACENTO, MAIIACENTO),                 KC_SLSH, KC_EXLM, KC_AT, KC_HASH, KC_DLR,
    XP(MINACRASE, MAIACRASE), XP(MINOCIRCUN, MAIOCIRCUN), XP(MINECIRCUN, MAIECIRCUN), KC_QUOT, KC_PIPE,                KC_BSLS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC,
                                    TO(_MOUSE), TO(_NUMBERS),     TO(_DVORAK), KC_ESC
  )
};
