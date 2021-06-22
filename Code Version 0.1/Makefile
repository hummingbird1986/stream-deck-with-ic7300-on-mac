CC=$(CROSS)gcc
CFLAGS=-Wall -o
SOURCE0=$(shell find Func -name "*.c")
SOURCE1=$(notdir $(SOURCE0))
NAME=$(basename $(SOURCE1))
all:
	for APP_NAME in $(SOURCE1); do \
		Name="$$(basename $${APP_NAME%.*})"; \
		mkdir -p "./build/$${Name}.app"/Contents/{MacOS,Resources}; \
		${CC} ${CFLAGS} $${Name} Func/$${APP_NAME} serial_config.c; \
		mv $${Name} ./build/$${Name}.app/Contents/MacOS; \
		cp Info.plist ./build/$${Name}.app/Contents; \
		cp PkgInfo ./build/$${Name}.app/Contents; \
		sed -e "s/UName/$${Name}/g" -i "" "./build/$${Name}.app/Contents/Info.plist"; \
		echo "$${Name} has been compiled"; \
	done

