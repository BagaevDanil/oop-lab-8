#ifndef TEDGE_H
#define TEDGE_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include "vertex.h"
// #include <QCursor>

class TEdge : public QObject, public QGraphicsItem
{
    Q_OBJECT

public:
    static const int ARROW_ANGLE;
    static const int ARROW_LEN;
    static const int INDENTATION;
    static const int SQR_SIDE;
    static const int FONT_SIZE;

public:
    TEdge(TVertex *firstVertex, TVertex *secondVertex, int weight = 1, QObject *parent = nullptr);

private:
    QRectF boundingRect() const;

public:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    const TVertex* FirstVertex() const;
    const TVertex* SecondVertex() const;
    const int& Weight() const;

private:
    TVertex* _FirstVertex;
    TVertex* _SecondVertex;
    int _Weight;
};

#endif // TEDGE_H
