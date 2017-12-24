# jsxnice

jsxnice is an [jsxstyle](https://github.com/smyte/jsxstyle) like api for [bs-nice](https://github.com/threepointone/bs-nice/)

> this is a protoype so please treat it like so and if you are willing to improve it, you are more than welcome to do so

## show me how

```reason
<Box width=(Percent(100.)) fontFamily="Helvetica">
    <Box
        backgroundColor=Gray
        width=(Percent(50.))
        padding=(Px(16))
        borderRadius=(Px(10))
        color=White>
        (ReasonReact.stringToElement("This is pretty pretty nice ;)"))
    </Box>
    <Row width=(Percent(100.0)) justifyContent=SpaceAround>
        <h1> (ReasonReact.stringToElement("Hello")) </h1>
        <h1> (ReasonReact.stringToElement("My friend :)")) </h1>
    </Row>
</Box>
```

## components

we are using the same components that jsxstyle uses

* Block (`display: block;`) _not yet, small bug with bs but soon enough_
* Inline (`display: inline;`)
* InlineBlock (`display: inline-block;`)
* Row (`display: flex; flex-direction: row;`)
* Col (`display: flex; flex-direction: column;`)
* Grid (`display: grid;`) _not yet, but soon_
* Box (none default styles)

## example

to run the example just open the file `src/index.html`

if you want to modify it run `npm start` for the bs compiler and in another window `npm run webpack` to bundle and reload the `src/index.html` file
