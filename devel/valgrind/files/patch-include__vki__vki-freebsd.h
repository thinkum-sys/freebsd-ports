--- include/vki/vki-freebsd.h.orig	2020-04-28 07:27:40.998968000 +0000
+++ include/vki/vki-freebsd.h	2020-04-28 07:41:23.465385000 +0000
@@ -224,6 +224,11 @@
 #define SELFMAG	4		/* magic string size */
 #endif
 
+// see http://bugs.freebsd.org/bugzilla/show_bug.cgi?id=239669
+#if !defined(ELF_NOTE_GNU)
+#define ELF_NOTE_GNU "GNU"
+#endif
+
 //----------------------------------------------------------------------
 // From sys/syslimits.h
 //----------------------------------------------------------------------
@@ -714,6 +719,7 @@
 
 #define VKI_SOCK_STREAM	1
 
+#include <sys/types.h>
 #include <netinet/tcp.h>
 
 #define VKI_TCP_NODELAY  TCP_NODELAY
@@ -1946,11 +1952,23 @@
 #define VKI_I386_SET_FSBASE     8
 #define VKI_I386_GET_GSBASE     9
 #define VKI_I386_SET_GSBASE     10
+#define VKI_I386_SET_XFPUSTATE	11
 
 #define VKI_AMD64_GET_FSBASE    128
 #define VKI_AMD64_SET_FSBASE    129
 #define VKI_AMD64_GET_GSBASE    130
 #define VKI_AMD64_SET_GSBASE    131
+#define	VKI_AMD64_GET_XFPUSTATE	132
+
+typedef struct vki_i386_get_xfpustate {
+	unsigned int addr;
+	int len;
+};
+
+typedef struct vki_amd64_get_xfpustate {
+	void *addr;
+	int len;
+};
 
 //----------------------------------------------------------------------
 // From sys/module.h
