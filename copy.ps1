& "$PSScriptRoot/build.ps1"

adb shell am force-stop com.Really.Virtuoso

gci -rec -file -path libs -filter *.so  |
    % { adb push $_.FullName /sdcard/Android/data/com.Really.Virtuoso/files/libs/ }
