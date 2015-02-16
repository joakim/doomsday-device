# The Doomsday Device

### Deploy like there's no tomorrow.

![Doomsday device](http://i.imgur.com/PsQPON1.gif)

It's an extremely elaborate way to press Enter.

You flip the two switches, turn the key, lift the lid and push the red button. A red light starts to flash, and once it stops, it goes… `[Enter]`

Perfect for deploying code.


## What?

The device is actually a USB hub that I bought [from Japan](http://www.zariganiworks.co.jp/taroshooten/catalog/index.html). But all it did was [play a lame sound effect](https://www.youtube.com/watch?v=qDRRYdksG9s). So I modded it to register as a USB keyboard and hit Enter instead of playing a sound. Much better!


## How?

[Teensy](https://www.pjrc.com/teensy/) is how. Inside the device, I cut the wire to the built-in speaker (it was red, so it felt a bit like defusing a bomb) and attached it to one of Teensy's analog inputs. I then wrote [a simple Arduino sketch](https://github.com/joakim/doomsday-device/blob/master/DoomsdayDevice.ino) that reads the input value (basically the sound sent to the speaker) and hits `[Enter]` at what would've been the end of the explosion. That's also right when the light stops flashing. Makes for good suspense.


## Why?

I could't think of a single reason _not_ to.


## Where can I…

They're unfortunately sold out and very hard to find. They were made by [Taro Shooten](http://www.zariganiworks.co.jp/taroshooten/catalog/index.html), two Japanese guys who make toys for a living. I got hold of mine from the Japanese Amazon, but it was the last one they had, and I haven't seen it anywhere else. Maybe try Ebay?

The publisher of the thing is Cube Works. They have more information and a slick video of the device on [their website](http://www.cube-works.co.jp/works/index_sub_e.html?/works/works_menu_e.html), select Taro Shooten and scroll down.


## License

[The End Of The World License (EOTW)](https://github.com/joakim/doomsday-device/blob/master/LICENSE)
