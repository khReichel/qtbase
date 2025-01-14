// Copyright (C) 2023 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QICONCONSTANTS_IMPL_H
#define QICONCONSTANTS_IMPL_H

#ifndef QICON_H
#error Do not include qiconconstants_impl.h directly
#endif

#if 0
#pragma qt_sync_skip_header_check
#pragma qt_sync_stop_processing
#endif

#define QT_THEME_ICON(Constant, string) \
static constexpr auto Constant = QLatin1StringView(string)

QT_THEME_ICON(AddressBookNew, "address-book-new");
QT_THEME_ICON(ApplicationExit, "application-exit");
QT_THEME_ICON(AppointmentNew, "appointment-new");
QT_THEME_ICON(CallStart, "call-start");
QT_THEME_ICON(CallStop, "call-stop");
QT_THEME_ICON(ContactNew, "contact-new");
QT_THEME_ICON(DocumentNew, "document-new");
QT_THEME_ICON(DocumentOpen, "document-open");
QT_THEME_ICON(DocumentOpenRecent, "document-open-recent");
QT_THEME_ICON(DocumentPageSetup, "document-page-setup");
QT_THEME_ICON(DocumentPrint, "document-print");
QT_THEME_ICON(DocumentPrintPreview, "document-print-preview");
QT_THEME_ICON(DocumentProperties, "document-properties");
QT_THEME_ICON(DocumentRevert, "document-revert");
QT_THEME_ICON(DocumentSave, "document-save");
QT_THEME_ICON(DocumentSaveAs, "document-save-as");
QT_THEME_ICON(DocumentSend, "document-send");
QT_THEME_ICON(EditClear, "edit-clear");
QT_THEME_ICON(EditCopy, "edit-copy");
QT_THEME_ICON(EditCut, "edit-cut");
QT_THEME_ICON(EditDelete, "edit-delete");
QT_THEME_ICON(EditFind, "edit-find");
QT_THEME_ICON(EditFindReplace, "edit-find-replace");
QT_THEME_ICON(EditPaste, "edit-paste");
QT_THEME_ICON(EditRedo, "edit-redo");
QT_THEME_ICON(EditSelectAll, "edit-select-all");
QT_THEME_ICON(EditUndo, "edit-undo");
QT_THEME_ICON(FolderNew, "folder-new");
QT_THEME_ICON(FormatIndentLess, "format-indent-less");
QT_THEME_ICON(FormatIndentMore, "format-indent-more");
QT_THEME_ICON(FormatJustifyCenter, "format-justify-center");
QT_THEME_ICON(FormatJustifyFill, "format-justify-fill");
QT_THEME_ICON(FormatJustifyLeft, "format-justify-left");
QT_THEME_ICON(FormatJustifyRight, "format-justify-right");
QT_THEME_ICON(FormatTextDirectionLtr, "format-text-direction-ltr");
QT_THEME_ICON(FormatTextDirectionRtl, "format-text-direction-rtl");
QT_THEME_ICON(FormatTextBold, "format-text-bold");
QT_THEME_ICON(FormatTextItalic, "format-text-italic");
QT_THEME_ICON(FormatTextUnderline, "format-text-underline");
QT_THEME_ICON(FormatTextStrikethrough, "format-text-strikethrough");
QT_THEME_ICON(GoBottom, "go-bottom");
QT_THEME_ICON(GoDown, "go-down");
QT_THEME_ICON(GoFirst, "go-first");
QT_THEME_ICON(GoHome, "go-home");
QT_THEME_ICON(GoJump, "go-jump");
QT_THEME_ICON(GoLast, "go-last");
QT_THEME_ICON(GoNext, "go-next");
QT_THEME_ICON(GoPrevious, "go-previous");
QT_THEME_ICON(GoTop, "go-top");
QT_THEME_ICON(GoUp, "go-up");
QT_THEME_ICON(HelpAbout, "help-about");
QT_THEME_ICON(HelpContents, "help-contents");
QT_THEME_ICON(HelpFaq, "help-faq");
QT_THEME_ICON(InsertImage, "insert-image");
QT_THEME_ICON(InsertLink, "insert-link");
QT_THEME_ICON(InsertObject, "insert-object");
QT_THEME_ICON(InsertText, "insert-text");
QT_THEME_ICON(ListAdd, "list-add");
QT_THEME_ICON(ListRemove, "list-remove");
QT_THEME_ICON(MailForward, "mail-forward");
QT_THEME_ICON(MailMarkImportant, "mail-mark-important");
QT_THEME_ICON(MailMarkJunk, "mail-mark-junk");
QT_THEME_ICON(MailMarkNotjunk, "mail-mark-notjunk");
QT_THEME_ICON(MailMarkRead, "mail-mark-read");
QT_THEME_ICON(MailMarkUnread, "mail-mark-unread");
QT_THEME_ICON(MailMessageNew, "mail-message-new");
QT_THEME_ICON(MailReplyAll, "mail-reply-all");
QT_THEME_ICON(MailReplySender, "mail-reply-sender");
QT_THEME_ICON(MailSend, "mail-send");
QT_THEME_ICON(MailSendReceive, "mail-send-receive");
QT_THEME_ICON(MediaEject, "media-eject");
QT_THEME_ICON(MediaPlaybackPause, "media-playback-pause");
QT_THEME_ICON(MediaPlaybackStart, "media-playback-start");
QT_THEME_ICON(MediaPlaybackStop, "media-playback-stop");
QT_THEME_ICON(MediaRecord, "media-record");
QT_THEME_ICON(MediaSeekBackward, "media-seek-backward");
QT_THEME_ICON(MediaSeekForward, "media-seek-forward");
QT_THEME_ICON(MediaSkipBackward, "media-skip-backward");
QT_THEME_ICON(MediaSkipForward, "media-skip-forward");
QT_THEME_ICON(ObjectFlipHorizontal, "object-flip-horizontal");
QT_THEME_ICON(ObjectFlipVertical, "object-flip-vertical");
QT_THEME_ICON(ObjectRotateLeft, "object-rotate-left");
QT_THEME_ICON(ObjectRotateRight, "object-rotate-right");
QT_THEME_ICON(ProcessStop, "process-stop");
QT_THEME_ICON(SystemLockScreen, "system-lock-screen");
QT_THEME_ICON(SystemLogOut, "system-log-out");
QT_THEME_ICON(SystemRun, "system-run");
QT_THEME_ICON(SystemSearch, "system-search");
QT_THEME_ICON(SystemReboot, "system-reboot");
QT_THEME_ICON(SystemShutdown, "system-shutdown");
QT_THEME_ICON(ToolsCheckSpelling, "tools-check-spelling");
QT_THEME_ICON(ViewFullscreen, "view-fullscreen");
QT_THEME_ICON(ViewRefresh, "view-refresh");
QT_THEME_ICON(ViewRestore, "view-restore");
QT_THEME_ICON(ViewSortAscending, "view-sort-ascending");
QT_THEME_ICON(ViewSortDescending, "view-sort-descending");
QT_THEME_ICON(WindowClose, "window-close");
QT_THEME_ICON(WindowNew, "window-new");
QT_THEME_ICON(ZoomFitBest, "zoom-fit-best");
QT_THEME_ICON(ZoomIn, "zoom-in");
QT_THEME_ICON(ZoomOriginal, "zoom-original");
QT_THEME_ICON(ZoomOut, "zoom-out");

