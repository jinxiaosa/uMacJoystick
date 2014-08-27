#--------------------------------------------------------
# The CMakeLists.txt for:                       uMacJoystick
# Author(s):                              Rui YANG
#--------------------------------------------------------

# FILE(GLOB SRC *.cpp)

SET(SRC
  MacJoystick.cpp
  MacJoystick_Info.cpp
  main.cpp
)



ADD_EXECUTABLE(uMacJoystick ${SRC})

TARGET_LINK_LIBRARIES(uMacJoystick
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

