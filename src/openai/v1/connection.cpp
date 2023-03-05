#include <openai/v1/connection.hpp>

namespace openai::v1 {

std::string Connection::GetApiKey() const { return openai_api_key_; }

}  // End namespace openai::v1.
