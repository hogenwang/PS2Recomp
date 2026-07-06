#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C33C0
// Address: 0x1c33c0 - 0x1c3468
void sub_001C33C0_0x1c33c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C33C0_0x1c33c0");
#endif

    switch (ctx->pc) {
        case 0x1c33e8u: goto label_1c33e8;
        case 0x1c340cu: goto label_1c340c;
        case 0x1c3420u: goto label_1c3420;
        case 0x1c3428u: goto label_1c3428;
        case 0x1c3438u: goto label_1c3438;
        case 0x1c344cu: goto label_1c344c;
        default: break;
    }

    ctx->pc = 0x1c33c0u;

    // 0x1c33c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c33c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c33c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c33c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c33c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c33c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33cc: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1c33ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1c33d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c33d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c33d4: 0x24a5e9b0  addiu       $a1, $a1, -0x1650
    ctx->pc = 0x1c33d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961584));
    // 0x1c33d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c33d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c33dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c33e0: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1C33E0u;
    SET_GPR_U32(ctx, 31, 0x1C33E8u);
    ctx->pc = 0x1C33E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33E0u;
            // 0x1c33e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C33E8u; }
        if (ctx->pc != 0x1C33E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C33E8u; }
        if (ctx->pc != 0x1C33E8u) { return; }
    }
    ctx->pc = 0x1C33E8u;
label_1c33e8:
    // 0x1c33e8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1c33e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c33ec: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c33f0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C33F0u;
    {
        const bool branch_taken_0x1c33f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C33F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33F0u;
            // 0x1c33f4: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33f0) {
            ctx->pc = 0x1C340Cu;
            goto label_1c340c;
        }
    }
    ctx->pc = 0x1C33F8u;
    // 0x1c33f8: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C33F8u;
    {
        const bool branch_taken_0x1c33f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C33FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33F8u;
            // 0x1c33fc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33f8) {
            ctx->pc = 0x1C340Cu;
            goto label_1c340c;
        }
    }
    ctx->pc = 0x1C3400u;
    // 0x1c3400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3404: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x1C3404u;
    SET_GPR_U32(ctx, 31, 0x1C340Cu);
    ctx->pc = 0x1C3408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3404u;
            // 0x1c3408: 0x24a59f00  addiu       $a1, $a1, -0x6100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (runtime->hasFunction(0x129B68u)) {
        auto targetFn = runtime->lookupFunction(0x129B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C340Cu; }
        if (ctx->pc != 0x1C340Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129B68_0x129b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C340Cu; }
        if (ctx->pc != 0x1C340Cu) { return; }
    }
    ctx->pc = 0x1C340Cu;
label_1c340c:
    // 0x1c340c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c340cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3410: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x1c3410u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x1c3414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3418: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x1C3418u;
    SET_GPR_U32(ctx, 31, 0x1C3420u);
    ctx->pc = 0x1C341Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3418u;
            // 0x1c341c: 0x26109f08  addiu       $s0, $s0, -0x60F8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (runtime->hasFunction(0x129B68u)) {
        auto targetFn = runtime->lookupFunction(0x129B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3420u; }
        if (ctx->pc != 0x1C3420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129B68_0x129b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3420u; }
        if (ctx->pc != 0x1C3420u) { return; }
    }
    ctx->pc = 0x1C3420u;
label_1c3420:
    // 0x1c3420: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C3420u;
    SET_GPR_U32(ctx, 31, 0x1C3428u);
    ctx->pc = 0x1C3424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3420u;
            // 0x1c3424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3428u; }
        if (ctx->pc != 0x1C3428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3428u; }
        if (ctx->pc != 0x1C3428u) { return; }
    }
    ctx->pc = 0x1C3428u;
label_1c3428:
    // 0x1c3428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c342c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c3430: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1C3430u;
    SET_GPR_U32(ctx, 31, 0x1C3438u);
    ctx->pc = 0x1C3434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3430u;
            // 0x1c3434: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3438u; }
        if (ctx->pc != 0x1C3438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3438u; }
        if (ctx->pc != 0x1C3438u) { return; }
    }
    ctx->pc = 0x1C3438u;
label_1c3438:
    // 0x1c3438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c343c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C343Cu;
    {
        const bool branch_taken_0x1c343c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C343Cu;
            // 0x1c3440: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c343c) {
            ctx->pc = 0x1C3450u;
            goto label_1c3450;
        }
    }
    ctx->pc = 0x1C3444u;
    // 0x1c3444: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x1C3444u;
    SET_GPR_U32(ctx, 31, 0x1C344Cu);
    ctx->pc = 0x129B68u;
    if (runtime->hasFunction(0x129B68u)) {
        auto targetFn = runtime->lookupFunction(0x129B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C344Cu; }
        if (ctx->pc != 0x1C344Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129B68_0x129b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C344Cu; }
        if (ctx->pc != 0x1C344Cu) { return; }
    }
    ctx->pc = 0x1C344Cu;
label_1c344c:
    // 0x1c344c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3450:
    // 0x1c3450: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c345c: 0x8070a60  j           func_1C2980
    ctx->pc = 0x1C345Cu;
    ctx->pc = 0x1C3460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C345Cu;
            // 0x1c3460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2980u;
    if (runtime->hasFunction(0x1C2980u)) {
        auto targetFn = runtime->lookupFunction(0x1C2980u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C2980_0x1c2980(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C3464u;
    // 0x1c3464: 0x0  nop
    ctx->pc = 0x1c3464u;
    // NOP
    ctx->pc = 0x1c3468u;
}
