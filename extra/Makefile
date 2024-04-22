include $(TOPDIR)/rules.mk

PKG_NAME:=glibapp
PKG_VERSION:=1.0.1
PKG_RELEASE:=1
PKG_LICENSE:=MIT

PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=https://github.com/qichunren/glibapp.git
PKG_SOURCE_SUBDIR:=$(PKG_NAME)-$(PKG_VERSION)
PKG_SOURCE_VERSION:=a69ea28c51285d7f5135451979d9ed66ffad29c8
#PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_SOURCE_VERSION)
PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION)-$(PKG_SOURCE_VERSION).tar.gz
PKG_INSTALL:=1
PKG_FIXUP:=autoreconf

include $(BUILD_DIR)/package.mk

define Package/glibapp/Default
	SECTION:=utils
	CATEGORY:=Utilities
	URL:=https://github.com/qichunren
endef

define Package/glibapp
        $(call Package/glibapp/Default)
        TITLE:=Glib App Demo
        DEPENDS:=+glib2 +libpthread
        MENU:=1
endef

define Package/glibapp/description
  glibapp is a demo service for developer.
endef

define Package/glibapp/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/src/glibapp $(1)/usr/bin/glibapp
endef


$(eval $(call BuildPackage,glibapp))