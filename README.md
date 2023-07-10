# Picopad Playground

This is a slightly modified https://github.com/tvecera/picopad-playground repository with some minor tweaks for easy and automated compilation under Ubuntu 22 WSL for Windows. Uses information from @kevinar user on Twitter: https://twitter.com/kevinarcz/status/1678023837957365761?s=20.

## Howto:

Install Ubuntu 22 as WSL:

```cmd
C:\> wsl --install Ubuntu-22.04 
```

then run Terminal with Ubuntu-22 LTS in it. You should get the Bash prompt (`$ `). 
Clone this repository there:

```bash
$ git clone --recurse-submodules https://github.com/misch2/picopad-playground
$ cd picopad-playground
$ git checkout easymake
```

Copy your GB ROM (.gb file) there. Replace XXX and YYY in the path with real folder names. WSL2 allows access to the Windows drives using `/mnt/X/...` syntax so for example your `C:\Users\Michal\Downloads` folder can be accessed as `/mnt/c/Users/Michal/Downloads`:

```
cp /mnt/t/Users/XXXYourName/Downloads/YYY.gb allinone/rom.gb
```

Compile everything using the Makefile in the `allinone/` subfolder:

```
$ make -C allinone
```

This should produce PICOPAD-GB.PP2 and file in `allinone/build` subfolder as in this example:

```
drwxr-xr-x 2 xxx yyy   4096 Jul 10 18:38 .
drwxr-xr-x 4 xxx yyy   4096 Jul 10 19:07 ..
-rwxr-xr-x 1 xxx yyy 131120 Jul 10 19:12 PICOPAD-GB.PP2
-rw-r--r-- 1 xxx yyy 198656 Jul 10 19:12 pico-bootloader.uf2
```








## PyPicoPadImg Generator

This Python program is designed to generate image arrays compatible with Picopad SDK. It takes an image file as input and 
creates a C array of pixel values, ready to be used in your Picopad SDK software. The program utilizes the 
Run-Length Encoding (RLE) compression technique to reduce the memory footprint of the images.

Please note that this software currently only tested on 8-bit PNG images using a color lookup table (palette).

The code of this generator is based on the original Picopad SDK source code.

## PyConvertLoaderImg

PyConvertLoaderImg is a Python-based tool that is capable of converting images into 16-bit BMP images. This tool
specifically generates images that are compatible with the Picopad loader application.

The tool reads image files, provides some basic information about them, downsamples the images by reducing the bit depth
of each color channel, and saves the resulting image as a 16-bit BMP file.

## Picopad TFT Display emulator

This project provides an emulator for the TFT display of Picopad handheld devices. It's designed to assist in the
prototyping and development of applications for Picopad handhelds. With this tool, you can easily prepare and test your
display code using the API of the Picopad SDK.

The code of this emulator is based on the original Picopad SDK source code.

## Picopad SDK Pico SDK Fork

Fork of the Picopad SDK, built on the Pico SDK. The goal was to add the capability to use libraries for the Pico SDK 
on the Picopad.

## Links

- Picopad from Pajenicko e-shop
- Picopad SDK (https://github.com/Pajenicko/Picopad)
