Param(
    [Parameter(Mandatory=$false)]
    [Switch]$clean
)

# if user specified clean, remove all build files
if ($clean.IsPresent)
{
    if (Test-Path -Path "build")
    {
        Remove-Item "build" -R
    }
}

if (($clean.IsPresent) -or (-not (Test-Path -Path "build")))
{
    New-Item -Path "build" -ItemType Directory
} 

Set-Location build
& cmake -G "Ninja" -DCMAKE_BUILD_TYPE="Release" ../
& cmake --build .
Set-Location ..