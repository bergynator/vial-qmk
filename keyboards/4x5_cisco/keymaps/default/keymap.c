#include QMK_KEYBOARD_H

enum custom_keycodes
{
    sh_int_status,
    sh_ip_route,
    sh_mac_address_include,
    sh_arp_include,
    sh_vlan,
    sh_int_trunk,
    sh_run,
    end_wr_exit
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_4x5(
        KC_DOT,   KC_DOT,   KC_DOT,   KC_DOT,
        KC_DOT,   KC_DOT,   KC_DOT,   KC_DOT,
        KC_DOT,   KC_DOT,   KC_DOT,   KC_DOT,
        KC_DOT,   KC_DOT,   KC_DOT,   KC_DOT,
        KC_DOT,   KC_DOT,   KC_DOT,   KC_DOT

    )
};


