set(TARGET cubeLand)

include_directories(
    $ENV{Libraries}/glfw-3.2.1.bin.WIN64/include/GLFW
    $ENV{Libraries}/glm/glm
)

link_directories(
    $ENV{Libraries}/glfw-3.2.1.bin.WIN64/lib-vc2015
)

set(SOURCE_FILES
    main.cpp
)

add_executable(${TARGET} ${SOURCE_FILES})

target_link_libraries(${TARGET}
	opengl32
    glfw3
)