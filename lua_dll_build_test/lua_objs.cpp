//
// This file was automatically generated from: objs.txt
// EDIT AT YOUR OWN RISK; all changes will be lost upon regeneration
// NOT SUITABLE FOR USE IN CRITICAL SOFTWARE WHERE LIVES OR LIVELIHOODS DEPEND ON THE CORRECT OPERATION
//

#define DCON_LUADLL_EXPORTS
#include "lua_objs.hpp"

DCON_LUADLL_API dcon::data_container state;
void (*release_object_function)(int32_t) = nullptr;

void dcon_set_release_object_function(void (*fn)(int32_t)) {
	 release_object_function = fn;
}
bool dcon_thingy_is_valid(int32_t i) {
	 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(i)};
	 bool result = state.thingy_is_valid(index);
	 return result;
 }
uint32_t dcon_thingy_size() {
	 auto result = state.thingy_size();
	 return result;
 }
void dcon_thingy_resize(uint32_t sz) {
	 state.thingy_resize(sz);
 }
int32_t dcon_thingy_get_some_value(int32_t i) { 
	 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(i)};
	 return state.thingy_get_some_value(index);
 }
void dcon_thingy_set_some_value(int32_t i,int32_t v) { 
	 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(i)};
	 state.thingy_set_some_value(index, v);
 }
lua_reference_type dcon_thingy_get_lua_value(int32_t i) { 
	 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(i)};
	 return state.thingy_get_lua_value(index);
 }
void dcon_thingy_set_lua_value(int32_t i,lua_reference_type v) { 
	 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(i)};
	 auto old_val = state.thingy_get_lua_value(index);
	 if(old_val) release_object_function(old_val);
	 state.thingy_set_lua_value(index, v);
 }
float dcon_thingy_get_big_array(int32_t i, int32_t idx) { 
	 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(i)};
	 auto sub_index = dcon::thingy_id{dcon::thingy_id::value_base_t(idx)};
	 return state.thingy_get_big_array(index, sub_index);
 }
void dcon_thingy_set_big_array(int32_t i, int32_t idx,float v) { 
	 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(i)};
	 auto sub_index = dcon::thingy_id{dcon::thingy_id::value_base_t(idx)};
	 state.thingy_set_big_array(index, sub_index, v);
 }
uint32_t dcon_thingy_get_big_array_size() { 
	 return state.thingy_get_big_array_size();
 }
void dcon_thingy_resize_big_array(uint32_t sz) { 
	 state.thingy_resize_big_array(sz);
 }
bool dcon_thingy_get_big_array_bf(int32_t i, int32_t idx) { 
	 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(i)};
	 auto sub_index = int32_t(idx);
	 return state.thingy_get_big_array_bf(index, sub_index);
 }
void dcon_thingy_set_big_array_bf(int32_t i, int32_t idx, bool v) { 
	 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(i)};
	 auto sub_index = int32_t(idx);
	 state.thingy_set_big_array_bf(index, sub_index, v);
 }
uint32_t dcon_thingy_get_big_array_bf_size() { 
	 return state.thingy_get_big_array_bf_size();
 }
void dcon_thingy_resize_big_array_bf(uint32_t sz) { 
	 state.thingy_resize_big_array_bf(sz);
 }

void dcon_pop_back_thingy() { 
	 if(state.thingy_size() > 0) {
		 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(state.thingy_size()) - 1};
		 if(auto result = state.thingy_get_lua_value(index); result != 0) release_object_function(result);
	 state.pop_back_thingy();
	 }
 }
int32_t dcon_create_thingy() { 
	 auto result = state.create_thingy();
	 return result.index();
 }
void dcon_delete_thingy(int32_t i) { 
	 auto index = dcon::thingy_id{dcon::thingy_id::value_base_t(i)};
		 if(auto result = state.thingy_get_lua_value(index); result != 0) release_object_function(result);
	 state.delete_thingy(index);
 }

int32_t dcon_reset() { 
	 state.reset();
	 return 0;
 }

