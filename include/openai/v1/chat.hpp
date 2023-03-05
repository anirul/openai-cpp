#pragma once

/*
 * Copyright 2023 anirul
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the “Software”), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <openai/v1/connection.hpp>
#include <openai/v1/engine.hpp>
#include <openai/v1/message.hpp>

namespace openai::v1 {

class Chat {
 public:
  // Constructor it take a connection and an engine.
  Chat(const Connection& connection, const Engine& engine)
      : connection_(connection), engine_(engine) {}
  void SetMessages(const Messages& message) { messages_ = message; }
  Message Query();
  void SetTemperature(float temp) { temp_ = temp; }

 private:
  const Connection& connection_;
  const Engine& engine_;
  Messages messages_;
  float temp_;
  const Connection& connection_;
};

}  // End namespace openai::v1.