QT_THEME_ICON(ProcessWorking, "process-working");

QT_THEME_ICON(AccessoriesCalculator, "accessories-calculator");
QT_THEME_ICON(AccessoriesCharacterMap, "accessories-character-map");
QT_THEME_ICON(AccessoriesDictionary, "accessories-dictionary");
QT_THEME_ICON(AccessoriesTextEditor, "accessories-text-editor");
QT_THEME_ICON(HelpBrowser, "help-browser");
QT_THEME_ICON(MultimediaVolumeControl, "multimedia-volume-control");
QT_THEME_ICON(PreferencesDesktopAccessibility, "preferences-desktop-accessibility");
QT_THEME_ICON(PreferencesDesktopFont, "preferences-desktop-font");
QT_THEME_ICON(PreferencesDesktopKeyboard, "preferences-desktop-keyboard");
QT_THEME_ICON(PreferencesDesktopLocale, "preferences-desktop-locale");
QT_THEME_ICON(PreferencesDesktopMultimedia, "preferences-desktop-multimedia");
QT_THEME_ICON(PreferencesDesktopScreensaver, "preferences-desktop-screensaver");
QT_THEME_ICON(PreferencesDesktopTheme, "preferences-desktop-theme");
QT_THEME_ICON(PreferencesDesktopWallpaper, "preferences-desktop-wallpaper");
QT_THEME_ICON(SystemFileManager, "system-file-manager");
QT_THEME_ICON(SystemSoftwareInstall, "system-software-install");
QT_THEME_ICON(SystemSoftwareUpdate, "system-software-update");
QT_THEME_ICON(UtilitiesSystemMonitor, "utilities-system-monitor");
QT_THEME_ICON(UtilitiesTerminal, "utilities-terminal");

