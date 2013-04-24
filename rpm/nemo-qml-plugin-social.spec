# 
# Do NOT Edit the Auto-generated Part!
# Generated by: spectacle version 0.26
# 

Name:       nemo-qml-plugin-social

# >> macros
# << macros

Summary:    Social plugin for Nemo Mobile
Version:    0.0.0
Release:    1
Group:      System/Libraries
License:    BSD
URL:        https://github.com/nemomobile/nemo-qml-plugin-social
Source0:    %{name}-%{version}.tar.bz2
Source100:  nemo-qml-plugin-social.yaml
BuildRequires:  pkgconfig(QtCore) >= 4.7.0
BuildRequires:  pkgconfig(QtDeclarative)
BuildRequires:  pkgconfig(QJson)
Provides:   nemo-qml-plugins-social > 0.3.17
Obsoletes:   nemo-qml-plugins-social <= 0.3.17

%description
Social QML adapters for Nemo.

%package tests
Summary:    Social QML adapters for Nemo - unit tests
Group:      System/Libraries
Requires:   %{name} = %{version}-%{release}
Requires:   testrunner-lite

%description tests
This package includes the unit tests.


%prep
%setup -q -n %{name}-%{version}

# >> setup
# << setup

%build
# >> build pre
# << build pre

%qmake 

make %{?jobs:-j%jobs}

# >> build post
# << build post

%install
rm -rf %{buildroot}
# >> install pre
# << install pre
%qmake_install

# >> install post
# << install post

%files
%defattr(-,root,root,-)
%{_libdir}/qt4/imports/org/nemomobile/social/libnemosocial.so
%{_libdir}/qt4/imports/org/nemomobile/social/qmldir
# >> files
# << files

%files tests
%defattr(-,root,root,-)
/opt/nemo-qml-plugins/social/tests/bin/socialtest
/opt/nemo-qml-plugins/social/tests/share/*.qml
# >> files tests
# << files tests
