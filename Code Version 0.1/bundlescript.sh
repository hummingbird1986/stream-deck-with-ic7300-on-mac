#!/bin/bash
mkdir -p ./build/NAME.app/Contents/{MacOS,Resources}
cp ./NAME ./build/NAME.app/Contents/MacOS
Touch ./build/NAME.app/Contents/PkgInfo
echo APPL???? > ./build/NAME.app/Contents/PkgInfo
touch ./build/NAME.app/Contents/Info.plist
echo "
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>CFBundlePackageType</key>
    <string>APPL</string>
    <key>CFBundleExecutable</key>
    <string/NAME</string>
    <key>LSUIElement</key>
    <string>1</string>
</dict>
</plist>
" > ./build/NAME.app/Contents/Info.plist