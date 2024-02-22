add_executable(1_3MyFirstWidget)
file(GLOB_RECURSE sources CONFIGURE_DEPENDS *.cpp *.h)

target_sources(1_3MyFirstWidget PRIVATE ${sources})
target_include_directories(1_3MyFirstWidget PUBLIC include)
target_link_libraries(1_3MyFirstWidget
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)