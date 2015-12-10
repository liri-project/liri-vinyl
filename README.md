# Vinyl Music
The official repo for Vinyl Music (previously called material music).  The idea was to make a pretty, cross platform music player.

For current functionality, see the "Features" section below.

I played around with using python as the backend, but since, have resolved to only use c++/qml, so the ridiculous dependencies of python have been removed.  Now you just need Qt5 and qml-material.


### Dependencies
	Qt:
		Qt5.5 (Tested using 5.5.1)
		qml-material (https://github.com/papyros/qml-material)

Vinyl Music is still very early in development, however, if you'd like to give it a try, just install the dependencies, and then run the following from within the vinyl-music directory to launch:

qml ./main.qml

Or you could build it by opening the project file in Qt Creator, or by running the following (from the vinyl-music subdirectory [containing the .pro file):

	qmake
	make
	make install


### Features
##### Keyboard Navigation:
	Spacebar = play/pause
	Left Arrow = previous track (if any)
	Right Arrow = next track
	up/down = volume up/down
	
##### Local Music
Just drop your music folders into ~/Music, and Vinyl Music will find them
	
##### Online Streams
Download online streams in m3u format, and save them to ~/Music/streams

##### Shuffle
This part is still a WIP, as vinyl won't correctly go to the previous shuffled track when clicking previous; instead, it goes to track 0 (the first track in the folder).


### Screenshots
Latest version
![Image of Vinyl music]
(https://github.com/nickgermaine/vinyl-music/blob/master/images/screen3.png)

Prior to volume, online streams, settings, and bottom controls:
![Image of Material Music 1]
(https://github.com/nickgermaine/vinyl-music/blob/master/images/screen2.png)

Version 0.00.1
![Image of Material Music]
(https://github.com/nickgermaine/vinyl-music/blob/master/images/screen1.png)