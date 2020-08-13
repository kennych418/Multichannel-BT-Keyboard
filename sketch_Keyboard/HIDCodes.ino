//No-op
#define KEY_NONE 0x00

//Modifiers
#define KEY_MOD_LCTRL  0x01
#define KEY_MOD_LSHIFT 0x02
#define KEY_MOD_LALT   0x04
#define KEY_MOD_LMETA  0x08
#define KEY_MOD_RCTRL  0x10
#define KEY_MOD_RSHIFT 0x20
#define KEY_MOD_RALT   0x40
#define KEY_MOD_RMETA  0x80

//Letters
#define KEY_A 0x04 // Keyboard a and A
#define KEY_B 0x05 // Keyboard b and B
#define KEY_C 0x06 // Keyboard c and C
#define KEY_D 0x07 // Keyboard d and D
#define KEY_E 0x08 // Keyboard e and E
#define KEY_F 0x09 // Keyboard f and F
#define KEY_G 0x0a // Keyboard g and G
#define KEY_H 0x0b // Keyboard h and H
#define KEY_I 0x0c // Keyboard i and I
#define KEY_J 0x0d // Keyboard j and J
#define KEY_K 0x0e // Keyboard k and K
#define KEY_L 0x0f // Keyboard l and L
#define KEY_M 0x10 // Keyboard m and M
#define KEY_N 0x11 // Keyboard n and N
#define KEY_O 0x12 // Keyboard o and O
#define KEY_P 0x13 // Keyboard p and P
#define KEY_Q 0x14 // Keyboard q and Q
#define KEY_R 0x15 // Keyboard r and R
#define KEY_S 0x16 // Keyboard s and S
#define KEY_T 0x17 // Keyboard t and T
#define KEY_U 0x18 // Keyboard u and U
#define KEY_V 0x19 // Keyboard v and V
#define KEY_W 0x1a // Keyboard w and W
#define KEY_X 0x1b // Keyboard x and X
#define KEY_Y 0x1c // Keyboard y and Y
#define KEY_Z 0x1d // Keyboard z and Z

//Numbers
#define KEY_1 0x1e // Keyboard 1 and !
#define KEY_2 0x1f // Keyboard 2 and @
#define KEY_3 0x20 // Keyboard 3 and #
#define KEY_4 0x21 // Keyboard 4 and $
#define KEY_5 0x22 // Keyboard 5 and %
#define KEY_6 0x23 // Keyboard 6 and ^
#define KEY_7 0x24 // Keyboard 7 and &
#define KEY_8 0x25 // Keyboard 8 and *
#define KEY_9 0x26 // Keyboard 9 and (
#define KEY_0 0x27 // Keyboard 0 and )

//Marks
#define KEY_ENTER 0x28 // Keyboard Return (ENTER)
#define KEY_ESC 0x29 // Keyboard ESCAPE
#define KEY_BACKSPACE 0x2a // Keyboard DELETE (Backspace)
#define KEY_TAB 0x2b // Keyboard Tab
#define KEY_SPACE 0x2c // Keyboard Spacebar
#define KEY_MINUS 0x2d // Keyboard - and _
#define KEY_EQUAL 0x2e // Keyboard = and +
#define KEY_LEFTBRACE 0x2f // Keyboard [ and {
#define KEY_RIGHTBRACE 0x30 // Keyboard ] and }
#define KEY_BACKSLASH 0x31 // Keyboard \ and |
#define KEY_HASHTILDE 0x32 // Keyboard Non-US # and ~
#define KEY_SEMICOLON 0x33 // Keyboard ; and :
#define KEY_APOSTROPHE 0x34 // Keyboard ' and "
#define KEY_GRAVE 0x35 // Keyboard ` and ~
#define KEY_COMMA 0x36 // Keyboard , and <
#define KEY_DOT 0x37 // Keyboard . and >
#define KEY_SLASH 0x38 // Keyboard / and ?
#define KEY_CAPSLOCK 0x39 // Keyboard Caps Lock

