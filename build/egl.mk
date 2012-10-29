EGL ?= n

ifeq ($(EGL),y)

OPENGL = y
FREETYPE = y
LIBPNG = y
ENABLE_SDL = n

EGL_CPPFLAGS = -DUSE_EGL
EGL_LDLIBS = -lEGL

ifeq ($(shell test -f /opt/vc/include/interface/vmcs_host/vc_dispmanx.h && echo y),y)
# Raspberry Pi detected
EGL_CPPFLAGS += -DUSE_VIDEOCORE
EGL_CPPFLAGS += -isystem /opt/vc/include -isystem /opt/vc/include/interface/vcos/pthreads
EGL_LDLIBS += -L/opt/vc/lib -lvchostif -lvchiq_arm -lvcos -lbcm_host
else
EGL_CPPFLAGS += -DUSE_X11
EGL_LDLIBS += -lX11
endif

endif
