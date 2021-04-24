import std.stdio : readln, writeln;
import std.string : chomp;
import std.conv : to;

void main() {
  auto n = readln.chomp.to!int;
  writeln(n - 1);
}