//Function
#define KEY_F1 0x3a // Keyboard F1
#define KEY_F2 0x3b // Keyboard F2
#define KEY_F3 0x3c // Keyboard F3
#define KEY_F4 0x3d // Keyboard F4
#define KEY_F5 0x3e // Keyboard F5
#define KEY_F6 0x3f // Keyboard F6
#define KEY_F7 0x40 // Keyboard F7
#define KEY_F8 0x41 // Keyboard F8
#define KEY_F9 0x42 // Keyboard F9
#define KEY_F10 0x43 // Keyboard F10
#define KEY_F11 0x44 // Keyboard F11
#define KEY_F12 0x45 // Keyboard F12

//Media
#define KEY_SYSRQ 0x46 // Keyboard Print Screen
#define KEY_SCROLLLOCK 0x47 // Keyboard Scroll Lock
#define KEY_PAUSE 0x48 // Keyboard Pause
#define KEY_INSERT 0x49 // Keyboard Insert
#define KEY_HOME 0x4a // Keyboard Home
#define KEY_PAGEUP 0x4b // Keyboard Page Up
#define KEY_DELETE 0x4c // Keyboard Delete Forward
#define KEY_END 0x4d // Keyboard End
#define KEY_PAGEDOWN 0x4e // Keyboard Page Down
#define KEY_RIGHT 0x4f // Keyboard Right Arrow
#define KEY_LEFT 0x50 // Keyboard Left Arrow
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_UP 0x52 // Keyboard Up Arrow

//Keypad
#define KEY_NUMLOCK 0x53 // Keyboard Num Lock and Clear
#define KEY_KPSLASH 0x54 // Keypad /
#define KEY_KPASTERISK 0x55 // Keypad *
#define KEY_KPMINUS 0x56 // Keypad -
#define KEY_KPPLUS 0x57 // Keypad +
#define KEY_KPENTER 0x58 // Keypad ENTER
#define KEY_KP1 0x59 // Keypad 1 and End
#define KEY_KP2 0x5a // Keypad 2 and Down Arrow
#define KEY_KP3 0x5b // Keypad 3 and PageDn
#define KEY_KP4 0x5c // Keypad 4 and Left Arrow
#define KEY_KP5 0x5d // Keypad 5
#define KEY_KP6 0x5e // Keypad 6 and Right Arrow
#define KEY_KP7 0x5f // Keypad 7 and Home
#define KEY_KP8 0x60 // Keypad 8 and Up Arrow
#define KEY_KP9 0x61 // Keypad 9 and Page Up
#define KEY_KP0 0x62 // Keypad 0 and Insert
#define KEY_KPDOT 0x63 // Keypad . and Delete

//Etc
#define KEY_102ND 0x64 // Keyboard Non-US \ and |
#define KEY_COMPOSE 0x65 // Keyboard Application
#define KEY_POWER 0x66 // Keyboard Power
#define KEY_KPEQUAL 0x67 // Keypad =

//Extra Function
#define KEY_F13 0x68 // Keyboard F13
#define KEY_F14 0x69 // Keyboard F14
#define KEY_F15 0x6a // Keyboard F15
#define KEY_F16 0x6b // Keyboard F16
#define KEY_F17 0x6c // Keyboard F17
#define KEY_F18 0x6d // Keyboard F18
#define KEY_F19 0x6e // Keyboard F19
#define KEY_F20 0x6f // Keyboard F20
#define KEY_F21 0x70 // Keyboard F21
#define KEY_F22 0x71 // Keyboard F22
#define KEY_F23 0x72 // Keyboard F23
#define KEY_F24 0x73 // Keyboard F24

//Shortcuts
#define KEY_OPEN 0x74 // Keyboard Execute
#define KEY_HELP 0x75 // Keyboard Help
#define KEY_PROPS 0x76 // Keyboard Menu
#define KEY_FRONT 0x77 // Keyboard Select
#define KEY_STOP 0x78 // Keyboard Stop
#define KEY_AGAIN 0x79 // Keyboard Again
#define KEY_UNDO 0x7a // Keyboard Undo
#define KEY_CUT 0x7b // Keyboard Cut
#define KEY_COPY 0x7c // Keyboard Copy
#define KEY_PASTE 0x7d // Keyboard Paste
#define KEY_FIND 0x7e // Keyboard Find
#define KEY_MUTE 0x7f // Keyboard Mute
#define KEY_VOLUMEUP 0x80 // Keyboard Volume Up
#define KEY_VOLUMEDOWN 0x81 // Keyboard Volume Down

