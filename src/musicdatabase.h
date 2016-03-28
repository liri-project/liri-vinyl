#ifndef LIRI_MUSIC_MUSICDATABASE_H
#define LIRI_MUSIC_MUSICDATABASE_H

#include <QList>
#include <QtSql/QSqlDatabase>

#include <exception>

#include "albumobject.h"
#include "artistobject.h"
#include "songobject.h"

class MusicDatabase : public QObject {
    Q_OBJECT
public:
    class DatabaseNotFoundException : public std::exception {
    public:
        DatabaseNotFoundException() {}
        virtual ~DatabaseNotFoundException() noexcept { }

        virtual const char* what() const noexcept {
            return "Unable to open database.";
        };
    };

    static MusicDatabase& get();
public:
    QList<AlbumObject> getAllAlbums();
    QList<ArtistObject> getAllArtists();
    QList<SongObject> getAllSongs();

    QString getMusicFolder();
public slots:
    void addArtist(const ArtistObject&);
    void setMusicFolder(const QString&);
signals:
    void musicFolderChanged(const QString& path);
protected:
    MusicDatabase();
private:
    QSqlDatabase db;
};

#endif