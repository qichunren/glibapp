include $(TOPDIR)/rules.mk

PKG_NAME:=glibapp
PKG_VERSION:=1.0.1-1
PKG_RELEASE:=1

PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=https://github.com/qichunren/glibapp.git
PKG_SOURCE_VERSION:=9e2ab6b29441580aeffa54374f20691d3c5e4a21
PKG_INSTALL:=1

include $(BUILD_DIR)/package.mk

define Package/glibapp/Default
  SECTION:=utils
  CATEGORY:=Utilities
  URL:=https://github.com/qichunren
endef

define Package/glibapp
        $(call Package/glibapp/Default)
        TITLE:=Glib App Demo
        DEPENDS:=+glib2
        MENU:=1
endef

define Package/glibapp/description
  glibapp is a demo service for developer.
endef

define Package/glibapp/install
		$(INSTALL_DIR) $(1)/usr/bin
		$(INSTALL_BIN) $(PKG_BUILD_DIR)/src/glibapp $(1)/usr/bin/glibapp
endef


$(eval $(call BuildPackage,$(PKG_NAME)))