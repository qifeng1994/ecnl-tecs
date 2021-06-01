/*DRイベントコントローラ*/
struct dr_event_controller_t {
   /*事業者ID*/
    business_id;
};
struct dr_event_controller_t {
   /*DR プログラムタイプ*/
    dr_program_type;
};
struct dr_event_controller_t {
   /*プログラムID*/
    program_id;
};
struct dr_event_controller_t {
   /*現在有効イベント情報*/
    current_valid_event_information;
};
struct dr_event_controller_t {
   /*次有効イベント情報*/
    next_valid_event_information;
};
struct dr_event_controller_t {
   /*将来イベント情報通知IDリスト*/
    future_event_information_notification_id_list;
};
struct dr_event_controller_t {
   /*過去イベント情報通知IDリスト*/
    past_event_information_notification_id_list;
};
struct dr_event_controller_t {
   /*最新受信イベント通知ID*/
    newest_received_event_notification_id;
};
struct dr_event_controller_t {
   /*最過去受信イベント通知ID*/
    oldest_received_event_notification_id;
};
struct dr_event_controller_t {
   /*通知ID 指定*/
    notification_id_designation;
};
struct dr_event_controller_t {
   /*イベント情報*/
    event_information;
};
