set(SRC_LIST
  main.cpp
  mainwindow.cpp
  settings_dialog.cpp
  my_widgets.cpp
  obj_ident_app.cpp
  core/color_hist.cpp
  core/fourier_hist.cpp
  core/hough_hist.cpp
  core/img_descriptor.cpp
  core/gist.cpp
  core/svm.cpp
  core/knn.cpp
  core/deep_overfeat.cpp
  core/obj_ident.cpp
  ../3rdparty/src/libsvm.cpp
  ../3rdparty/src/libgist.cpp
  ../3rdparty/src/standalone_image.cpp
)

set(HEADER_LIST
  ../include/mainwindow.h
  ../include/settings_dialog.h
  ../include/my_widgets.h
  ../include/obj_ident_app.h
  ../include/common.h
  ../include/core/img_feature.h
  ../include/core/color_hist.h
  ../include/core/fourier_hist.h
  ../include/core/hough_hist.h
  ../include/core/img_descriptor.h
  ../include/core/gist.h
  ../include/core/svm.h  
  ../include/core/knn.h
  ../include/core/deep_overfeat.h
  ../include/core/obj_ident.h
)

WRAP_UI_FILE(HEADER_UI
  mainwindow.ui
  settings_dialog.ui
) 




add_library(OVERFEAT STATIC IMPORTED)
set_property(TARGET OVERFEAT PROPERTY
                IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/../3rdparty/OverFeat/src/liboverfeat.a)

add_library(TH STATIC IMPORTED)
set_property(TARGET TH PROPERTY
                IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/../3rdparty/OverFeat/src/libTH.a)

add_executable(ObjIdent WIN32 ${SRC_LIST} ${HEADER_LIST} ${HEADER_UI})

IF(USE_BLAS)
  TARGET_LINK_LIBRARIES(ObjIdent ${BLAS_LIBRARIES})
ENDIF(USE_BLAS)

IF(USE_LAPACK)
  TARGET_LINK_LIBRARIES(ObjIdent ${LAPACK_LIBRARIES})
ENDIF(USE_LAPACK)
target_link_libraries(ObjIdent OVERFEAT TH ${Qt_LIBS} ${OpenCV_LIBS} ${FFTWF_LIB} ${TBB_LIBRARIES} ${BLAS_LIBRARIES})
