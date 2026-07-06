#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0358
// Address: 0x1f0358 - 0x1f0430
void sub_001F0358_0x1f0358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0358_0x1f0358");
#endif

    switch (ctx->pc) {
        case 0x1f0360u: goto label_1f0360;
        case 0x1f0370u: goto label_1f0370;
        case 0x1f0380u: goto label_1f0380;
        case 0x1f03b4u: goto label_1f03b4;
        case 0x1f03c4u: goto label_1f03c4;
        case 0x1f03e0u: goto label_1f03e0;
        case 0x1f03f8u: goto label_1f03f8;
        case 0x1f0400u: goto label_1f0400;
        case 0x1f040cu: goto label_1f040c;
        case 0x1f0414u: goto label_1f0414;
        default: break;
    }

    ctx->pc = 0x1f0358u;

    // 0x1f0358: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0358u;
            // 0x1f035c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0360u;
label_1f0360:
    // 0x1f0360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0368: 0xc076ff0  jal         func_1DBFC0
    ctx->pc = 0x1F0368u;
    SET_GPR_U32(ctx, 31, 0x1F0370u);
    ctx->pc = 0x1DBFC0u;
    if (runtime->hasFunction(0x1DBFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0370u; }
        if (ctx->pc != 0x1F0370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBFC0_0x1dbfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0370u; }
        if (ctx->pc != 0x1F0370u) { return; }
    }
    ctx->pc = 0x1F0370u;
label_1f0370:
    // 0x1f0370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0378: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F037Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0378u;
            // 0x1f037c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0380u;
label_1f0380:
    // 0x1f0380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f038c: 0x807c0e6  j           func_1F0398
    ctx->pc = 0x1F038Cu;
    ctx->pc = 0x1F0390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F038Cu;
            // 0x1f0390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0398u;
    goto label_1f0398;
    ctx->pc = 0x1F0394u;
    // 0x1f0394: 0x0  nop
    ctx->pc = 0x1f0394u;
    // NOP
label_1f0398:
    // 0x1f0398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f0398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f039c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f03a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f03a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f03a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f03a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f03a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f03a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f03ac: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F03ACu;
    SET_GPR_U32(ctx, 31, 0x1F03B4u);
    ctx->pc = 0x1F03B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03ACu;
            // 0x1f03b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F03B4u; }
        if (ctx->pc != 0x1F03B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F03B4u; }
        if (ctx->pc != 0x1F03B4u) { return; }
    }
    ctx->pc = 0x1F03B4u;
label_1f03b4:
    // 0x1f03b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F03B4u;
    {
        const bool branch_taken_0x1f03b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03B4u;
            // 0x1f03b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03b4) {
            ctx->pc = 0x1F0418u;
            goto label_1f0418;
        }
    }
    ctx->pc = 0x1F03BCu;
    // 0x1f03bc: 0xc07c144  jal         func_1F0510
    ctx->pc = 0x1F03BCu;
    SET_GPR_U32(ctx, 31, 0x1F03C4u);
    ctx->pc = 0x1F0510u;
    if (runtime->hasFunction(0x1F0510u)) {
        auto targetFn = runtime->lookupFunction(0x1F0510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F03C4u; }
        if (ctx->pc != 0x1F03C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0510_0x1f0510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F03C4u; }
        if (ctx->pc != 0x1F03C4u) { return; }
    }
    ctx->pc = 0x1F03C4u;
label_1f03c4:
    // 0x1f03c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f03c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F03C8u;
    {
        const bool branch_taken_0x1f03c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F03CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03C8u;
            // 0x1f03cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03c8) {
            ctx->pc = 0x1F03D8u;
            goto label_1f03d8;
        }
    }
    ctx->pc = 0x1F03D0u;
    // 0x1f03d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F03D0u;
    {
        const bool branch_taken_0x1f03d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03D0u;
            // 0x1f03d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03d0) {
            ctx->pc = 0x1F0418u;
            goto label_1f0418;
        }
    }
    ctx->pc = 0x1F03D8u;
