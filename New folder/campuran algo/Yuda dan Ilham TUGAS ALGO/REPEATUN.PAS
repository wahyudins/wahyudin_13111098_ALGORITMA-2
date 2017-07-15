program repeatuntil;
uses crt;
var
i:byte;
begin
clrscr;
i:=0;
begin
repeat
i:=i+2;
write(i);
until i=8
end;
readln;
end.