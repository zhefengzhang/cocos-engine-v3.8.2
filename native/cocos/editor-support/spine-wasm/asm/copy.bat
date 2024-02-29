@echo off
set "spine_old=spine.js"
set "spine_new=spine.asm.js"

ren "%spine_old%" "%spine_new%"



@echo off
set "source_asm_js=spine.asm.js"
set "dest_asm_js=D:/code/cocos/cocos-editor/resources/3d/engine/native/external/emscripten/spine/spine.asm.js"

move "%source_asm_js%" "%dest_asm_js%"


@echo off
set "source_asm=spine.js.mem"
set "dest_asm=D:/code/cocos/cocos-editor/resources/3d/engine/native/external/emscripten/spine/spine.js.mem"

move "%source_asm%" "%dest_asm%"
