#project(1_3MyFirstWidget)
add_executable(1_3MyFirstWidget)
file(GLOB_RECURSE sources CONFIGURE_DEPENDS *.cpp *.h)

target_sources(1_3MyFirstWidget PRIVATE ${sources})
target_include_directories(1_3MyFirstWidget PUBLIC include)
target_link_libraries(1_3MyFirstWidget
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)
message("---隐式生产的PROJECT_NAME---")
message( ${PROJECT_NAME})

# 不采用这种方法复制动态库，改为设置系统环境变量
#add_custom_command(TARGET 1_3MyFirstWidget POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E copy
#                "")

#
#    foreach (QT_LIB Core Gui Widgets)
#        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E copy
#                "${QT_INSTALL_PATH}/bin/Qt5${QT_LIB}${DEBUG_SUFFIX}.dll"
#                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
#    endforeach (QT_LIB)