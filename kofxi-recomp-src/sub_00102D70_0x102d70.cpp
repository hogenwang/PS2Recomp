#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102D70
// Address: 0x102d70 - 0x102d80
void sub_00102D70_0x102d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102D70_0x102d70");
#endif

    ctx->pc = 0x102d70u;

    // 0x102d70: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x102d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x102d74: 0x48c4d800  ctc2.ni     $a0, $vi27
    ctx->pc = 0x102d74u;
    ctx->vu0_xitop = GPR_U32(ctx, 4) & 0x3FF;
    // 0x102d78: 0x3e00008  jr          $ra
    ctx->pc = 0x102D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D78u;
            // 0x102d7c: 0x4a00d839  vcallmsr    $vi27 (Delay Slot)
        {     uint16_t instr_index = ctx->vi[27] & 0x1FF;     uint32_t target_byte_addr = (uint32_t)instr_index << 3;     ctx->vu0_pc = target_byte_addr;     runtime->vu0StartMicroProgram(rdram, ctx, target_byte_addr); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102D80u;
    ctx->pc = 0x102d80u;
}
