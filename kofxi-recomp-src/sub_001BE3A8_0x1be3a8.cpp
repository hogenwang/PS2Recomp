#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE3A8
// Address: 0x1be3a8 - 0x1be440
void sub_001BE3A8_0x1be3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE3A8_0x1be3a8");
#endif

    switch (ctx->pc) {
        case 0x1be3d4u: goto label_1be3d4;
        case 0x1be3e8u: goto label_1be3e8;
        case 0x1be3fcu: goto label_1be3fc;
        default: break;
    }

    ctx->pc = 0x1be3a8u;

    // 0x1be3a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1be3ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be3b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1be3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1be3b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1be3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1be3bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1be3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1be3c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1be3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1be3c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be3c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1be3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1be3cc: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1BE3CCu;
    SET_GPR_U32(ctx, 31, 0x1BE3D4u);
    ctx->pc = 0x1BE3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3CCu;
            // 0x1be3d0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D4u; }
        if (ctx->pc != 0x1BE3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D4u; }
        if (ctx->pc != 0x1BE3D4u) { return; }
    }
    ctx->pc = 0x1BE3D4u;
label_1be3d4:
    // 0x1be3d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1be3d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3d8: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1be3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1be3dc: 0x24525594  addiu       $s2, $v0, 0x5594
    ctx->pc = 0x1be3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 21908));
    // 0x1be3e0: 0x2655fffc  addiu       $s5, $s2, -0x4
    ctx->pc = 0x1be3e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1be3e4: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1be3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1be3e8:
    // 0x1be3e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1be3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1be3ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1be3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3f0: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1be3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1be3f4: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x1BE3F4u;
    SET_GPR_U32(ctx, 31, 0x1BE3FCu);
    ctx->pc = 0x1BE3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3F4u;
            // 0x1be3f8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3FCu; }
        if (ctx->pc != 0x1BE3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3FCu; }
        if (ctx->pc != 0x1BE3FCu) { return; }
    }
    ctx->pc = 0x1BE3FCu;
label_1be3fc:
    // 0x1be3fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE3FCu;
    {
        const bool branch_taken_0x1be3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3FCu;
            // 0x1be400: 0x2e230020  sltiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3fc) {
            ctx->pc = 0x1BE410u;
            goto label_1be410;
        }
    }
    ctx->pc = 0x1BE404u;
    // 0x1be404: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x1be404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1be408: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE408u;
    {
        const bool branch_taken_0x1be408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE408u;
            // 0x1be40c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be408) {
            ctx->pc = 0x1BE41Cu;
            goto label_1be41c;
        }
    }
    ctx->pc = 0x1BE410u;
label_1be410:
    // 0x1be410: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BE410u;
    {
        const bool branch_taken_0x1be410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE410u;
            // 0x1be414: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be410) {
            ctx->pc = 0x1BE3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be3e8;
        }
    }
    ctx->pc = 0x1BE418u;
    // 0x1be418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be41c:
    // 0x1be41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be428: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1be428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be42c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1be42cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be430: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1be430u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1be434: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1be434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be438: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE438u;
            // 0x1be43c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE440u;
    ctx->pc = 0x1be440u;
}