//outPin = row, inPin = col
uint8_t scancodeBank[9][8] = { {KEY_GRAVE,      KEY_NONE,     KEY_SPACE,    KEY_6,     KEY_I,      KEY_SEMICOLON,    KEY_BACKSPACE,    KEY_RIGHT},    // `, FN, Space, 6, I, ;, Backspace, RightArrow  
                               {KEY_TAB,        KEY_2,        KEY_4,        KEY_Y,     KEY_K,      KEY_DOT,          KEY_BACKSLASH,    KEY_NONE},    // Tab, 2, 4, Y, K, ., \, UNIQUE KEY 4
                               {KEY_CAPSLOCK,   KEY_W,        KEY_R,        KEY_H,     KEY_M,      KEY_MINUS,        KEY_ENTER,        KEY_NONE},    // Caps, W, R, H, M, -, Return, UNIQUE KEY 3
                               {KEY_NONE,       KEY_S,        KEY_F,        KEY_B,     KEY_9,      KEY_LEFTBRACE,    KEY_DELETE,       KEY_NONE},    // LShift, S, F, B, 9, [, Delete, UNIQUE KEY 1 
                               {KEY_NONE,       KEY_X,        KEY_C,        KEY_7,     KEY_O,      KEY_APOSTROPHE,   KEY_NONE,         KEY_NONE},    // LCtrl, X, C, 7, O, ', ArrowKeysLeftButton, UNIQUE KEY 2
                               {KEY_1,          KEY_NONE,     KEY_5,        KEY_U,     KEY_L,      KEY_SLASH,        KEY_LEFT,         KEY_ESC},    // 1, LAlt, 5, U, L, /, LeftArrow, Esc
                               {KEY_Q,          KEY_3,        KEY_T,        KEY_J,     KEY_COMMA,  KEY_INSERT,       KEY_UP,           KEY_NONE},    // Q, 3, T, J, ,, Insert, UpArrow, None
                               {KEY_A,          KEY_E,        KEY_G,        KEY_N,     KEY_0,      KEY_EQUAL,        KEY_DOWN,         KEY_NONE},    // A, E, G, N, 0, =, DownArrow, None
                               {KEY_Z,          KEY_D,        KEY_V,        KEY_8,     KEY_P,      KEY_RIGHTBRACE,   KEY_NONE,         KEY_NONE} };  // Z, D, V, 8, P, ], ArrowKeysRightButton, None

uint8_t modifierBank[9][8] = { {KEY_NONE,       KEY_MOD_LMETA,     KEY_NONE,     KEY_NONE,  KEY_NONE,   KEY_NONE,         KEY_NONE,         KEY_NONE}, //Meta
                               {KEY_NONE,       KEY_NONE,          KEY_NONE,     KEY_NONE,  KEY_NONE,   KEY_NONE,         KEY_NONE,         KEY_NONE},
                               {KEY_NONE,       KEY_NONE,          KEY_NONE,     KEY_NONE,  KEY_NONE,   KEY_NONE,         KEY_NONE,         KEY_NONE},
                               {KEY_MOD_LSHIFT, KEY_NONE,          KEY_NONE,     KEY_NONE,  KEY_NONE,   KEY_NONE,         KEY_NONE,         KEY_NONE},    //LShift
                               {KEY_MOD_LCTRL,  KEY_NONE,          KEY_NONE,     KEY_NONE,  KEY_NONE,   KEY_NONE,         KEY_NONE,         KEY_NONE},    //LCtrl
                               {KEY_NONE,       KEY_MOD_LALT,      KEY_NONE,     KEY_NONE,  KEY_NONE,   KEY_NONE,         KEY_NONE,         KEY_NONE},    //LAlt
                               {KEY_NONE,       KEY_NONE,          KEY_NONE,     KEY_NONE,  KEY_NONE,   KEY_NONE,         KEY_NONE,         KEY_NONE},    
                               {KEY_NONE,       KEY_NONE,          KEY_NONE,     KEY_NONE,  KEY_NONE,   KEY_NONE,         KEY_NONE,         KEY_NONE},
                               {KEY_NONE,       KEY_NONE,          KEY_NONE,     KEY_NONE,  KEY_NONE,   KEY_NONE,         KEY_NONE,         KEY_NONE} };
