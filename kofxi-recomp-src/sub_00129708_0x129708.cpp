#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129708
// Address: 0x129708 - 0x1297c8
void sub_00129708_0x129708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129708_0x129708");
#endif

    switch (ctx->pc) {
        case 0x12972cu: goto label_12972c;
        case 0x129758u: goto label_129758;
        case 0x1297b0u: goto label_1297b0;
        default: break;
    }

    ctx->pc = 0x129708u;

    // 0x129708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12970c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x129710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x129714: 0x3c1001e0  lui         $s0, 0x1E0
    ctx->pc = 0x129714u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)480 << 16));
    // 0x129718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12971c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12971cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129720: 0xae00bf2c  sw          $zero, -0x40D4($s0)
    ctx->pc = 0x129720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950700), GPR_U32(ctx, 0));
    // 0x129724: 0xc0434d8  jal         func_10D360
    ctx->pc = 0x129724u;
    SET_GPR_U32(ctx, 31, 0x12972Cu);
    ctx->pc = 0x129728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129724u;
            // 0x129728: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D360u;
    if (runtime->hasFunction(0x10D360u)) {
        auto targetFn = runtime->lookupFunction(0x10D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12972Cu; }
        if (ctx->pc != 0x12972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D360_0x10d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12972Cu; }
        if (ctx->pc != 0x12972Cu) { return; }
    }
    ctx->pc = 0x12972Cu;
label_12972c:
    // 0x12972c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12972cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129730: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x129730u;
    {
        const bool branch_taken_0x129730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x129730) {
            ctx->pc = 0x129734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129730u;
            // 0x129734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129748u;
            goto label_129748;
        }
    }
    ctx->pc = 0x129738u;
    // 0x129738: 0x8e0fbf2c  lw          $t7, -0x40D4($s0)
    ctx->pc = 0x129738u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950700)));
    // 0x12973c: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12973Cu;
    {
        const bool branch_taken_0x12973c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12973c) {
            ctx->pc = 0x129740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12973Cu;
            // 0x129740: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129744u;
            goto label_129744;
        }
    }
    ctx->pc = 0x129744u;
label_129744:
    // 0x129744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_129748:
    // 0x129748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x129748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12974c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12974cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129750: 0x3e00008  jr          $ra
    ctx->pc = 0x129750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129750u;
            // 0x129754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129758u;
label_129758:
    // 0x129758: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x129758u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x12975c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12975cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x129760: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x129760u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129764: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x129764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x129768: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x129768u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12976c: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x12976cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x129770: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x129770u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x129774: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x129774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x129778: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x129778u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x12977c: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x12977cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x129780: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x129780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129784: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x129784u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x129788: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x129788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x12978c: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x12978cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x129790: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x129790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x129794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x129794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129798: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x129798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x12979c: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x12979cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x1297a0: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x1297a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x1297a4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1297a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1297a8: 0xc04afb2  jal         func_12BEC8
    ctx->pc = 0x1297A8u;
    SET_GPR_U32(ctx, 31, 0x1297B0u);
    ctx->pc = 0x1297ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1297A8u;
            // 0x1297ac: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BEC8u;
    if (runtime->hasFunction(0x12BEC8u)) {
        auto targetFn = runtime->lookupFunction(0x12BEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1297B0u; }
        if (ctx->pc != 0x1297B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BEC8_0x12bec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1297B0u; }
        if (ctx->pc != 0x1297B0u) { return; }
    }
    ctx->pc = 0x1297B0u;
label_1297b0:
    // 0x1297b0: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x1297b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1297b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1297b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1297b8: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x1297b8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1297bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1297BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1297C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1297BCu;
            // 0x1297c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1297C4u;
    // 0x1297c4: 0x0  nop
    ctx->pc = 0x1297c4u;
    // NOP
    ctx->pc = 0x1297c8u;
}
