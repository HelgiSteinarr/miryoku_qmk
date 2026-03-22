# Copyright 2019 Manna Harbour
# https://github.com/manna-harbour/miryoku

ifeq ($(strip $(KEYBOARD)), beekeeb/piantor)
  UNICODEMAP_ENABLE = yes
  SRC += $(USER_PATH)/icelandic_unicode.c
endif
