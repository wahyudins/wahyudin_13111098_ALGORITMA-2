program whiledo;
uses crt;
var i:integer;
begin
clrscr;
writeln('Looping While-Do');
i:=0;
while i < 10 do
begin
writeln('Looping ',i);
i:=i+1;
end;
readln;
end.