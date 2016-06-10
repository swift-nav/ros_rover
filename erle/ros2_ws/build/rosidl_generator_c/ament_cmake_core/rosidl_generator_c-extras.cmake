# generated from rosidl_generator_c/rosidl_generator_c-extras.cmake

find_package(ament_cmake_core QUIET REQUIRED)
ament_register_extension(
  "rosidl_generate_interfaces"
  "rosidl_generator_c"
  "rosidl_generator_c_generate_interfaces.cmake")

set(rosidl_generator_c_BIN
  "${rosidl_generator_c_DIR}/../../../lib/rosidl_generator_c/rosidl_generator_c")
normalize_path(rosidl_generator_c_BIN "${rosidl_generator_c_BIN}")

set(rosidl_generator_c_GENERATOR_FILES
  "${rosidl_generator_c_DIR}/../../../lib/python3.4/site-packages/rosidl_generator_c/__init__.py")
normalize_path(rosidl_generator_c_GENERATOR_FILES
  "${rosidl_generator_c_GENERATOR_FILES}")

set(rosidl_generator_c_TEMPLATE_DIR
  "${rosidl_generator_c_DIR}/../resource")
normalize_path(rosidl_generator_c_TEMPLATE_DIR
  "${rosidl_generator_c_TEMPLATE_DIR}")
