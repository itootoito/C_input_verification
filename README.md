## C_input_verification
Doesn't it suck when people ask you to sanitize your input and then you have to write a bunch of excessive code on your program?
This project aims to add an input verification function for every basic data type in C, so you won't have to waste your time on these petty things.

### How does it work?
My goal is making a function for every data type that looks like this: 

        <type> inputVer(char prompt[100]);

The prompt argument will print your user prompt on screen, while the function itself will scan and return the verified user input, or will ask
the user to try again if said input is invalid. Thus making the process of input sanitization easy and hopefully saving you lots of time!

### Can i help?
please. You can add anything you think will make the project better into the code.

### Can i use this?
Yes. And you don't need to credit me. I have a feeling i'll be ashamed of this project when i become a better programmer.


#### To do: 

- [x] add int function
- [ ] add float function
- [x] add double function
- [ ] add add char function
- [ ] some sort of boolean verification?
- [ ] find a way to make the invalid input prompt to appear only once when there's a space


#### Issues:
 - double verification isn't able to recognize values of zero written in certain ways. currently it WILL accept writing zero as: 0,  0.0, 0.000000
        -  fixing this is somewhat easy but may make the process more ineficient and i dont see that much use for fixing it atm. may implement fix later

###### WARNING: this is a newbie project, i am idiot
