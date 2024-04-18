# Tcordel aurora Lily58's Default Keymap

_This keymap is a copy of the [Lily58 default keymap](https://github.com/qmk/qmk_firmware/tree/master/keyboards/lily58/keymaps/default), with slight modifications._

## Commands

qmk config user.keyboard=splitkb/aurora/lily58/rev1
qmk config user.keymap=tcordel
qmk compile -e CONVERT_TO=liatris
qmk flash -e CONVERT_TO=liatris

## Links

* [french keycodes](https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_french.h)
* [liatris documentation](https://docs.splitkb.com/hc/en-us/sections/7540894943132-Liatris)
