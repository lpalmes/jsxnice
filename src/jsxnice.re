open Nice;

module Box = {
  let component = ReasonReact.statelessComponent("Style");
  let make =
      (
        ~display: option(display)=?,
        ~width: option(dimension)=?,
        ~height: option(dimension)=?,
        ~top: option(dimension)=?,
        ~bottom: option(dimension)=?,
        ~left: option(dimension)=?,
        ~right: option(dimension)=?,
        ~minWidth: option(dimension)=?,
        ~maxWidth: option(dimension)=?,
        ~minHeight: option(dimension)=?,
        ~maxHeight: option(dimension)=?,
        ~margin: option(dimension)=?,
        ~marginVertical: option(dimension)=?,
        ~marginHorizontal: option(dimension)=?,
        ~marginTop: option(dimension)=?,
        ~marginBottom: option(dimension)=?,
        ~marginLeft: option(dimension)=?,
        ~marginRight: option(dimension)=?,
        ~padding: option(dimension)=?,
        ~paddingVertical: option(dimension)=?,
        ~paddingHorizontal: option(dimension)=?,
        ~paddingTop: option(dimension)=?,
        ~paddingBottom: option(dimension)=?,
        ~paddingLeft: option(dimension)=?,
        ~paddingRight: option(dimension)=?,
        ~borderWidth: option(dimension)=?,
        ~borderTopWidth: option(dimension)=?,
        ~borderBottomWidth: option(dimension)=?,
        ~borderLeftWidth: option(dimension)=?,
        ~borderRightWidth: option(dimension)=?,
        ~position: option(position)=?,
        ~flexDirection: option(flexDirection)=?,
        ~flexWrap: option(flexWrap)=?,
        ~justifyContent: option(justifyContent)=?,
        ~alignItems: option(alignItems)=?,
        ~alignSelf: option(alignSelf)=?,
        ~alignContent: option(alignContent)=?,
        ~overflow: option(overflow)=?,
        ~flex: option(int)=?,
        ~flexGrow: option(int)=?,
        ~flexShrink: option(int)=?,
        ~flexBasisi: option(int)=?,
        ~flexBasis: option(flexBasis)=?,
        ~shadowColor: option(color)=?,
        ~shadowOffset: option((int, int))=?,
        ~shadowOpacity: option(float)=?,
        ~shadowRadius: option(float)=?,
        ~transform: option(list(transformStyle))=?,
        ~backfaceVisibilty: option(backfaceVisibilty)=?,
        ~backgroundColor: option(color)=?,
        ~borderColor: option(color)=?,
        ~borderTopColor: option(color)=?,
        ~borderBottomColor: option(color)=?,
        ~borderLeftColor: option(color)=?,
        ~borderRightColor: option(color)=?,
        ~borderRadius: option(dimension)=?,
        ~borderTopRightRadius: option(dimension)=?,
        ~borderBottomLeftRadius: option(dimension)=?,
        ~borderBottomRightRadius: option(dimension)=?,
        ~borderTopLeftRadius: option(dimension)=?,
        ~borderStyle: option(borderStyle)=?,
        ~opacity: option(float)=?,
        ~elevation: option(float)=?,
        ~color: option(color)=?,
        ~fontFamily: option(string)=?,
        ~fontSize: option(float)=?,
        ~fontStyle: option(fontStyle)=?,
        ~fontWeight: option(fontWeight)=?,
        ~fontVariant: option(fontVariant)=?,
        ~textShadowOffset: option((float, float))=?,
        ~textShadowRadius: option(float)=?,
        ~textShadowColor: option(color)=?,
        ~letterSpacing: option(float)=?,
        ~lineHeight: option(float)=?,
        ~textAlign: option(textAlign)=?,
        ~textAlignVertical: option(textAlignVertical)=?,
        ~includeFontPadding: option(bool)=?,
        ~textDecorationLine: option(textDecorationLine)=?,
        ~textDecorationColor: option(color)=?,
        ~writingDirection: option(writingDirection)=?,
        ~resizeMode: option(resizeMode)=?,
        ~tintColor: option(color)=?,
        ~overlayColor: option(color)=?,
        ~mediaQuery: option((string, ruleset))=?,
        ~supports: option((string, ruleset))=?,
        ~select: option((string, ruleset))=?,
        ~raw: option((string, string))=?,
        children
      ) => {
    ...component,
    render: (_) => {
      let stylesProps = [
        switch display {
        | Some(v) => Some(Display(v))
        | None => None
        },
        switch width {
        | Some(v) => Some(Width(v))
        | None => None
        },
        switch height {
        | Some(v) => Some(Height(v))
        | None => None
        },
        switch top {
        | Some(v) => Some(Top(v))
        | None => None
        },
        switch bottom {
        | Some(v) => Some(Bottom(v))
        | None => None
        },
        switch left {
        | Some(v) => Some(Left(v))
        | None => None
        },
        switch right {
        | Some(v) => Some(Right(v))
        | None => None
        },
        switch minWidth {
        | Some(v) => Some(MinWidth(v))
        | None => None
        },
        switch maxWidth {
        | Some(v) => Some(MaxWidth(v))
        | None => None
        },
        switch minHeight {
        | Some(v) => Some(MinHeight(v))
        | None => None
        },
        switch maxHeight {
        | Some(v) => Some(MaxHeight(v))
        | None => None
        },
        switch margin {
        | Some(v) => Some(Margin(v))
        | None => None
        },
        switch marginVertical {
        | Some(v) => Some(MarginVertical(v))
        | None => None
        },
        switch marginHorizontal {
        | Some(v) => Some(MarginHorizontal(v))
        | None => None
        },
        switch marginTop {
        | Some(v) => Some(MarginTop(v))
        | None => None
        },
        switch marginBottom {
        | Some(v) => Some(MarginBottom(v))
        | None => None
        },
        switch marginLeft {
        | Some(v) => Some(MarginLeft(v))
        | None => None
        },
        switch marginRight {
        | Some(v) => Some(MarginRight(v))
        | None => None
        },
        switch padding {
        | Some(v) => Some(Padding(v))
        | None => None
        },
        switch paddingVertical {
        | Some(v) => Some(PaddingVertical(v))
        | None => None
        },
        switch paddingHorizontal {
        | Some(v) => Some(PaddingHorizontal(v))
        | None => None
        },
        switch paddingTop {
        | Some(v) => Some(PaddingTop(v))
        | None => None
        },
        switch paddingBottom {
        | Some(v) => Some(PaddingBottom(v))
        | None => None
        },
        switch paddingLeft {
        | Some(v) => Some(PaddingLeft(v))
        | None => None
        },
        switch paddingRight {
        | Some(v) => Some(PaddingRight(v))
        | None => None
        },
        switch borderWidth {
        | Some(v) => Some(BorderWidth(v))
        | None => None
        },
        switch borderTopWidth {
        | Some(v) => Some(BorderTopWidth(v))
        | None => None
        },
        switch borderBottomWidth {
        | Some(v) => Some(BorderBottomWidth(v))
        | None => None
        },
        switch borderLeftWidth {
        | Some(v) => Some(BorderLeftWidth(v))
        | None => None
        },
        switch borderRightWidth {
        | Some(v) => Some(BorderRightWidth(v))
        | None => None
        },
        switch position {
        | Some(v) => Some(Position(v))
        | None => None
        },
        switch flexDirection {
        | Some(v) => Some(FlexDirection(v))
        | None => None
        },
        switch flexWrap {
        | Some(v) => Some(FlexWrap(v))
        | None => None
        },
        switch justifyContent {
        | Some(v) => Some(JustifyContent(v))
        | None => None
        },
        switch alignItems {
        | Some(v) => Some(AlignItems(v))
        | None => None
        },
        switch alignSelf {
        | Some(v) => Some(AlignSelf(v))
        | None => None
        },
        switch alignContent {
        | Some(v) => Some(AlignContent(v))
        | None => None
        },
        switch overflow {
        | Some(v) => Some(Overflow(v))
        | None => None
        },
        switch flex {
        | Some(v) => Some(Flex(v))
        | None => None
        },
        switch flexGrow {
        | Some(v) => Some(FlexGrow(v))
        | None => None
        },
        switch flexShrink {
        | Some(v) => Some(FlexShrink(v))
        | None => None
        },
        switch flexBasisi {
        | Some(v) => Some(FlexBasisi(v))
        | None => None
        },
        switch flexBasis {
        | Some(v) => Some(FlexBasis(v))
        | None => None
        },
        switch shadowColor {
        | Some(v) => Some(ShadowColor(v))
        | None => None
        },
        switch shadowOffset {
        | Some((a, b)) => Some(ShadowOffset(a, b))
        | None => None
        },
        switch shadowOpacity {
        | Some(v) => Some(ShadowOpacity(v))
        | None => None
        },
        switch shadowRadius {
        | Some(v) => Some(ShadowRadius(v))
        | None => None
        },
        switch transform {
        | Some(v) => Some(Transform(v))
        | None => None
        },
        switch backfaceVisibilty {
        | Some(v) => Some(BackfaceVisibilty(v))
        | None => None
        },
        switch backgroundColor {
        | Some(v) => Some(BackgroundColor(v))
        | None => None
        },
        switch borderColor {
        | Some(v) => Some(BorderColor(v))
        | None => None
        },
        switch borderTopColor {
        | Some(v) => Some(BorderTopColor(v))
        | None => None
        },
        switch borderBottomColor {
        | Some(v) => Some(BorderBottomColor(v))
        | None => None
        },
        switch borderLeftColor {
        | Some(v) => Some(BorderLeftColor(v))
        | None => None
        },
        switch borderRightColor {
        | Some(v) => Some(BorderRightColor(v))
        | None => None
        },
        switch borderRadius {
        | Some(v) => Some(BorderRadius(v))
        | None => None
        },
        switch borderTopRightRadius {
        | Some(v) => Some(BorderTopRightRadius(v))
        | None => None
        },
        switch borderBottomLeftRadius {
        | Some(v) => Some(BorderBottomLeftRadius(v))
        | None => None
        },
        switch borderBottomRightRadius {
        | Some(v) => Some(BorderBottomRightRadius(v))
        | None => None
        },
        switch borderTopLeftRadius {
        | Some(v) => Some(BorderTopLeftRadius(v))
        | None => None
        },
        switch borderStyle {
        | Some(v) => Some(BorderStyle(v))
        | None => None
        },
        switch opacity {
        | Some(v) => Some(Opacity(v))
        | None => None
        },
        switch elevation {
        | Some(v) => Some(Elevation(v))
        | None => None
        },
        switch color {
        | Some(v) => Some(Color(v))
        | None => None
        },
        switch fontFamily {
        | Some(v) => Some(FontFamily(v))
        | None => None
        },
        switch fontSize {
        | Some(v) => Some(FontSize(v))
        | None => None
        },
        switch fontStyle {
        | Some(v) => Some(FontStyle(v))
        | None => None
        },
        switch fontWeight {
        | Some(v) => Some(FontWeight(v))
        | None => None
        },
        switch fontVariant {
        | Some(v) => Some(FontVariant(v))
        | None => None
        },
        switch textShadowOffset {
        | Some((a, b)) => Some(TextShadowOffset(a, b))
        | None => None
        },
        switch textShadowRadius {
        | Some(v) => Some(TextShadowRadius(v))
        | None => None
        },
        switch textShadowColor {
        | Some(v) => Some(TextShadowColor(v))
        | None => None
        },
        switch letterSpacing {
        | Some(v) => Some(LetterSpacing(v))
        | None => None
        },
        switch lineHeight {
        | Some(v) => Some(LineHeight(v))
        | None => None
        },
        switch textAlign {
        | Some(v) => Some(TextAlign(v))
        | None => None
        },
        switch textAlignVertical {
        | Some(v) => Some(TextAlignVertical(v))
        | None => None
        },
        switch includeFontPadding {
        | Some(v) => Some(IncludeFontPadding(v))
        | None => None
        },
        switch textDecorationLine {
        | Some(v) => Some(TextDecorationLine(v))
        | None => None
        },
        switch textDecorationColor {
        | Some(v) => Some(TextDecorationColor(v))
        | None => None
        },
        switch writingDirection {
        | Some(v) => Some(WritingDirection(v))
        | None => None
        },
        switch resizeMode {
        | Some(v) => Some(ResizeMode(v))
        | None => None
        },
        switch tintColor {
        | Some(v) => Some(TintColor(v))
        | None => None
        },
        switch overlayColor {
        | Some(v) => Some(OverlayColor(v))
        | None => None
        },
        switch mediaQuery {
        | Some((a, b)) => Some(MediaQuery(a, b))
        | None => None
        },
        switch supports {
        | Some((a, b)) => Some(Supports(a, b))
        | None => None
        },
        switch select {
        | Some((a, b)) => Some(Select(a, b))
        | None => None
        },
        switch raw {
        | Some((a, b)) => Some(Raw(a, b))
        | None => None
        }
      ];
      let styles: list(style) =
        List.fold_left(
          (styles, style) =>
            switch style {
            | Some(s) => [s, ...styles]
            | None => styles
            },
          [],
          stylesProps
        );
      <div className=(css(styles))> (ReasonReact.arrayToElement(children)) </div>
    }
  };
};

/* module Block = {
     let make = Style.make(~display=Block);
   }; */
module Inline = {
  let make = Box.make(~display=Inline);
};

module InlineBlock = {
  let make = Box.make(~display=InlineBlock);
};

module Row = {
  let make = Box.make(~display=Flex, ~flexDirection=Row);
};

module Col = {
  let make = Box.make(~display=Flex, ~flexDirection=Column);
};
/*
 module Grid = {
   let make = Style.make(~display=Grid);
 }; */