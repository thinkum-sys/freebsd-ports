# $FreeBSD$

PORTNAME=	dtc
PORTVERSION=	1.6.0
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	uboot@FreeBSD.org
COMMENT=	Device Tree Compiler

LICENSE=	GPLv2

USES=		bison gmake shebangfix pkgconfig
USE_LDCONFIG=	yes
SHEBANG_FILES=	dtdiff
PLIST_SUB+=	VERSION=${PORTVERSION}
PLIST_SUB+=	MVERSION=${PORTVERSION:S/./ /:[1]}

TEST_TARGET=	check
TEST_ENV=	STATSZ="stat -f %Uz"

USE_GITHUB=	yes
GH_ACCOUNT=	dgibson
GH_PROJECT=	dtc

MAKE_ARGS+=	PREFIX=${PREFIX} NO_PYTHON=yes \
		INSTALL_PROGRAM="${INSTALL_PROGRAM}" \
		INSTALL_LIB="${INSTALL_LIB}"

OPTIONS_DEFINE=		YAML

YAML_DESC=		Support YAML output format for dtc
YAML_LIB_DEPENDS=	libyaml.so:textproc/libyaml
YAML_VARS_OFF=		CFLAGS+=-DNO_YAML

_MK_VALGRIND_ARCH?=	i386 amd64
.for .A. in ${_MK_VALGRIND_ARCH}
OPTIONS_DEFINE_${.A.}+=	VALGRIND
.endfor

VALGRIND_DESC=		Use valgrind in tests
VALGRIND_VARS_OFF=	CFLAGS+=-DNO_VALGRIND
VALGRIND_VARS=		TEST_DEPENDS+=valgrind:devel/valgrind

TEST_TARGET=		check

.include <bsd.port.options.mk>

## FIXME a hack on the Makefile dependency management under *.d files
## These symlinks should be unused, otherwise.
post-patch:
	@${LN} -sf ${LOCALBASE}/include/yaml.h ${WRKSRC}/yaml.h
	@${MKDIR} ${WRKSRC}/valgrind
	@${LN} -sf ${LOCALBASE}/include/valgrind/memcheck.h ${WRKSRC}/valgrind/memcheck.h

.include <bsd.port.mk>
