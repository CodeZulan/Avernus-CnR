# Avernus Cops and Robbers

## What the heck is this?
Well I am bored so I created a Cops & Robbers Gamemode why not?

## I want to suggest!
Create a pull request containing your markdown file.
Here is a cool format to do your suggestion markdown.

##### filename: `suggestion.md`
##### Inside suggestion.md:
```
# Title of the Suggestion
## Subtitle of the suggestion
### Explanation
### Media Supporting the Recommendation (Optional)
[image](http://imagelink)

```

## Can I help?
Yes! I welcome contributors for this open-source project check out the tutorial below on how to contribute.

### How do I help?
##### 1. So first you need to clone this repository. [https://github.com/CodeZulan/Avernus-CnR.git]
##### 2. Use sampctl to initialize this repository in your local files and we recommend using Visual Studio Code as your IDE.
##### 3. then follow these sampctl commands:
- `sampctl p ensure`
- `sampctl p build`
- `sampctl p run`
##### if no errors, then everything was done correctly.

##### 4. Then follow these proper ways on how to make our code clean and uniform.
- In this gamemode, it's best to use the `K & R` style for brackets all the times to keep the style uniform.
```c
if(IsPlayerConnected(playerid))
{
    return true;
}
```
- We require contributors to make their own module inside the `core` or the `utils` library when making new systems, then include them inside the `core.inc` or `utils.inc`.
- Make sure to use proper includes on your module
- TIP: use my `acnr_colors` include for colors, don't make your own.