QT_THEME_ICON(ApplicationsAccessories, "applications-accessories");
QT_THEME_ICON(ApplicationsDevelopment, "applications-development");
QT_THEME_ICON(ApplicationsEngineering, "applications-engineering");
QT_THEME_ICON(ApplicationsGames, "applications-games");
QT_THEME_ICON(ApplicationsGraphics, "applications-graphics");
QT_THEME_ICON(ApplicationsInternet, "applications-internet");
QT_THEME_ICON(ApplicationsMultimedia, "applications-multimedia");
QT_THEME_ICON(ApplicationsOffice, "applications-office");
QT_THEME_ICON(ApplicationsOther, "applications-other");
QT_THEME_ICON(ApplicationsScience, "applications-science");
QT_THEME_ICON(ApplicationsSystem, "applications-system");
QT_THEME_ICON(ApplicationsUtilities, "applications-utilities");
QT_THEME_ICON(PreferencesDesktop, "preferences-desktop");
QT_THEME_ICON(PreferencesDesktopPeripherals, "preferences-desktop-peripherals");
QT_THEME_ICON(PreferencesDesktopPersonal, "preferences-desktop-personal");
QT_THEME_ICON(PreferencesOther, "preferences-other");
QT_THEME_ICON(PreferencesSystem, "preferences-system");
QT_THEME_ICON(PreferencesSystemNetwork, "preferences-system-network");
QT_THEME_ICON(SystemHelp, "system-help");

QT_THEME_ICON(AudioCard, "audio-card");
QT_THEME_ICON(AudioInputMicrophone, "audio-input-microphone");
QT_THEME_ICON(Battery, "battery");
QT_THEME_ICON(CameraPhoto, "camera-photo");
QT_THEME_ICON(CameraVideo, "camera-video");
QT_THEME_ICON(CameraWeb, "camera-web");
QT_THEME_ICON(Computer, "computer");
QT_THEME_ICON(DriveHarddisk, "drive-harddisk");
QT_THEME_ICON(DriveOptical, "drive-optical");
QT_THEME_ICON(DriveRemovableMedia, "drive-removable-media");
QT_THEME_ICON(InputGaming, "input-gaming");
QT_THEME_ICON(InputKeyboard, "input-keyboard");
QT_THEME_ICON(InputMouse, "input-mouse");
QT_THEME_ICON(InputTablet, "input-tablet");
QT_THEME_ICON(MediaFlash, "media-flash");
QT_THEME_ICON(MediaFloppy, "media-floppy");
QT_THEME_ICON(MediaOptical, "media-optical");
QT_THEME_ICON(MediaTape, "media-tape");
QT_THEME_ICON(Modem, "modem");
QT_THEME_ICON(MultimediaPlayer, "multimedia-player");
QT_THEME_ICON(NetworkWired, "network-wired");
QT_THEME_ICON(NetworkWireless, "network-wireless");
QT_THEME_ICON(Pda, "pda");
QT_THEME_ICON(Phone, "phone");
QT_THEME_ICON(Printer, "printer");
QT_THEME_ICON(Scanner, "scanner");
QT_THEME_ICON(VideoDisplay, "video-display");

QT_THEME_ICON(EmblemDefault, "emblem-default");
QT_THEME_ICON(EmblemDocuments, "emblem-documents");
QT_THEME_ICON(EmblemDownloads, "emblem-downloads");
QT_THEME_ICON(EmblemFavorite, "emblem-favorite");
QT_THEME_ICON(EmblemImportant, "emblem-important");
QT_THEME_ICON(EmblemMail, "emblem-mail");
QT_THEME_ICON(EmblemPhotos, "emblem-photos");
QT_THEME_ICON(EmblemReadonly, "emblem-readonly");
QT_THEME_ICON(EmblemShared, "emblem-shared");
QT_THEME_ICON(EmblemSymbolicLink, "emblem-symbolic-link");
QT_THEME_ICON(EmblemSynchronized, "emblem-synchronized");
QT_THEME_ICON(EmblemSystem, "emblem-system");
QT_THEME_ICON(EmblemUnreadable, "emblem-unreadable");

