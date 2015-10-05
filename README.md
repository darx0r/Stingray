# Stingray

Stingray is an IDAPython plugin.
Its main feature is searching strings from the current position onwards in the 
current function. 
It can do it recursively also. The results order is the natural order of 
strings in the BFS search tree. 

For each found string it displays the xref address, the string address, 
the string type and the of course the string itself.

## Requirements

- IDA (Hex Rays Interactive Disassembler) version >= 6 with IDAPython

## Installation

1. Copy Stingray.py file to the plugins directory of IDA (%IDAPATH%\plugins) and 
restart IDA.

2. You are ready to go :)

## Usage and Menus

load your favourite binary with IDA. 
To find strings in the current function from your your position onwards 
hit **Shift+s**.

Stingray can also be found in Edit/Plguins/Stingray menu.

Stingray finds strings recursively ! you can configure the search depth in
the Stingray Config menu.

### Stingray Config

You can configure Stingray anytime from Options\Stingray Config menu.

You can configure the search depth. For non-recursive search mode
choose 0 depth.
