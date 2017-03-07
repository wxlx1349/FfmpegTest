cmake_minimum_required(VERSION 3.4.1)



add_library( myffmpeg
             SHARED
             src/main/cpp/myffmpeg.cpp )


find_library( # Sets the name of the path variable.
              log-lib
              log )
#变量
set(distribution_DIR ../../../../libs)


add_library( libavcodec-56
              SHARED
              IMPORTED)
set_target_properties( libavcodec-56
                        PROPERTIES IMPORTED_LOCATION
                        ${distribution_DIR}/${ANDROID_ABI}/libavcodec-56.so)

   add_library( libavdevice-56
                SHARED
                IMPORTED)
   set_target_properties( libavdevice-56
                          PROPERTIES IMPORTED_LOCATION
                          ${distribution_DIR}/${ANDROID_ABI}/libavdevice-56.so)

   add_library( libavfilter-5
                SHARED
                IMPORTED)
   set_target_properties( libavfilter-5
                          PROPERTIES IMPORTED_LOCATION
                          ${distribution_DIR}/${ANDROID_ABI}/libavfilter-5.so)
   add_library( libavformat-56
                  SHARED
                  IMPORTED)
     set_target_properties( libavformat-56
                            PROPERTIES IMPORTED_LOCATION
                            ${distribution_DIR}/${ANDROID_ABI}/libavformat-56.so)
     add_library( libavutil-54
                    SHARED
                    IMPORTED)
       set_target_properties( libavutil-54
                              PROPERTIES IMPORTED_LOCATION
                              ${distribution_DIR}/${ANDROID_ABI}/libavutil-54.so)
     add_library( libpostproc-53
                    SHARED
                    IMPORTED)
       set_target_properties( libpostproc-53
                              PROPERTIES IMPORTED_LOCATION
                              ${distribution_DIR}/${ANDROID_ABI}/libpostproc-53.so)
     add_library( libswresample-1
                    SHARED
                    IMPORTED)
       set_target_properties( libswresample-1
                              PROPERTIES IMPORTED_LOCATION
                              ${distribution_DIR}/${ANDROID_ABI}/libswresample-1.so)
  add_library( libswscale-3
               SHARED
               IMPORTED)
   set_target_properties( libswscale-3
                          PROPERTIES IMPORTED_LOCATION
                          ${distribution_DIR}/${ANDROID_ABI}/libswscale-3.so)

 include_directories(src/main/cpp/include)

 #设置编译C的标准
 #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

target_link_libraries( # Specifies the target library.
                       myffmpeg
                       libavcodec-56
                       libavdevice-56
                       libavfilter-5
                       libavformat-56
                       libavutil-54
                       libpostproc-53
                       libswresample-1
                       libswscale-3
                       ${log-lib} )
