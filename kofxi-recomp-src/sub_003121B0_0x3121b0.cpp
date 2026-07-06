#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003121B0
// Address: 0x3121b0 - 0x312250
void sub_003121B0_0x3121b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003121B0_0x3121b0");
#endif

    switch (ctx->pc) {
        case 0x3121fcu: goto label_3121fc;
        case 0x31220cu: goto label_31220c;
        case 0x312230u: goto label_312230;
        default: break;
    }

    ctx->pc = 0x3121b0u;

    // 0x3121b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3121b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3121b4: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x3121b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x3121b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3121b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3121bc: 0x8c63d938  lw          $v1, -0x26C8($v1)
    ctx->pc = 0x3121bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957368)));
    // 0x3121c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3121C0u;
    {
        const bool branch_taken_0x3121c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3121c0) {
            ctx->pc = 0x3121D8u;
            goto label_3121d8;
        }
    }
    ctx->pc = 0x3121C8u;
    // 0x3121c8: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x3121c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3121cc: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x3121ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x3121d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3121D0u;
    {
        const bool branch_taken_0x3121d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3121D0u;
            // 0x3121d4: 0xac64d938  sw          $a0, -0x26C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957368), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121d0) {
            ctx->pc = 0x312240u;
            goto label_312240;
        }
    }
    ctx->pc = 0x3121D8u;
label_3121d8:
    // 0x3121d8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3121d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3121dc: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x3121dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x3121e0: 0x8c45d920  lw          $a1, -0x26E0($v0)
    ctx->pc = 0x3121e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957344)));
    // 0x3121e4: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3121e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3121e8: 0x9044d940  lbu         $a0, -0x26C0($v0)
    ctx->pc = 0x3121e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957376)));
    // 0x3121ec: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x3121ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3121f0: 0xac62d938  sw          $v0, -0x26C8($v1)
    ctx->pc = 0x3121f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957368), GPR_U32(ctx, 2));
    // 0x3121f4: 0xc0c4840  jal         func_312100
    ctx->pc = 0x3121F4u;
    SET_GPR_U32(ctx, 31, 0x3121FCu);
    ctx->pc = 0x3121F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3121F4u;
            // 0x3121f8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x312100u;
    if (runtime->hasFunction(0x312100u)) {
        auto targetFn = runtime->lookupFunction(0x312100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3121FCu; }
        if (ctx->pc != 0x3121FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312100_0x312100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3121FCu; }
        if (ctx->pc != 0x3121FCu) { return; }
    }
    ctx->pc = 0x3121FCu;
label_3121fc:
    // 0x3121fc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3121fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312200: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x312200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x312204: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x312204u;
    {
        const bool branch_taken_0x312204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x312204) {
            ctx->pc = 0x312240u;
            goto label_312240;
        }
    }
    ctx->pc = 0x31220Cu;
label_31220c:
    // 0x31220c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x31220cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x312210: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x312210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x312214: 0x8c45d938  lw          $a1, -0x26C8($v0)
    ctx->pc = 0x312214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957368)));
    // 0x312218: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x312218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x31221c: 0x9044d940  lbu         $a0, -0x26C0($v0)
    ctx->pc = 0x31221cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957376)));
    // 0x312220: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x312220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x312224: 0xac62d938  sw          $v0, -0x26C8($v1)
    ctx->pc = 0x312224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957368), GPR_U32(ctx, 2));
    // 0x312228: 0xc0c4840  jal         func_312100
    ctx->pc = 0x312228u;
    SET_GPR_U32(ctx, 31, 0x312230u);
    ctx->pc = 0x31222Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312228u;
            // 0x31222c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x312100u;
    if (runtime->hasFunction(0x312100u)) {
        auto targetFn = runtime->lookupFunction(0x312100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312230u; }
        if (ctx->pc != 0x312230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312100_0x312100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312230u; }
        if (ctx->pc != 0x312230u) { return; }
    }
    ctx->pc = 0x312230u;
label_312230:
    // 0x312230: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x312230u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312234: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x312234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x312238: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x312238u;
    {
        const bool branch_taken_0x312238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312238) {
            ctx->pc = 0x31220Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31220c;
        }
    }
    ctx->pc = 0x312240u;
label_312240:
    // 0x312240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312244: 0x3e00008  jr          $ra
    ctx->pc = 0x312244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312244u;
            // 0x312248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31224Cu;
    // 0x31224c: 0x0  nop
    ctx->pc = 0x31224cu;
    // NOP
    ctx->pc = 0x312250u;
}
