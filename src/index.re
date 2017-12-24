open Jsxnice;

open Nice;

module Example = {
  let component = ReasonReact.statelessComponent("Example");
  let make = (_) => {
    ...component,
    render: (_) =>
      <Box width=(Percent(100.)) fontFamily="Helvetica">
        <Box
          backgroundColor=Gray
          width=(Percent(50.))
          padding=(Px(16))
          borderRadius=(Px(10))
          color=White>
          (ReasonReact.stringToElement("This is pretty pretty nice"))
        </Box>
        <Row width=(Percent(100.0)) justifyContent=SpaceAround>
          <h1> (ReasonReact.stringToElement("Hello")) </h1>
          <h1> (ReasonReact.stringToElement("My friend :)")) </h1>
        </Row>
      </Box>
  };
};

ReactDOMRe.renderToElementWithId(<Example />, "index");