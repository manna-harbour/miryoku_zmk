#!make

unzip:
	unzip ./tmp/miryoku_zmk-corne_left-*.zip
	rm matrix.txt
	mv zmk.uf2 left.uf2
	unzip ./tmp/miryoku_zmk-corne_right-*.zip
	rm matrix.txt
	mv zmk.uf2 right.uf2

left-flash-nicenano:
	mv left.uf2 /media/davidg/NICENANO/

right-flash-nicenano:
	mv right.uf2 /media/davidg/NICENANO/

left-flash-mikoto:
	mv left.uf2 /media/davidg/MIKOTO-BOOT/

right-flash-mikoto:
	mv right.uf2 /media/davidg/MIKOTO-BOOT/

clean:
	-rm matrix.txt
	-rm left.uf2.txt
	-rm right.uf2.txt
	-rm tmp/*.zip
