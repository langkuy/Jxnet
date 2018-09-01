/**
 * Copyright (C) 2017-2018  Ardika Rommy Sanjaya <contact@ardikars.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

package com.ardikars.jxnet.packet;

import com.ardikars.common.util.NamedNumber;
import io.netty.buffer.ByteBuf;

import java.io.Serializable;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;

/**
 * This interface representing a packet which consists of a packet header and a payload.
 * @author Ardika Rommy Sanjaya
 * @since 1.5.0
 */
public interface Packet extends Iterable<Packet>, Serializable {

    /**
     * Returns the {@link Header} object representing this packet's header.
     * @return returns null if header doesn't exist, {@link Header} object otherwise.
     */
    Packet.Header getHeader();

    /**
     * Returns the {@link Packet} object representing this packet's payload.
     * @return returns null if a payload doesn't exits, {@link Packet} object otherwise.
     */
    Packet getPayload();

    /**
     * Ensures that given packet type is included on this {@link Packet} object.
     * @param clazz packet type.
     * @param <T> type.
     * @return returns true if this packet is or its payload includes an object of
     * specified packet class; false otherwise.
     */
    <T extends Packet> boolean contains(Class<T> clazz);

    /**
     * Returns list of specify packet's.
     * @param clazz packet type.
     * @param <T> type.
     * @return returns list of {@link Packet} object.
     */
    <T extends Packet> List<T> get(Class<T> clazz);

    /**
     * The interface for packet builder.
     */
    interface Builder extends com.ardikars.common.util.Builder<Packet, ByteBuf> {

    }

    /**
     * The interface for packet factory.
     */
    interface Factory extends com.ardikars.common.util.Factory<Packet, ByteBuf> {

    }

    /**
     * This interface representing a packet header.
     */
    interface Header extends Serializable {

        /**
         * Returns the payload type.
         * @param <T> type.
         * @return returns payload type.
         */
        <T extends NamedNumber> T getPayloadType();

        /**
         * Returns header length.
         * @return returns header length.
         */
        int getLength();

        /**
         * Returns header as byte buffer.
         * @return return byte buffer.
         */
        ByteBuf getBuffer();

    }

    /**
     * A {@link Packet} iterator implementation.
     */
    class PacketIterator implements Iterator<Packet> {

        private Packet next;

        private Packet previous;

        public PacketIterator(final Packet packet) {
            this.next = packet;
        }

        @Override
        public boolean hasNext() {
            return next != null;
        }

        @Override
        public Packet next() {
            if (!hasNext()) {
                throw new NoSuchElementException();
            }
            previous = next;
            next = next.getPayload();
            return previous;
        }

        @Override
        public void remove() {
            throw new UnsupportedOperationException();
        }

    }

}