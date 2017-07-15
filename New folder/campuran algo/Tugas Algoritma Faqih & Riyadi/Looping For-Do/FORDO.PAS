program fordo;
uses crt;
var
 n,i:integer;
begin
clrscr;
write('Masukkan Nilai : '); readln(n);
for i:=1 to n do
begin
writeln('Nilai ke-',i);
end;
readln;
end.