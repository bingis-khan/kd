# kd - kind of an editor

my attempt at an editor written in [kc](https://github.com/bingis-khan/kkc). attempts to emulate helix control scheme.

![showcase](./screenshot.png)

## immediate reminders
- add :o and loading files later. this requires pane and textbuf management. (opening a new file must create a new textbuf and pane)


## todo

- [x] w,e,b jumping
- [x] scrolling and cursor jumping.
- [x] x line selection
  - [x] pasting whole lines (exact condition: ends in newline) does not paste them between characters.
- [x] cmd system
- [ ] line numbers
- [ ] jump to line number
- [ ] searching + wrapping (fwd and bwd)
- [x] SELECT mode
- [x] copy-paste (at deletion + when pressed y)
- [ ] indent dedent
- [x] undo/redo
- [x] undo/redo typed characters as full words.
- [ ] `g` and `<space>` submenu
- [ ] themes
- [x] editor messages (send message Str -> () which allocates and frees n stuff)
- ...
- [ ] filepicker (which respects .ignore and .gitignore) (will require more std functions.)
- ...
- [ ] syntax (keyword) highlighting
- ...
- [ ] hex edit mode (this requires file type detection)
- ...
- [ ] nice UI and animations
- [x] UTF8 handling
- [ ] multipane
- [ ] multicursor
- ...
- [ ] nice themes
- [ ] cmd autocomplete
- [ ] wq (i didn't add it on purpose. due to my muscle memory, i use it automatically,  but I don't want to overwrite important files accidentally)
- ...
- [ ] graphical backend


## ideas from gay nigger

- [ ] earlier/later commands (undo 5 mins)


## ideas

- cute, 60 FPS animation near or around the cursor when switching from Normal to Insert and back. (should make a special animation subsystem, which we can query if any animation is playing to check if we need to redraw)
- animations in general
  - opening the editor on a file causes letters to appear from left to right in half a sec.
  - background slowly fills the screen from top-left/center corner/ randomly fills in half a sec(tm) when the editor is opened.

