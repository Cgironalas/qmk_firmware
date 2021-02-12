# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BACKLIGHT_ENABLE = yes      # Enable keyboard backlight functionality
BOOTMAGIC_ENABLE = lite     # Key at 0,0 makes the keyboard go into bootloader
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
COMMAND_ENABLE = yes        # Commands for debug and configuration
CONSOLE_ENABLE = yes        # Console for debug
ENCODER_ENABLE = yes 		# enable use of encoders
SPLIT_KEYBOARD = no 		# Allow for "split functionality" to enable use of macropads

# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
BLUETOOTH_ENABLE = no       # Enable Bluetooth
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output

LAYOUTS = cga_pm_alice_proto1
