#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0410
// Address: 0x2e0410 - 0x2e0498
void sub_002E0410_0x2e0410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0410_0x2e0410");
#endif

    switch (ctx->pc) {
        case 0x2e043cu: goto label_2e043c;
        case 0x2e0454u: goto label_2e0454;
        case 0x2e0470u: goto label_2e0470;
        default: break;
    }

    ctx->pc = 0x2e0410u;

    // 0x2e0410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0414: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e0414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e0418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e041c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0420: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e0420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0424: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e0424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e0428: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e0428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e042c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e0430: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e0430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e0434: 0xc0b7da4  jal         func_2DF690
    ctx->pc = 0x2E0434u;
    SET_GPR_U32(ctx, 31, 0x2E043Cu);
    ctx->pc = 0x2E0438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0434u;
            // 0x2e0438: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF690u;
    if (runtime->hasFunction(0x2DF690u)) {
        auto targetFn = runtime->lookupFunction(0x2DF690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E043Cu; }
        if (ctx->pc != 0x2E043Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF690_0x2df690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E043Cu; }
        if (ctx->pc != 0x2E043Cu) { return; }
    }
    ctx->pc = 0x2E043Cu;
label_2e043c:
    // 0x2e043c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e043cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0440: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e0440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0444: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0444u;
    {
        const bool branch_taken_0x2e0444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0444u;
            // 0x2e0448: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0444) {
            ctx->pc = 0x2E045Cu;
            goto label_2e045c;
        }
    }
    ctx->pc = 0x2E044Cu;
    // 0x2e044c: 0xc0b7ee4  jal         func_2DFB90
    ctx->pc = 0x2E044Cu;
    SET_GPR_U32(ctx, 31, 0x2E0454u);
    ctx->pc = 0x2E0450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E044Cu;
            // 0x2e0450: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFB90u;
    if (runtime->hasFunction(0x2DFB90u)) {
        auto targetFn = runtime->lookupFunction(0x2DFB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0454u; }
        if (ctx->pc != 0x2E0454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DFB90_0x2dfb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0454u; }
        if (ctx->pc != 0x2E0454u) { return; }
    }
    ctx->pc = 0x2E0454u;
label_2e0454:
    // 0x2e0454: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0454u;
    {
        const bool branch_taken_0x2e0454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0454) {
            ctx->pc = 0x2E0468u;
            goto label_2e0468;
        }
    }
    ctx->pc = 0x2E045Cu;
label_2e045c:
    // 0x2e045c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E045Cu;
    {
        const bool branch_taken_0x2e045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E045Cu;
            // 0x2e0460: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e045c) {
            ctx->pc = 0x2E047Cu;
            goto label_2e047c;
        }
    }
    ctx->pc = 0x2E0464u;
    // 0x2e0464: 0x0  nop
    ctx->pc = 0x2e0464u;
    // NOP
label_2e0468:
    // 0x2e0468: 0xc0b7f12  jal         func_2DFC48
    ctx->pc = 0x2E0468u;
    SET_GPR_U32(ctx, 31, 0x2E0470u);
    ctx->pc = 0x2E046Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0468u;
            // 0x2e046c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFC48u;
    if (runtime->hasFunction(0x2DFC48u)) {
        auto targetFn = runtime->lookupFunction(0x2DFC48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0470u; }
        if (ctx->pc != 0x2E0470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DFC48_0x2dfc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0470u; }
        if (ctx->pc != 0x2E0470u) { return; }
    }
    ctx->pc = 0x2E0470u;
label_2e0470:
    // 0x2e0470: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e0470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0474: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e0474u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e0478: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e0478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e047c:
    // 0x2e047c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e047cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0480: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e0480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e0484: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e0484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0488: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e0488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e048c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E048Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E048Cu;
            // 0x2e0490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0494u;
    // 0x2e0494: 0x0  nop
    ctx->pc = 0x2e0494u;
    // NOP
    ctx->pc = 0x2e0498u;
}
