#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB820
// Address: 0x1fb820 - 0x1fb8e8
void sub_001FB820_0x1fb820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB820_0x1fb820");
#endif

    switch (ctx->pc) {
        case 0x1fb860u: goto label_1fb860;
        case 0x1fb8a0u: goto label_1fb8a0;
        case 0x1fb8acu: goto label_1fb8ac;
        case 0x1fb8bcu: goto label_1fb8bc;
        default: break;
    }

    ctx->pc = 0x1fb820u;

    // 0x1fb820: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1fb820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb824: 0x8c850294  lw          $a1, 0x294($a0)
    ctx->pc = 0x1fb824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 660)));
    // 0x1fb828: 0x8c820298  lw          $v0, 0x298($a0)
    ctx->pc = 0x1fb828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x1fb82c: 0x8c83029c  lw          $v1, 0x29C($a0)
    ctx->pc = 0x1fb82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
    // 0x1fb830: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1fb830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fb834: 0xc2202a  slt         $a0, $a2, $v0
    ctx->pc = 0x1fb834u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fb838: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1fb838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fb83c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB83Cu;
    {
        const bool branch_taken_0x1fb83c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB83Cu;
            // 0x1fb840: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb83c) {
            ctx->pc = 0x1FB854u;
            goto label_1fb854;
        }
    }
    ctx->pc = 0x1FB844u;
    // 0x1fb844: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1fb844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb848: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1fb848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fb84c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb850: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1fb850u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_1fb854:
    // 0x1fb854: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB854u;
            // 0x1fb858: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB85Cu;
    // 0x1fb85c: 0x0  nop
    ctx->pc = 0x1fb85cu;
    // NOP
label_1fb860:
    // 0x1fb860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fb864: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1fb864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1fb868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb86c: 0x246316f0  addiu       $v1, $v1, 0x16F0
    ctx->pc = 0x1fb86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5872));
    // 0x1fb870: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb874: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x1fb874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fb878: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fb878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fb87c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1fb87cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fb880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb884: 0x2471005c  addiu       $s1, $v1, 0x5C
    ctx->pc = 0x1fb884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x1fb888: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fb888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fb88c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fb88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb894: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fb894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fb898: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1fb898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb89c: 0x0  nop
    ctx->pc = 0x1fb89cu;
    // NOP
label_1fb8a0:
    // 0x1fb8a0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1fb8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1fb8a4: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FB8A4u;
    SET_GPR_U32(ctx, 31, 0x1FB8ACu);
    ctx->pc = 0x1FB8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB8A4u;
            // 0x1fb8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB8ACu; }
        if (ctx->pc != 0x1FB8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB8ACu; }
        if (ctx->pc != 0x1FB8ACu) { return; }
    }
    ctx->pc = 0x1FB8ACu;
label_1fb8ac:
    // 0x1fb8ac: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB8ACu;
    {
        const bool branch_taken_0x1fb8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1FB8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB8ACu;
            // 0x1fb8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8ac) {
            ctx->pc = 0x1FB8BCu;
            goto label_1fb8bc;
        }
    }
    ctx->pc = 0x1FB8B4u;
    // 0x1fb8b4: 0xc07ee3a  jal         func_1FB8E8
    ctx->pc = 0x1FB8B4u;
    SET_GPR_U32(ctx, 31, 0x1FB8BCu);
    ctx->pc = 0x1FB8E8u;
    if (runtime->hasFunction(0x1FB8E8u)) {
        auto targetFn = runtime->lookupFunction(0x1FB8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB8BCu; }
        if (ctx->pc != 0x1FB8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB8E8_0x1fb8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB8BCu; }
        if (ctx->pc != 0x1FB8BCu) { return; }
    }
    ctx->pc = 0x1FB8BCu;
label_1fb8bc:
    // 0x1fb8bc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1fb8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1fb8c0: 0x643fff7  bgezl       $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FB8C0u;
    {
        const bool branch_taken_0x1fb8c0 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1fb8c0) {
            ctx->pc = 0x1FB8C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB8C0u;
            // 0x1fb8c4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB8A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fb8a0;
        }
    }
    ctx->pc = 0x1FB8C8u;
    // 0x1fb8c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb8cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb8d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb8d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb8d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fb8d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb8d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fb8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB8DCu;
            // 0x1fb8e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB8E4u;
    // 0x1fb8e4: 0x0  nop
    ctx->pc = 0x1fb8e4u;
    // NOP
    ctx->pc = 0x1fb8e8u;
}
