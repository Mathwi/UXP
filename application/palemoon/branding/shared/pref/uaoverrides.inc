// ===| Site Specific User Agent Overrides |===================================

#define GUAO_PREF general.useragent.override

#define GRE_VERSION @MOZILLA_UAVERSION_U@
#define GRE_VERSION_SLICE Goanna/@GRE_VERSION@
#define GRE_DATE_SLICE Goanna/20170101
#define PM_SLICE PaleMoon/@MOZ_APP_VERSION@

#define GK_VERSION @MOZILLA_COMPATVERSION_U@
#define GK_SLICE Gecko/20100101
#define FX_SLICE Firefox/@GK_VERSION@

#ifdef XP_UNIX
#ifndef XP_MACOSX
#define OS_SLICE X11; Linux x86_64;
#else
#define OS_SLICE Macintosh; Intel Mac OS X 10.11;
#endif
#else
#define OS_SLICE Windows NT 6.1; WOW64;
#endif

// Special-case AMO
// We send the native UA slice now, since they no longer offer any compatible extensions for us.
// This will result in an "only with Firefox" message which suits us fine, because it's the truth.
pref("@GUAO_PREF@.addons.mozilla.org","Mozilla/5.0 (@OS_SLICE@ rv:@GRE_VERSION@) @GRE_DATE_SLICE@ @PM_SLICE@");

// Required for domains that have proven unresponsive to requests from users
pref("@GUAO_PREF@.live.com","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@ (Pale Moon)");
pref("@GUAO_PREF@.msn.com","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@ (Pale Moon)");
pref("@GUAO_PREF@.bing.com","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@ (Pale Moon)");
pref("@GUAO_PREF@.outlook.com","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@ (Pale Moon)");
pref("@GUAO_PREF@.web.de","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@ (Pale Moon)");
pref("@GUAO_PREF@.aol.com","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@ (Pale Moon)");
pref("@GUAO_PREF@.calendar.yahoo.com","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@ (Pale Moon)");
pref("@GUAO_PREF@.google.com","Mozilla/5.0 (@OS_SLICE@ rv:52.9) @GK_SLICE@ @GRE_VERSION_SLICE@ Firefox/52.9 @PM_SLICE@");
pref("@GUAO_PREF@.googlevideos.com","Mozilla/5.0 (@OS_SLICE@ rv:38.9) @GK_SLICE@ @GRE_VERSION_SLICE@ Firefox/38.9 @PM_SLICE@");
pref("@GUAO_PREF@.gstatic.com","Mozilla/5.0 (@OS_SLICE@ rv:31.9) @GK_SLICE@ @GRE_VERSION_SLICE@ Firefox/31.9 @PM_SLICE@");
pref("@GUAO_PREF@.yahoo.com","Mozilla/5.0 (@OS_SLICE@ rv:99.9) @GK_SLICE@ Firefox/99.9 (Pale Moon)");
pref("@GUAO_PREF@.youtube.com","Mozilla/5.0 (@OS_SLICE@ rv:42.0) @GK_SLICE@ Firefox/42.0 @PM_SLICE@");
pref("@GUAO_PREF@.gaming.youtube.com","Mozilla/5.0 (@OS_SLICE@ rv:42.0) @GK_SLICE@ Firefox/42.0");
pref("@GUAO_PREF@.dropbox.com","Mozilla/5.0 (@OS_SLICE@ rv:99.9) @GK_SLICE@ Firefox/99.9 (Pale Moon)");

pref("@GUAO_PREF@.players.brightcove.net","Mozilla/5.0 (Windows NT 6.1; Trident/7.0; rv:11.0) like Gecko");

// The never-ending Facebook debacle...
pref("@GUAO_PREF@.facebook.com","Mozilla/5.0 (@OS_SLICE@ rv:99.9) @GK_SLICE@ Firefox/99.9 (Pale Moon)");
pref("@GUAO_PREF@.fbcdn.net","Mozilla/5.0 (@OS_SLICE@ rv:99.9) @GK_SLICE@ Firefox/99.9 (Pale Moon)");


// UA-Sniffing domains below are pending responses from their operators - temp workaround
pref("@GUAO_PREF@.chase.com","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@");
// For Amazon Prime videos
pref("@GUAO_PREF@.www.amazon.com","Mozilla/5.0 (@OS_SLICE@ rv:45.9) @GK_SLICE@ Firefox/45.9 (Pale Moon)");
// Soundcloud uses Firefox-exclusive combinations of code. Never pass Firefox slice.
pref("@GUAO_PREF@.soundcloud.com","Mozilla/5.0 (@OS_SLICE@ rv:@GRE_VERSION@) @GRE_DATE_SLICE@ @PM_SLICE@");
// Daily motion only likes strict Firefox UAs
pref("@GUAO_PREF@.dailymotion.com","Mozilla/5.0 (@OS_SLICE@ rv:52.0) @GK_SLICE@ Firefox/52.0");


// The following requires native mode. Or it blocks.. "too old firefox", breakage, etc.
pref("@GUAO_PREF@.deviantart.com","Mozilla/5.0 (@OS_SLICE@ rv:@GRE_VERSION@) @GRE_DATE_SLICE@ @PM_SLICE@");
pref("@GUAO_PREF@.deviantart.net","Mozilla/5.0 (@OS_SLICE@ rv:@GRE_VERSION@) @GRE_DATE_SLICE@ @PM_SLICE@");
pref("@GUAO_PREF@.altibox.dk","Mozilla/5.0 (@OS_SLICE@ rv:@GRE_VERSION@) @GRE_DATE_SLICE@ @PM_SLICE@");
pref("@GUAO_PREF@.altibox.no","Mozilla/5.0 (@OS_SLICE@ rv:@GRE_VERSION@) @GRE_DATE_SLICE@ @PM_SLICE@");
pref("@GUAO_PREF@.firefox.com","Mozilla/5.0 (@OS_SLICE@ rv:@GRE_VERSION@) @GRE_DATE_SLICE@ @PM_SLICE@");

// UA-Sniffing domains below have indicated no interest in supporting Pale Moon (BOO!)
pref("@GUAO_PREF@.humblebundle.com","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@ (Pale Moon)");
pref("@GUAO_PREF@.privat24.ua","Mozilla/5.0 (@OS_SLICE@ rv:38.0) @GK_SLICE@ Firefox/38.0");
pref("@GUAO_PREF@.citi.com","Mozilla/5.0 (@OS_SLICE@ rv:57.0) @GK_SLICE@ Firefox/57.0 (Pale Moon)");
pref("@GUAO_PREF@.netflix.com","Mozilla/5.0 (@OS_SLICE@ rv:45.9) @GK_SLICE@ Firefox/45.9");
pref("@GUAO_PREF@.netflximg.net","Mozilla/5.0 (@OS_SLICE@ rv:45.9) @GK_SLICE@ Firefox/45.9");

// UA-sniffing domains that are "app/vendor-specific" and do not like Pale Moon
pref("@GUAO_PREF@.web.whatsapp.com","Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/70.0.3538.77 Safari/537.36");

// The following domains do not like the Goanna slice
pref("@GUAO_PREF@.hitbox.tv","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@");
pref("@GUAO_PREF@.yuku.com","Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@ @PM_SLICE@");

// ============================================================================
