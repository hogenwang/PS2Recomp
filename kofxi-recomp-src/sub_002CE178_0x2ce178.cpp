#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE178
// Address: 0x2ce178 - 0x2ce1c8
void sub_002CE178_0x2ce178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE178_0x2ce178");
#endif

    switch (ctx->pc) {
        case 0x2ce1a0u: goto label_2ce1a0;
        case 0x2ce1a8u: goto label_2ce1a8;
        default: break;
    }

    ctx->pc = 0x2ce178u;

    // 0x2ce178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce17c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2ce17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ce180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ce188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ce18c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ce18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce190: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2ce190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ce194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce198: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CE198u;
    SET_GPR_U32(ctx, 31, 0x2CE1A0u);
    ctx->pc = 0x2CE19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE198u;
            // 0x2ce19c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1A0u; }
        if (ctx->pc != 0x2CE1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1A0u; }
        if (ctx->pc != 0x2CE1A0u) { return; }
    }
    ctx->pc = 0x2CE1A0u;
label_2ce1a0:
    // 0x2ce1a0: 0xc0b5c8c  jal         func_2D7230
    ctx->pc = 0x2CE1A0u;
    SET_GPR_U32(ctx, 31, 0x2CE1A8u);
    ctx->pc = 0x2CE1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1A0u;
            // 0x2ce1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7230u;
    if (runtime->hasFunction(0x2D7230u)) {
        auto targetFn = runtime->lookupFunction(0x2D7230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1A8u; }
        if (ctx->pc != 0x2CE1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D7230_0x2d7230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1A8u; }
        if (ctx->pc != 0x2CE1A8u) { return; }
    }
    ctx->pc = 0x2CE1A8u;
label_2ce1a8:
    // 0x2ce1a8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CE1A8u;
    {
        const bool branch_taken_0x2ce1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1a8) {
            ctx->pc = 0x2CE1ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1A8u;
            // 0x2ce1ac: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE1B0u;
            goto label_2ce1b0;
        }
    }
    ctx->pc = 0x2CE1B0u;
label_2ce1b0:
    // 0x2ce1b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce1b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce1b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce1b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1BCu;
            // 0x2ce1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE1C4u;
    // 0x2ce1c4: 0x0  nop
    ctx->pc = 0x2ce1c4u;
    // NOP
    ctx->pc = 0x2ce1c8u;
}
