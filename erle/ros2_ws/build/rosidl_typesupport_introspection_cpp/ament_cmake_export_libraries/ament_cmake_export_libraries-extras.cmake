# generated from ament_cmake_export_libraries/cmake/template/ament_cmake_export_libraries.cmake.in

set(_exported_library_targets "rosidl_typesupport_introspection_cpp")
set(_exported_absolute_libraries "")
set(_exported_library_names "")

# find_library() targets relative to this CMake file
# and add the libraries to rosidl_typesupport_introspection_cpp_LIBRARIES
if(NOT "${_exported_library_targets} " STREQUAL " ")
  # loop over library targets
  # but remember related build configuration keyword if available
  list(LENGTH _exported_library_targets _length)
  set(_i 0)
  while(_i LESS _length)
    list(GET _exported_library_targets ${_i} _arg)
    if("${_arg}" MATCHES "^debug|optimized|general$")
      # remember build configuration keyword
      # and get following library target
      set(_cfg "${_arg}")
      math(EXPR _i "${_i} + 1")
      if(_i EQUAL _length)
        message(FATAL_ERROR "Package 'rosidl_typesupport_introspection_cpp' passes the build configuration keyword '${_cfg}' as the last exported target")
      endif()
      list(GET _exported_library_targets ${_i} _library_target)
    else()
      # the value is a library target without a build configuration keyword
      set(_cfg "")
      set(_library_target "${_arg}")
    endif()
    math(EXPR _i "${_i} + 1")

    # search for library relative to this CMake file
    set(_lib "NOTFOUND")
    find_library(
      _lib NAMES "${_library_target}"
      PATHS "${rosidl_typesupport_introspection_cpp_DIR}/../../../lib"
      NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH
    )

    if(NOT _lib)
      # warn about not existing library and ignore it
      message(FATAL_ERROR "Package 'rosidl_typesupport_introspection_cpp' exports the library '${_library_target}' which couldn't be found")
    elseif(NOT IS_ABSOLUTE "${_lib}")
      # the found library must be an absolute path
      message(FATAL_ERROR "Package 'rosidl_typesupport_introspection_cpp' found the library '${_library_target}' at '${_lib}' which is not an absolute path")
    elseif(NOT EXISTS "${_lib}")
      # the found library must exist
      message(FATAL_ERROR "Package 'rosidl_typesupport_introspection_cpp' found the library '${_lib}' which doesn't exist")
    else()
      list(APPEND rosidl_typesupport_introspection_cpp_LIBRARIES ${_cfg} "${_lib}")
    endif()
  endwhile()
endif()

# append absolute libraries to rosidl_typesupport_introspection_cpp_LIBRARIES
if(NOT "${_exported_absolute_libraries} " STREQUAL " ")
  # loop over absolute libraries
  # but remember related build configuration keyword if available
  list(LENGTH _exported_absolute_libraries _length)
  set(_i 0)
  while(_i LESS _length)
    list(GET _exported_absolute_libraries ${_i} _arg)
    if("${_arg}" MATCHES "^debug|optimized|general$")
      # remember build configuration keyword
      # and get following absolute library
      set(_cfg "${_arg}")
      math(EXPR _i "${_i} + 1")
      if(_i EQUAL _length)
        message(FATAL_ERROR "Package 'rosidl_typesupport_introspection_cpp' passes the build configuration keyword '${_cfg}' as the last exported target")
      endif()
      list(GET _exported_absolute_libraries ${_i} _absolute_library)
    else()
      # the value is an absolute library without a build configuration keyword
      set(_cfg "")
      set(_absolute_library "${_arg}")
    endif()
    math(EXPR _i "${_i} + 1")

    if(NOT EXISTS "${_absolute_library}")
      # the found library must exist
      message(WARNING "Package 'rosidl_typesupport_introspection_cpp' exports the library '${_absolute_library}' which doesn't exist")
    else()
      list(APPEND rosidl_typesupport_introspection_cpp_LIBRARIES ${_cfg} "${_absolute_library}")
    endif()
  endwhile()
endif()

# find_library() library names with optional LIBRARY_DIRS
# and add the libraries to rosidl_typesupport_introspection_cpp_LIBRARIES
if(NOT "${_exported_library_names} " STREQUAL " ")
  # loop over library names
  # but remember related build configuration keyword if available
  list(LENGTH _exported_library_names _length)
  set(_i 0)
  while(_i LESS _length)
    list(GET _exported_library_names ${_i} _arg)
    if("${_arg}" MATCHES "^debug|optimized|general$")
      # remember build configuration keyword
      # and get following library name
      set(_cfg "${_arg}")
      math(EXPR _i "${_i} + 1")
      if(_i EQUAL _length)
        message(FATAL_ERROR "Package 'rosidl_typesupport_introspection_cpp' passes the build configuration keyword '${_cfg}' as the last exported target")
      endif()
      list(GET _exported_library_names ${_i} _library)
    else()
      # the value is a library target without a build configuration keyword
      set(_cfg "")
      set(_library "${_arg}")
    endif()
    math(EXPR _i "${_i} + 1")

    # extract optional LIBRARY_DIRS from library name
    string(REPLACE ":" ";" _library_dirs "${_library}")
    list(GET _library_dirs 0 _library_name)
    list(REMOVE_AT _library_dirs 0)

    set(_lib "NOTFOUND")
    if(NOT _library_dirs)
      # search for library in the common locations
      find_library(
        _lib
        NAMES "${_library_name}"
      )
      if(NOT _lib)
        # warn about not existing library and later ignore it
        message(WARNING "Package 'rosidl_typesupport_introspection_cpp' exports library '${_library_name}' which couldn't be found")
      endif()
    else()
      # search for library in the specified directories
      find_library(
        _lib
        NAMES "${_library_name}"
        PATHS ${_library_dirs}
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH
      )
      if(NOT _lib)
        # warn about not existing library and later ignore it
        message(WARNING "Package 'rosidl_typesupport_introspection_cpp' exports library '${_library_name}' with LIBRARY_DIRS '${_library_dirs}' which couldn't be found")
      endif()
    endif()
    if(_lib)
      list(APPEND rosidl_typesupport_introspection_cpp_LIBRARIES ${_cfg} "${_lib}")
    endif()
  endwhile()
endif()

# deduplicate rosidl_typesupport_introspection_cpp_LIBRARIES
# while maintaining library order
# as well as build configuration keywords
# TODO
