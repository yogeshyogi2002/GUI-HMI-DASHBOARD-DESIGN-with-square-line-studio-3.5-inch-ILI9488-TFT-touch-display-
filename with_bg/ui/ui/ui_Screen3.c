// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: with_bg

#include "ui.h"

void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Screen3, &ui_img_background_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1 = lv_arc_create(ui_Screen3);
    lv_obj_set_width(ui_Arc1, 150);
    lv_obj_set_height(ui_Arc1, 150);
    lv_obj_set_x(ui_Arc1, 8);
    lv_obj_set_y(ui_Arc1, -44);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Arc2 = lv_arc_create(ui_Screen3);
    lv_obj_set_width(ui_Arc2, 150);
    lv_obj_set_height(ui_Arc2, 112);
    lv_obj_set_x(ui_Arc2, 176);
    lv_obj_set_y(ui_Arc2, -1);
    lv_obj_set_align(ui_Arc2, LV_ALIGN_CENTER);

    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0x48B812), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Arc3 = lv_arc_create(ui_Screen3);
    lv_obj_set_width(ui_Arc3, 150);
    lv_obj_set_height(ui_Arc3, 112);
    lv_obj_set_x(ui_Arc3, -132);
    lv_obj_set_y(ui_Arc3, -7);
    lv_obj_set_align(ui_Arc3, LV_ALIGN_CENTER);

    lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0xF8E11F), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc3, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc3, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -168);
    lv_obj_set_y(ui_Label2, 59);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "Battery:");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xF9EFEF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_battery = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_battery, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_battery, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_battery, -119);
    lv_obj_set_y(ui_battery, 60);
    lv_obj_set_align(ui_battery, LV_ALIGN_CENTER);
    lv_label_set_text(ui_battery, "50%");
    lv_obj_set_style_text_color(ui_battery, lv_color_hex(0xF8F3F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_battery, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -25);
    lv_obj_set_y(ui_Label4, 34);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Speed:");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xF8F3F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Speed = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Speed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Speed, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Speed, 31);
    lv_obj_set_y(ui_Speed, 34);
    lv_obj_set_align(ui_Speed, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Speed, "50mph");
    lv_obj_set_style_text_color(ui_Speed, lv_color_hex(0xF8F3F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Speed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 140);
    lv_obj_set_y(ui_Label6, 65);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "Temperature: ");
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0xF8F3F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_temp = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_temp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_temp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_temp, 211);
    lv_obj_set_y(ui_temp, 67);
    lv_obj_set_align(ui_temp, LV_ALIGN_CENTER);
    lv_label_set_text(ui_temp, "50*C");
    lv_obj_set_style_text_color(ui_temp, lv_color_hex(0xF8F3F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_temp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button7 = lv_btn_create(ui_Screen3);
    lv_obj_set_width(ui_Button7, 75);
    lv_obj_set_height(ui_Button7, 40);
    lv_obj_set_x(ui_Button7, -192);
    lv_obj_set_y(ui_Button7, 124);
    lv_obj_set_align(ui_Button7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button7, lv_color_hex(0x62B558), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, -194);
    lv_obj_set_y(ui_Label13, 123);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "back");

    lv_obj_add_event_cb(ui_Arc1, ui_event_Arc1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc2, ui_event_Arc2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc3, ui_event_Arc3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button7, ui_event_Button7, LV_EVENT_ALL, NULL);

}
