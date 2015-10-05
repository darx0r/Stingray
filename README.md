# Stingray

Stingray searches strings from the current position onwards in the 
current function. The results order is the natural order of strings in the 
BFS search tree. 

For each found string it displays the xref address, the string address, 
the string type and the of course the string itself.

## Requirements

- IDA (Hex Rays Interactive Disassembler) version >= 6 with IDAPython

## Installation

Copy Stingray.py file to the plugins directory of IDA (%IDAPATH%\plugins) and 
restart IDA.

## Usage and Menus

load your favourite binary with IDA. 
To find strings in the current function from your your position onwards 
hit **Shift+s**.

Stingray also can be found in Edit/Plguins/Stingray menu.

Stingray finds strings recursively ! you can change the recursion depth in
the Stingray Config menu.

### Stingray Config

You can configure Stingray anytime from Options\Stingray Config menu.
For now, the recursion depth is configurable. For non-recursive search mode
choose 0 depth.
