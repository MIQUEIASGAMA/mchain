
Debian
====================
This directory contains files used to package mchaind/mchain-qt
for Debian-based Linux systems. If you compile mchaind/mchain-qt yourself, there are some useful files here.

## mchain: URI support ##


mchain-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mchain-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mchain-qt binary to `/usr/bin`
and the `../../share/pixmaps/bitcoin128.png` to `/usr/share/pixmaps`

mchain-qt.protocol (KDE)

