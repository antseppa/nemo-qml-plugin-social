/*
 * Copyright (C) 2013 Jolla Ltd. <chris.adams@jollamobile.com>
 *
 * You may use this file under the terms of the BSD license as follows:
 *
 * "Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of Nemo Mobile nor the names of its contributors
 *     may be used to endorse or promote products derived from this
 *     software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
 */

#ifndef VKONTOLOGY_P_H
#define VKONTOLOGY_P_H

// <<< objectreference
#define VK_ONTOLOGY_OBJECTREFERENCE_OBJECTIDENTIFIER QLatin1String("id")
// >>> objectreference

// <<< metadata
/*#define FACEBOOK_ONTOLOGY_METADATA                         QLatin1String("metadata")
#define FACEBOOK_ONTOLOGY_METADATA_CONNECTIONS             QLatin1String("connections")
#define FACEBOOK_ONTOLOGY_METADATA_FIELDS                  QLatin1String("fields")
#define FACEBOOK_ONTOLOGY_METADATA_TYPE                    QLatin1String("type")
#define FACEBOOK_ONTOLOGY_METADATA_ID                      QLatin1String("id")
#define FACEBOOK_ONTOLOGY_METADATA_PAGING                  QLatin1String("paging")
#define FACEBOOK_ONTOLOGY_METADATA_PAGING_CURSORS          QLatin1String("cursors")
#define FACEBOOK_ONTOLOGY_METADATA_PAGING_CURSORS_BEFORE   QLatin1String("before")
#define FACEBOOK_ONTOLOGY_METADATA_PAGING_CURSORS_AFTER    QLatin1String("after")
#define FACEBOOK_ONTOLOGY_METADATA_PAGING_SINCE            QLatin1String("since")
#define FACEBOOK_ONTOLOGY_METADATA_PAGING_UNTIL            QLatin1String("until")
#define FACEBOOK_ONTOLOGY_METADATA_PAGING_OFFSET           QLatin1String("offset")
#define FACEBOOK_ONTOLOGY_METADATA_PAGING_LIMIT            QLatin1String("limit")
#define FACEBOOK_ONTOLOGY_METADATA_PAGING_PREVIOUS         QLatin1String("previous")
#define FACEBOOK_ONTOLOGY_METADATA_PAGING_NEXT             QLatin1String("next")
#define FACEBOOK_ONTOLOGY_METADATA_DATA                    QLatin1String("data")
#define FACEBOOK_ONTOLOGY_METADATA_SUMMARY                 QLatin1String("summary")
#define FACEBOOK_ONTOLOGY_METADATA_TOTALCOUNT              QLatin1String("total_count") */

// Used to indicate that we are in the second phase
//#define FACEBOOK_ONTOLOGY_METADATA_SECONDPHASE             QLatin1String("second_phase")
// >>> metadata

// <<< connections
/*#define FACEBOOK_ONTOLOGY_CONNECTIONS_LIKES                QLatin1String("likes")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_COMMENTS             QLatin1String("comments")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_ALBUMS               QLatin1String("albums")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_PHOTOS               QLatin1String("photos")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_TAGS                 QLatin1String("tags")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_FEED                 QLatin1String("feed")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_HOME                 QLatin1String("home")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_FRIENDS              QLatin1String("friends")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_NOTIFICATIONS        QLatin1String("notifications")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_PICTURE              QLatin1String("picture")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_LOCATIONS            QLatin1String("locations")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_EVENTS               QLatin1String("events")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_DATA                 QLatin1String("data")
#define FACEBOOK_ONTOLOGY_CONNECTIONS_SUMMARY              QLatin1String("summary") */
// >>> connections

// <<< comment
#define VK_ONTOLOGY_COMMENT                                QLatin1String("comment")
#define VK_ONTOLOGY_COMMENT_COMMENTINDENTIFIER             QLatin1String("cid")
#define VK_ONTOLOGY_COMMENT_USERINDENTIFIER                QLatin1String("uid")
#define VK_ONTOLOGY_COMMENT_DATE                           QLatin1String("date")
#define VK_ONTOLOGY_COMMENT_TEXT                           QLatin1String("text")
// >>> comment

// <<< post
#define VK_ONTOLOGY_POST_POST                              QLatin1String("post")
#define VK_ONTOLOGY_POST_POSTIDENTIFIER                    QLatin1String("post_id")
#define VK_ONTOLOGY_POST_OWNERIDENTIFIER                   QLatin1String("owner_id")
#define VK_ONTOLOGY_POST_FRIENDSONLY                       QLatin1String("friends_only")
#define VK_ONTOLOGY_POST_MESSAGE                           QLatin1String("message")
#define VK_ONTOLOGY_POST_ATTACHMENTS                       QLatin1String("attachments")
#define VK_ONTOLOGY_POST_SIGNED                            QLatin1String("signed")
#define VK_ONTOLOGY_POST_PUBLISHDATE                       QLatin1String("publish_date")
#define VK_ONTOLOGY_POST_LATITUDE                          QLatin1String("latitude")
#define VK_ONTOLOGY_POST_LONGITUDE                         QLatin1String("longitude")
#define VK_ONTOLOGY_POST_PLACEINDENTIFIER                  QLatin1String("place_id")
// >>> post

