program repeatuntil;
uses crt;
var a,b,n,p:string;
procedure login;
begin
clrscr;
writeln('Halaman Login');
write('Nama : '); readln(n);
write('Pass : '); readln(p);
if(n=a) and (p=b) then
write('Selamat Datang ',a)
else write('Nama atau Pass Salah!');
readln;
end;
begin
clrscr;
writeln('Pendaftaran');
write('Masukan Nama : '); readln(a);
write('Masukan Pass : '); readln(b);
repeat
login
until (n=a) and (p=b);
readln;
end.