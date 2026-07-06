#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA058
// Address: 0x1ba058 - 0x1ba088
void sub_001BA058_0x1ba058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA058_0x1ba058");
#endif

    switch (ctx->pc) {
        case 0x1ba070u: goto label_1ba070;
        default: break;
    }

    ctx->pc = 0x1ba058u;

    // 0x1ba058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba05c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA05Cu;
    {
        const bool branch_taken_0x1ba05c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA05Cu;
            // 0x1ba060: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba05c) {
            ctx->pc = 0x1BA078u;
            goto label_1ba078;
        }
    }
    ctx->pc = 0x1BA064u;
    // 0x1ba064: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ba068: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1BA068u;
    SET_GPR_U32(ctx, 31, 0x1BA070u);
    ctx->pc = 0x1BA06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA068u;
            // 0x1ba06c: 0x248482f8  addiu       $a0, $a0, -0x7D08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA070u; }
        if (ctx->pc != 0x1BA070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA070u; }
        if (ctx->pc != 0x1BA070u) { return; }
    }
    ctx->pc = 0x1BA070u;
label_1ba070:
    // 0x1ba070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA070u;
    {
        const bool branch_taken_0x1ba070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA070u;
            // 0x1ba074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba070) {
            ctx->pc = 0x1BA07Cu;
            goto label_1ba07c;
        }
    }
    ctx->pc = 0x1BA078u;
label_1ba078:
    // 0x1ba078: 0x84820046  lh          $v0, 0x46($a0)
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_1ba07c:
    // 0x1ba07c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba080: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA080u;
            // 0x1ba084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA088u;
    ctx->pc = 0x1ba088u;
}
