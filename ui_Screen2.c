// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button3 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button3, 100);
    lv_obj_set_height(ui_Button3, 65);
    lv_obj_set_x(ui_Button3, 135);
    lv_obj_set_y(ui_Button3, 104);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button4 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button4, 100);
    lv_obj_set_height(ui_Button4, 68);
    lv_obj_set_x(ui_Button4, 131);
    lv_obj_set_y(ui_Button4, -13);
    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button5 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button5, 100);
    lv_obj_set_height(ui_Button5, 60);
    lv_obj_set_x(ui_Button5, -124);
    lv_obj_set_y(ui_Button5, 101);
    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button6 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button6, 100);
    lv_obj_set_height(ui_Button6, 64);
    lv_obj_set_x(ui_Button6, -125);
    lv_obj_set_y(ui_Button6, -17);
    lv_obj_set_align(ui_Button6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button2 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button2, 33);
    lv_obj_set_height(ui_Button2, 33);
    lv_obj_set_x(ui_Button2, 216);
    lv_obj_set_y(ui_Button2, -133);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image5 = lv_img_create(ui_Screen2);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 480
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 320
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
