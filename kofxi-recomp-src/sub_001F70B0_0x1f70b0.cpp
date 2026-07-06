#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F70B0
// Address: 0x1f70b0 - 0x1f7100
void sub_001F70B0_0x1f70b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F70B0_0x1f70b0");
#endif

    switch (ctx->pc) {
        case 0x1f70c4u: goto label_1f70c4;
        case 0x1f70dcu: goto label_1f70dc;
        default: break;
    }

    ctx->pc = 0x1f70b0u;

    // 0x1f70b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f70b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f70b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f70b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f70b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f70b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f70bc: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F70BCu;
    SET_GPR_U32(ctx, 31, 0x1F70C4u);
    ctx->pc = 0x1F70C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70BCu;
            // 0x1f70c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70C4u; }
        if (ctx->pc != 0x1F70C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70C4u; }
        if (ctx->pc != 0x1F70C4u) { return; }
    }
    ctx->pc = 0x1F70C4u;
label_1f70c4:
    // 0x1f70c4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f70c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f70c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f70c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F70CCu;
    {
        const bool branch_taken_0x1f70cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F70D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70CCu;
            // 0x1f70d0: 0x34a50141  ori         $a1, $a1, 0x141 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)321);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70cc) {
            ctx->pc = 0x1F70E8u;
            goto label_1f70e8;
        }
    }
    ctx->pc = 0x1F70D4u;
    // 0x1f70d4: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1F70D4u;
    SET_GPR_U32(ctx, 31, 0x1F70DCu);
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70DCu; }
        if (ctx->pc != 0x1F70DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70DCu; }
        if (ctx->pc != 0x1F70DCu) { return; }
    }
    ctx->pc = 0x1F70DCu;
label_1f70dc:
    // 0x1f70dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F70DCu;
    {
        const bool branch_taken_0x1f70dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F70E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70DCu;
            // 0x1f70e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70dc) {
            ctx->pc = 0x1F70ECu;
            goto label_1f70ec;
        }
    }
    ctx->pc = 0x1F70E4u;
    // 0x1f70e4: 0x0  nop
    ctx->pc = 0x1f70e4u;
    // NOP
label_1f70e8:
    // 0x1f70e8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1f70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1f70ec:
    // 0x1f70ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f70ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f70f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f70f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f70f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F70F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F70F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70F4u;
            // 0x1f70f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F70FCu;
    // 0x1f70fc: 0x0  nop
    ctx->pc = 0x1f70fcu;
    // NOP
    ctx->pc = 0x1f7100u;
}
