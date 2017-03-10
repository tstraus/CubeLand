set(TARGET cubeLand)

include_directories(
    $ENV{Libraries}/glfw-3.2.1.bin.WIN64/include/GLFW
    $ENV{Libraries}/glew-2.0.0/include/GL
    $ENV{Libraries}/glm/glm
)

link_directories(
    $ENV{Libraries}/glfw-3.2.1.bin.WIN64/lib-vc2015
    $ENV{Libraries}/glew-2.0.0/lib/Release/x64
)

set(SOURCE_FILES
    main.cpp
)

add_executable(${TARGET} ${SOURCE_FILES})

target_link_libraries(${TARGET}
	opengl32
    glfw3
    glew32
)