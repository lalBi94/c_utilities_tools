@echo off
mode con:cols=100 lines=20
:boucle

path C:\Users\probo\Desktop\c_utilities_tools\licence_manager_src\bin\minGW\bin


echo .-.    _                                 .-..-.                                     
echo : :   :_;                                : `' :                                     
echo : :   .-. .--.  .--. ,-.,-. .--.  .--.   : .. : .--.  ,-.,-. .--.   .--.  .--. .--. 
echo : :__ : :'  ..'' '_.': ,. :'  ..'' '_.'  : :; :' .; ; : ,. :' .; ; ' .; :' '_.': ..'
echo :___.':_;`.__.'`.__.':_;:_;`.__.'`.__.'  :_;:_;`.__,_;:_;:_;`.__,_;`._. ;`.__.':_;  
echo                                                                     .-. :           
echo                                                                     `._.'           by. Bilaal#7175
echo:
echo:

echo [COMPILATION EN COURS FRAICHEUR NUPTIALE]
cd "C:\Users\probo\Desktop\c_utilities_tools\licence_manager_src"
gcc *.c -o licenceManage

echo [PROGRAMME EXECUTE ESPECE DE BG]
if not exist licenceManage color f0
if exist licenceManage color f0
licenceManage a y39df

echo [APPUIES ICI SI TU VEUX REFAIRE UNE COMPILATION BG INTERGALACTIQUE]
pause >nul
del a.exe
cls

goto boucle