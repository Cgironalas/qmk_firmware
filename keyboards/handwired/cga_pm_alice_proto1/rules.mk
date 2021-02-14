# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BACKLIGHT_ENABLE = yes      # Enable keyboard backlight functionality
BOOTMAGIC_ENABLE = lite     # Key at 0,0 makes the keyboard go into bootloader
EXTRAKEY_ENABLE = yes       # Audio control and System control
MOUSEKEY_ENABLE = yes       # Mouse keys
CONSOLE_ENABLE = yes        # Console for debug
ENCODER_ENABLE = yes 		# enable use of encoders

# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover

AUDIO_ENABLE = no           # Audio output
COMMAND_ENABLE = no	        # Commands for debug and configuration
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