label_1f03d8:
    // 0x1f03d8: 0xc07c10c  jal         func_1F0430
    ctx->pc = 0x1F03D8u;
    SET_GPR_U32(ctx, 31, 0x1F03E0u);
    ctx->pc = 0x1F0430u;
    if (runtime->hasFunction(0x1F0430u)) {
        auto targetFn = runtime->lookupFunction(0x1F0430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F03E0u; }
        if (ctx->pc != 0x1F03E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0430_0x1f0430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F03E0u; }
        if (ctx->pc != 0x1F03E0u) { return; }
    }
    ctx->pc = 0x1F03E0u;
label_1f03e0:
    // 0x1f03e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f03e4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1f03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1f03e8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F03E8u;
    {
        const bool branch_taken_0x1f03e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F03ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03E8u;
            // 0x1f03ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03e8) {
            ctx->pc = 0x1F03F8u;
            goto label_1f03f8;
        }
    }
    ctx->pc = 0x1F03F0u;
    // 0x1f03f0: 0xc07c128  jal         func_1F04A0
    ctx->pc = 0x1F03F0u;
    SET_GPR_U32(ctx, 31, 0x1F03F8u);
    ctx->pc = 0x1F04A0u;
    if (runtime->hasFunction(0x1F04A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F04A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F03F8u; }
        if (ctx->pc != 0x1F03F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F04A0_0x1f04a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F03F8u; }
        if (ctx->pc != 0x1F03F8u) { return; }
    }
    ctx->pc = 0x1F03F8u;
label_1f03f8:
    // 0x1f03f8: 0xc07c232  jal         func_1F08C8
    ctx->pc = 0x1F03F8u;
    SET_GPR_U32(ctx, 31, 0x1F0400u);
    ctx->pc = 0x1F03FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03F8u;
            // 0x1f03fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F08C8u;
    if (runtime->hasFunction(0x1F08C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F08C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0400u; }
        if (ctx->pc != 0x1F0400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F08C8_0x1f08c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0400u; }
        if (ctx->pc != 0x1F0400u) { return; }
    }
    ctx->pc = 0x1F0400u;
label_1f0400:
    // 0x1f0400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0404: 0xc07c14a  jal         func_1F0528
    ctx->pc = 0x1F0404u;
    SET_GPR_U32(ctx, 31, 0x1F040Cu);
    ctx->pc = 0x1F0408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0404u;
            // 0x1f0408: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0528u;
    if (runtime->hasFunction(0x1F0528u)) {
        auto targetFn = runtime->lookupFunction(0x1F0528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F040Cu; }
        if (ctx->pc != 0x1F040Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0528_0x1f0528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F040Cu; }
        if (ctx->pc != 0x1F040Cu) { return; }
    }
    ctx->pc = 0x1F040Cu;
label_1f040c:
    // 0x1f040c: 0xc07c1ec  jal         func_1F07B0
    ctx->pc = 0x1F040Cu;
    SET_GPR_U32(ctx, 31, 0x1F0414u);
    ctx->pc = 0x1F0410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F040Cu;
            // 0x1f0410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F07B0u;
    if (runtime->hasFunction(0x1F07B0u)) {
        auto targetFn = runtime->lookupFunction(0x1F07B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0414u; }
        if (ctx->pc != 0x1F0414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F07B0_0x1f07b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0414u; }
        if (ctx->pc != 0x1F0414u) { return; }
    }
    ctx->pc = 0x1F0414u;
label_1f0414:
    // 0x1f0414: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f0414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0418:
    // 0x1f0418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f041c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f041cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0424: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0424u;
            // 0x1f0428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F042Cu;
    // 0x1f042c: 0x0  nop
    ctx->pc = 0x1f042cu;
    // NOP
    ctx->pc = 0x1f0430u;
}
