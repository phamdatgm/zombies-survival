@echo off
cd /d "%~dp0"
echo Open http://localhost:8090/  (newest build)
start "" http://localhost:8090/
node server.mjs 8090
