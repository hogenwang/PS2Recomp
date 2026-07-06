#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F99C8
// Address: 0x1f99c8 - 0x1f9a20
void sub_001F99C8_0x1f99c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F99C8_0x1f99c8");
#endif

    switch (ctx->pc) {
        case 0x1f9a10u: goto label_1f9a10;
        default: break;
    }

    ctx->pc = 0x1f99c8u;

    // 0x1f99c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f99c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f99cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f99ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f99d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f99d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f99d4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1f99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f99d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F99D8u;
    {
        const bool branch_taken_0x1f99d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f99d8) {
            ctx->pc = 0x1F99F0u;
            goto label_1f99f0;
        }
    }
    ctx->pc = 0x1F99E0u;
    // 0x1f99e0: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x1f99e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 5));
    // 0x1f99e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F99E4u;
    {
        const bool branch_taken_0x1f99e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F99E4u;
            // 0x1f99e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99e4) {
            ctx->pc = 0x1F9A10u;
            goto label_1f9a10;
        }
    }
    ctx->pc = 0x1F99ECu;
    // 0x1f99ec: 0x0  nop
    ctx->pc = 0x1f99ecu;
    // NOP
label_1f99f0:
    // 0x1f99f0: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F99F0u;
    {
        const bool branch_taken_0x1f99f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F99F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F99F0u;
            // 0x1f99f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99f0) {
            ctx->pc = 0x1F9A10u;
            goto label_1f9a10;
        }
    }
    ctx->pc = 0x1F99F8u;
    // 0x1f99f8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f99f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f99fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f99fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9a00: 0x34a50207  ori         $a1, $a1, 0x207
    ctx->pc = 0x1f9a00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)519);
    // 0x1f9a04: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F9A04u;
    ctx->pc = 0x1F9A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A04u;
            // 0x1f9a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F9A0Cu;
    // 0x1f9a0c: 0x0  nop
    ctx->pc = 0x1f9a0cu;
    // NOP
label_1f9a10:
    // 0x1f9a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A14u;
            // 0x1f9a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9A1Cu;
    // 0x1f9a1c: 0x0  nop
    ctx->pc = 0x1f9a1cu;
    // NOP
    ctx->pc = 0x1f9a20u;
}
