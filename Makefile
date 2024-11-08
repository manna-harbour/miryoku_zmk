#!make

unzip:
	unzip ./tmp/miryoku_zmk-corne_left-nice_nano_v2-alphas_QWERTY.zip
	rm matrix.txt
	mv zmk.uf2 left.uf2
	unzip ./tmp/miryoku_zmk-corne_right-nice_nano_v2-alphas_QWERTY.zip
	rm matrix.txt
	mv zmk.uf2 right.uf2

left-flash:
	mv left.uf2 /media/davidg/NICENANO/

right-flash:
	mv right.uf2 /media/davidg/NICENANO/