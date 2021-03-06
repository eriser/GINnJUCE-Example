/*
==============================================================================

  This file was auto-generated by the GINnJUCE Transpiler. You're welcome!

==============================================================================
*/

#include "Toggle.h"

Toggle::Toggle() {
   initializeText();
   initializePaths();
   addAndMakeVisible(background);
   addAndMakeVisible(label);
   
}

Toggle::~Toggle() {

}

void Toggle::paint(Graphics& g) {

}

void Toggle::resized() {
   background.setBounds(0, 0, 64, 30);
   label.setBounds(16, 6, 39, 18);
}

void Toggle::initializeText() {
   // Text initialization for label
   Font labelFont(String("Myriad"), String("Myriad-Roman"), 14.0f);
   labelFont.setHorizontalScale(1.0f);
   label.setFont(labelFont);
   label.setColour(TextEditor::ColourIds::backgroundColourId, Colour(0x00000000));
   label.setColour(TextEditor::ColourIds::textColourId, Colour(0xff000000));
   label.setColour(TextEditor::ColourIds::outlineColourId , Colour(0x00000000));
   label.setColour(TextEditor::ColourIds::focusedOutlineColourId , Colour(0x00000000));
   label.setColour(TextEditor::ColourIds::shadowColourId , Colour(0x00000000));
   label.setText(
      "FUZZ\n"
   );
   label.moveCaretToTop(false);
   label.setCaretVisible(false);
   label.setReadOnly(true);
   label.setScrollbarsShown(false);
   label.setIndents(0, 0);
   label.setLineSpacing(1.20000008174351f);
   label.setMultiLine(true, false);
}

void Toggle::initializePaths() {
   // Path initialization for background
   Path backgroundPath;
   backgroundPath.startNewSubPath(Point<float>(64.0f, 30.0f));
   backgroundPath.cubicTo(
      Point<float>(64.0f, 30.0f),
      Point<float>(0.0f, 30.0f),
      Point<float>(0.0f, 30.0f)
   );
   backgroundPath.cubicTo(
      Point<float>(0.0f, 30.0f),
      Point<float>(0.0f, 0.0f),
      Point<float>(0.0f, 0.0f)
   );
   backgroundPath.cubicTo(
      Point<float>(0.0f, 0.0f),
      Point<float>(64.0f, 0.0f),
      Point<float>(64.0f, 0.0f)
   );
   backgroundPath.cubicTo(
      Point<float>(64.0f, 0.0f),
      Point<float>(64.0f, 30.0f),
      Point<float>(64.0f, 30.0f)
   );
   backgroundPath.closeSubPath();
   const PathStrokeType backgroundStroke (1.0f, PathStrokeType::JointStyle::mitered, PathStrokeType::EndCapStyle::butt);
   const FillType backgroundFill (Colour(0xff424242));
   const FillType backgroundStrokeFill (Colour(0x00000000));
   background.setPath(backgroundPath);
   background.setStrokeType(backgroundStroke);
   background.setFill(backgroundFill);
   background.setStrokeFill(backgroundStrokeFill);
}
