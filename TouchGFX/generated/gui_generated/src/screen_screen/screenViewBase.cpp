/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

screenViewBase::screenViewBase() :
    buttonCallback(this, &screenViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    buttonWithLabel2_1.setXY(64, 67);
    buttonWithLabel2_1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_DISABLED_ID));
    buttonWithLabel2_1.setLabelText(touchgfx::TypedText(T___SINGLEUSE_IBBL));
    buttonWithLabel2_1.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabel2_1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(240, 19, 19));
    buttonWithLabel2_1.setAction(buttonCallback);
    add(buttonWithLabel2_1);

    buttonWithLabel2.setXY(333, 67);
    buttonWithLabel2.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_DISABLED_ID));
    buttonWithLabel2.setLabelText(touchgfx::TypedText(T___SINGLEUSE_SAYU));
    buttonWithLabel2.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabel2.setLabelColorPressed(touchgfx::Color::getColorFromRGB(204, 20, 20));
    buttonWithLabel2.setAction(buttonCallback);
    add(buttonWithLabel2);

    textProgress1.setXY(158, 152);
    textProgress1.setProgressIndicatorPosition(12, 10, 150, 30);
    textProgress1.setRange(0, 100);
    textProgress1.setColor(touchgfx::Color::getColorFromRGB(201, 32, 72));
    textProgress1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_N8Q4));
    textProgress1.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TEXTPROGRESS_BACKGROUNDS_ROUNDED_LIGHT_ID));
    textProgress1.setValue(60);
    add(textProgress1);
}

screenViewBase::~screenViewBase()
{

}

void screenViewBase::setupScreen()
{

}

void screenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel2_1)
    {
        //Interaction1
        //When buttonWithLabel2_1 clicked set value textProgress1
        //Set value textProgress1
        textProgress1.setValue(10);
    }
    if (&src == &buttonWithLabel2)
    {
        //Interaction2
        //When buttonWithLabel2 clicked set value textProgress1
        //Set value textProgress1
        textProgress1.setValue(0);
    }
}