QT_THEME_ICON(AppointmentMissed, "appointment-missed");
QT_THEME_ICON(AppointmentSoon, "appointment-soon");
QT_THEME_ICON(AudioVolumeHigh, "audio-volume-high");
QT_THEME_ICON(AudioVolumeLow, "audio-volume-low");
QT_THEME_ICON(AudioVolumeMedium, "audio-volume-medium");
QT_THEME_ICON(AudioVolumeMuted, "audio-volume-muted");
QT_THEME_ICON(BatteryCaution, "battery-caution");
QT_THEME_ICON(BatteryLow, "battery-low");
QT_THEME_ICON(DialogError, "dialog-error");
QT_THEME_ICON(DialogInformation, "dialog-information");
QT_THEME_ICON(DialogPassword, "dialog-password");
QT_THEME_ICON(DialogQuestion, "dialog-question");
QT_THEME_ICON(DialogWarning, "dialog-warning");
QT_THEME_ICON(FolderDragAccept, "folder-drag-accept");
QT_THEME_ICON(FolderOpen, "folder-open");
QT_THEME_ICON(FolderVisiting, "folder-visiting");
QT_THEME_ICON(ImageLoading, "image-loading");
QT_THEME_ICON(ImageMissing, "image-missing");
QT_THEME_ICON(MailAttachment, "mail-attachment");
QT_THEME_ICON(MailUnread, "mail-unread");
QT_THEME_ICON(MailRead, "mail-read");
QT_THEME_ICON(MailReplied, "mail-replied");
QT_THEME_ICON(MailSigned, "mail-signed");
QT_THEME_ICON(MailSignedVerified, "mail-signed-verified");
QT_THEME_ICON(MediaPlaylistRepeat, "media-playlist-repeat");
QT_THEME_ICON(MediaPlaylistShuffle, "media-playlist-shuffle");
QT_THEME_ICON(NetworkError, "network-error");
QT_THEME_ICON(NetworkIdle, "network-idle");
QT_THEME_ICON(NetworkOffline, "network-offline");
QT_THEME_ICON(NetworkReceive, "network-receive");
QT_THEME_ICON(NetworkTransmit, "network-transmit");
QT_THEME_ICON(NetworkTransmitReceive, "network-transmit-receive");
QT_THEME_ICON(PrinterError, "printer-error");
QT_THEME_ICON(PrinterPrinting, "printer-printing");
QT_THEME_ICON(SecurityHigh, "security-high");
QT_THEME_ICON(SecurityMedium, "security-medium");
QT_THEME_ICON(SecurityLow, "security-low");
QT_THEME_ICON(SoftwareUpdateAvailable, "software-update-available");
QT_THEME_ICON(SoftwareUpdateUrgent, "software-update-urgent");
QT_THEME_ICON(SyncError, "sync-error");
QT_THEME_ICON(SyncSynchronizing, "sync-synchronizing");
QT_THEME_ICON(TaskDue, "task-due");
QT_THEME_ICON(TaskPastDue, "task-past-due");
QT_THEME_ICON(UserAvailable, "user-available");
QT_THEME_ICON(UserAway, "user-away");
QT_THEME_ICON(UserIdle, "user-idle");
QT_THEME_ICON(UserOffline, "user-offline");
QT_THEME_ICON(UserTrashFull, "user-trash-full");
QT_THEME_ICON(WeatherClear, "weather-clear");
QT_THEME_ICON(WeatherClearNight, "weather-clear-night");
QT_THEME_ICON(WeatherFewClouds, "weather-few-clouds");
QT_THEME_ICON(WeatherFewCloudsNight, "weather-few-clouds-night");
QT_THEME_ICON(WeatherFog, "weather-fog");
QT_THEME_ICON(WeatherOvercast, "weather-overcast");
QT_THEME_ICON(WeatherSevereAlert, "weather-severe-alert");
QT_THEME_ICON(WeatherShowers, "weather-showers");
QT_THEME_ICON(WeatherShowersScattered, "weather-showers-scattered");
QT_THEME_ICON(WeatherSnow, "weather-snow");
QT_THEME_ICON(WeatherStorm, "weather-storm");

#undef QT_THEME_ICON

#endif // QICONCONSTANTS_IMPL_H
