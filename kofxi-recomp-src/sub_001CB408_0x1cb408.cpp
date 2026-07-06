#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB408
// Address: 0x1cb408 - 0x1cb520
void sub_001CB408_0x1cb408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB408_0x1cb408");
#endif

    switch (ctx->pc) {
        case 0x1cb440u: goto label_1cb440;
        case 0x1cb4c0u: goto label_1cb4c0;
        case 0x1cb4f4u: goto label_1cb4f4;
        case 0x1cb500u: goto label_1cb500;
        case 0x1cb508u: goto label_1cb508;
        default: break;
    }

    ctx->pc = 0x1cb408u;

    // 0x1cb408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb40c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1cb40cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1cb410: 0x24e28bd0  addiu       $v0, $a3, -0x7430
    ctx->pc = 0x1cb410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937552));
    // 0x1cb414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb41c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1cb41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cb420: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1cb420u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb424: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cb428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb42c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1cb42cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb430: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB430u;
    {
        const bool branch_taken_0x1cb430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB430u;
        // 0x1cb434: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb430) {
            ctx->pc = 0x1CB464u;
            goto label_1cb464;
        }
    }
    ctx->pc = 0x1CB438u;
    // 0x1cb438: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cb438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cb43c: 0x0  nop
    ctx->pc = 0x1cb43cu;
    // NOP
label_1cb440:
    // 0x1cb440: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x1cb440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1cb444: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB444u;
    {
        const bool branch_taken_0x1cb444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB444u;
        // 0x1cb448: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb444) {
            ctx->pc = 0x1CB464u;
            goto label_1cb464;
        }
    }
    ctx->pc = 0x1CB44Cu;
    // 0x1cb44c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cb44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb450: 0x0  nop
    ctx->pc = 0x1cb450u;
    // NOP
    // 0x1cb454: 0x0  nop
    ctx->pc = 0x1cb454u;
    // NOP
    // 0x1cb458: 0x0  nop
    ctx->pc = 0x1cb458u;
    // NOP
    // 0x1cb45c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CB45Cu;
    {
        const bool branch_taken_0x1cb45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb45c) {
            ctx->pc = 0x1CB460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB45Cu;
            // 0x1cb460: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cb440;
        }
    }
    ctx->pc = 0x1CB464u;
label_1cb464:
    // 0x1cb464: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1cb464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cb468: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CB468u;
    {
        const bool branch_taken_0x1cb468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB468u;
        // 0x1cb46c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb468) {
            ctx->pc = 0x1CB4C0u;
            goto label_1cb4c0;
        }
    }
    ctx->pc = 0x1CB470u;
    // 0x1cb470: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1cb470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1cb474: 0x24e28bd0  addiu       $v0, $a3, -0x7430
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937552));
    // 0x1cb478: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cb478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1cb47c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cb480: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1cb480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1cb484: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1cb484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cb488: 0x24638b98  addiu       $v1, $v1, -0x7468
    ctx->pc = 0x1cb488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937496));
    // 0x1cb48c: 0x24a5b998  addiu       $a1, $a1, -0x4668
    ctx->pc = 0x1cb48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949272));
    // 0x1cb490: 0x24c6b248  addiu       $a2, $a2, -0x4DB8
    ctx->pc = 0x1cb490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947400));
    // 0x1cb494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb498: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cb498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1cb49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cb4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cb4a4: 0xae0a001c  sw          $t2, 0x1C($s0)
    ctx->pc = 0x1cb4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 10));
    // 0x1cb4a8: 0xae090020  sw          $t1, 0x20($s0)
    ctx->pc = 0x1cb4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 9));
    // 0x1cb4ac: 0xae080024  sw          $t0, 0x24($s0)
    ctx->pc = 0x1cb4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
    // 0x1cb4b0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1cb4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x1cb4b4: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x1cb4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x1cb4b8: 0xc072de0  jal         func_1CB780
    ctx->pc = 0x1CB4B8u;
    SET_GPR_U32(ctx, 31, 0x1CB4C0u);
    ctx->pc = 0x1CB4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4B8u;
    // 0x1cb4bc: 0xae10003c  sw          $s0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB780u, 0x1CB4B8u, 0x1CB4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4C0u;
label_1cb4c0:
    // 0x1cb4c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cb4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb4c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb4c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4CCu;
        // 0x1cb4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB4D4u;
    // 0x1cb4d4: 0x0  nop
    ctx->pc = 0x1cb4d4u;
    // NOP
    // 0x1cb4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb4dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb4e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb4e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb4ec: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CB4ECu;
    SET_GPR_U32(ctx, 31, 0x1CB4F4u);
    ctx->pc = 0x1CB4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4ECu;
    // 0x1cb4f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CB4ECu, 0x1CB4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4F4u;
label_1cb4f4:
    // 0x1cb4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4f8: 0xc072d48  jal         func_1CB520
    ctx->pc = 0x1CB4F8u;
    SET_GPR_U32(ctx, 31, 0x1CB500u);
    ctx->pc = 0x1CB4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4F8u;
    // 0x1cb4fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB520u, 0x1CB4F8u, 0x1CB500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB500u;
label_1cb500:
    // 0x1cb500: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1CB500u;
    SET_GPR_U32(ctx, 31, 0x1CB508u);
    ctx->pc = 0x1CB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB500u;
    // 0x1cb504: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA800u, 0x1CB500u, 0x1CB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB508u;
label_1cb508:
    // 0x1cb508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb50c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cb50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb518: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB518u;
        // 0x1cb51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB520u;
}
