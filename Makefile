MyProject : shoot.o shoot.c
	gcc shoot.o -o shoot
	./a.exe
MyProject : shoot.c
	gcc -c shoot.c -o shoot.o
installemsdk: 
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk && emsdk install latest && emsdk activate latest && emsdk_env.bat && emcc shoot.c -s WASM=1 -o shoot.html
	npm i http-server -g
runserver:
	cd .. && http-server