/*
// <<< user
#define FACEBOOK_ONTOLOGY_USER                             QLatin1String("user")
#define FACEBOOK_ONTOLOGY_USER_NAME                        QLatin1String("name")
#define FACEBOOK_ONTOLOGY_USER_FIRSTNAME                   QLatin1String("first_name")
#define FACEBOOK_ONTOLOGY_USER_MIDDLENAME                  QLatin1String("middle_name")
#define FACEBOOK_ONTOLOGY_USER_LASTNAME                    QLatin1String("last_name")
#define FACEBOOK_ONTOLOGY_USER_GENDER                      QLatin1String("gender")
#define FACEBOOK_ONTOLOGY_USER_LOCALE                      QLatin1String("locale")
#define FACEBOOK_ONTOLOGY_USER_LINK                        QLatin1String("link")
#define FACEBOOK_ONTOLOGY_USER_USERNAME                    QLatin1String("username")
#define FACEBOOK_ONTOLOGY_USER_THIRDPARTYIDENTIFIER        QLatin1String("third_party_id")
#define FACEBOOK_ONTOLOGY_USER_INSTALLED                   QLatin1String("installed")
#define FACEBOOK_ONTOLOGY_USER_TIMEZONE                    QLatin1String("timezone")
#define FACEBOOK_ONTOLOGY_USER_UPDATEDTIME                 QLatin1String("updated_time")
#define FACEBOOK_ONTOLOGY_USER_VERIFIED                    QLatin1String("verified")
#define FACEBOOK_ONTOLOGY_USER_BIO                         QLatin1String("bio")
#define FACEBOOK_ONTOLOGY_USER_BIRTHDAY                    QLatin1String("birthday")
#define FACEBOOK_ONTOLOGY_USER_COVER                       QLatin1String("cover")
#define FACEBOOK_ONTOLOGY_USER_EMAIL                       QLatin1String("email")
#define FACEBOOK_ONTOLOGY_USER_HOMETOWN                    QLatin1String("hometown")
#define FACEBOOK_ONTOLOGY_USER_INTERESTEDIN                QLatin1String("interested_in")
#define FACEBOOK_ONTOLOGY_USER_LOCATION                    QLatin1String("location")
#define FACEBOOK_ONTOLOGY_USER_POLITICAL                   QLatin1String("political")
#define FACEBOOK_ONTOLOGY_USER_PICTURE                     QLatin1String("picture")
#define FACEBOOK_ONTOLOGY_USER_QUOTES                      QLatin1String("quotes")
#define FACEBOOK_ONTOLOGY_USER_RELATIONSHIPSTATUS          QLatin1String("relationship_status")
#define FACEBOOK_ONTOLOGY_USER_RELIGION                    QLatin1String("religion")
#define FACEBOOK_ONTOLOGY_USER_SIGNIFICANTOTHER            QLatin1String("significant_other")
#define FACEBOOK_ONTOLOGY_USER_WEBSITE                     QLatin1String("website")
// >>> user */

// <<< like
//#define FACEBOOK_ONTOLOGY_LIKE_USERIDENTIFIER              QLatin1String("id")
//#define FACEBOOK_ONTOLOGY_LIKE_USERNAME                    QLatin1String("name")
// >>> like

// <<< notification
#define VK_ONTOLOGY_NOTIFICATION                     QLatin1String("notification")
#define VK_ONTOLOGY_NOTIFICATION_TYPE                QLatin1String("type")
#define VK_ONTOLOGY_NOTIFICATION_DATE                QLatin1String("date")
#define VK_ONTOLOGY_NOTIFICATION_PARENT              QLatin1String("parent")
#define VK_ONTOLOGY_NOTIFICATION_FEEDBACK            QLatin1String("feedback")
// >>> notification

// <<< cover
/*#define FACEBOOK_ONTOLOGY_COVER                            QLatin1String("cover")
#define FACEBOOK_ONTOLOGY_COVER_PHOTOIDENTIFIER            QLatin1String("id")
#define FACEBOOK_ONTOLOGY_COVER_SOURCE                     QLatin1String("source")
#define FACEBOOK_ONTOLOGY_COVER_OFFSETY                    QLatin1String("offset_y") */
// >>> cover

// <<< name_tag
/*#define FACEBOOK_ONTOLOGY_NAME_TAG_USERIDENTIFIER          QLatin1String("id")
#define FACEBOOK_ONTOLOGY_NAME_TAG_USERNAME                QLatin1String("name")
#define FACEBOOK_ONTOLOGY_NAME_TAG_NAMETAGTYPE             QLatin1String("type")
#define FACEBOOK_ONTOLOGY_NAME_TAG_OFFSET                  QLatin1String("offset")
#define FACEBOOK_ONTOLOGY_NAME_TAG_LENGTH                  QLatin1String("length") */
// >>> name_tag

// <<< property
/*#define FACEBOOK_ONTOLOGY_PROPERTY_NAME                    QLatin1String("name")
#define FACEBOOK_ONTOLOGY_PROPERTY_TEXT                    QLatin1String("text") */
// >>> property

// <<< tag
/*#define FACEBOOK_ONTOLOGY_TAG                              QLatin1String("tag")
#define FACEBOOK_ONTOLOGY_TAG_USERIDENTIFIER               QLatin1String("id")
#define FACEBOOK_ONTOLOGY_TAG_USERNAME                     QLatin1String("name")
#define FACEBOOK_ONTOLOGY_TAG_X                            QLatin1String("x")
#define FACEBOOK_ONTOLOGY_TAG_Y                            QLatin1String("y")
#define FACEBOOK_ONTOLOGY_TAG_CREATEDTIME                  QLatin1String("created_time") */
// >>> tag

// <<< user_picture
#define VK_ONTOLOGY_USER_PHOTO_URL                        QLatin1String("user_photo")
// >>> user_picture

#endif // VKONTOLOGY_P_H
