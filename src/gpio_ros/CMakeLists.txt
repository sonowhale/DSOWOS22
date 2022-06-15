cmake_minimum_required(VERSION 3.0.2)
project(gpio_ros)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package()

include_directories(
  # include
  ${catkin_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME}_node src/readGPIO.cpp)
find_libary(WIRINGPI_LIBRARIES NAMES wiringPi)
target_link_libraries(${PROJECT_NAME}_node ${catkin_LIBRARIES} ${WIRINGPI_LIBRARIES})
