<<<<<<<< HEAD:keyboards/nifty_numpad/keymaps/cadence/rules.mk
TAP_DANCE_ENABLE=yes
RGB_IDLE_ENABLE=yes
========
ifeq ($(strip $(RGB_IDLE_ENABLE)), yes)
    OPT_DEFS += -DRGB_IDLE_ENABLE
endif
>>>>>>>> nifty-numpad-dev:keyboards/nifty_numpad/post_rules.mk
