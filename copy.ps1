& "$PSScriptRoot/build.ps1"

adb shell am force-stop com.Really.Virtuoso

Get-ChildItem -rec -file -path libs -filter *.so  | ForEach-Object
{
    adb push $_.FullName "/sdcard/Android/data/com.Really.Virtuoso/files/libs/"
}
