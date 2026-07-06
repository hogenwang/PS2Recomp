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

// Function: sub_0029C8F8
// Address: 0x29c8f8 - 0x29ca30
void sub_0029C8F8_0x29c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C8F8_0x29c8f8");
#endif

    switch (ctx->pc) {
        case 0x29c938u: goto label_29c938;
        case 0x29c954u: goto label_29c954;
        case 0x29c978u: goto label_29c978;
        case 0x29c99cu: goto label_29c99c;
        case 0x29c9b0u: goto label_29c9b0;
        case 0x29c9d4u: goto label_29c9d4;
        case 0x29c9e8u: goto label_29c9e8;
        case 0x29ca0cu: goto label_29ca0c;
        default: break;
    }

    ctx->pc = 0x29c8f8u;

    // 0x29c8f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29c8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29c8fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29c8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29c900: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29c900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29c904: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29c904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c908: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29c908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29c90c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c914: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29c918: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29c91c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C91Cu;
    {
        const bool branch_taken_0x29c91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C91Cu;
        // 0x29c920: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c91c) {
            ctx->pc = 0x29C930u;
            goto label_29c930;
        }
    }
    ctx->pc = 0x29C924u;
    // 0x29c924: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x29c924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29c928: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29C928u;
    {
        const bool branch_taken_0x29c928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C928u;
        // 0x29c92c: 0x24060066  addiu       $a2, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c928) {
            ctx->pc = 0x29C948u;
            goto label_29c948;
        }
    }
    ctx->pc = 0x29C930u;
label_29c930:
    // 0x29c930: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x29C930u;
    SET_GPR_U32(ctx, 31, 0x29C938u);
    ctx->pc = 0x29C934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C930u;
    // 0x29c934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CA30u, 0x29C930u, 0x29C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C938u;
label_29c938:
    // 0x29c938: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C938u;
    {
        const bool branch_taken_0x29c938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C938u;
        // 0x29c93c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c938) {
            ctx->pc = 0x29C95Cu;
            goto label_29c95c;
        }
    }
    ctx->pc = 0x29C940u;
    // 0x29c940: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x29c940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29c944: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x29c944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_29c948:
    // 0x29c948: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c94c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29C94Cu;
    SET_GPR_U32(ctx, 31, 0x29C954u);
    ctx->pc = 0x29C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C94Cu;
    // 0x29c950: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29C94Cu, 0x29C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C954u;
label_29c954:
    // 0x29c954: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x29C954u;
    {
        const bool branch_taken_0x29c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C954u;
        // 0x29c958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c954) {
            ctx->pc = 0x29CA18u;
            goto label_29ca18;
        }
    }
    ctx->pc = 0x29C95Cu;
label_29c95c:
    // 0x29c95c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29c960: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x29c960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x29c964: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x29C964u;
    {
        const bool branch_taken_0x29c964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C964u;
        // 0x29c968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c964) {
            ctx->pc = 0x29CA18u;
            goto label_29ca18;
        }
    }
    ctx->pc = 0x29C96Cu;
    // 0x29c96c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x29c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x29c970: 0xc0a1b0c  jal         func_286C30
    ctx->pc = 0x29C970u;
    SET_GPR_U32(ctx, 31, 0x29C978u);
    ctx->pc = 0x29C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C970u;
    // 0x29c974: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C30u, 0x29C970u, 0x29C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C978u;
label_29c978:
    // 0x29c978: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c97c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x29C97Cu;
    {
        const bool branch_taken_0x29c97c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C97Cu;
        // 0x29c980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c97c) {
            ctx->pc = 0x29CA18u;
            goto label_29ca18;
        }
    }
    ctx->pc = 0x29C984u;
    // 0x29c984: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x29c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29c988: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x29c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29c98c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C98Cu;
    {
        const bool branch_taken_0x29c98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c98c) {
            ctx->pc = 0x29C990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C98Cu;
            // 0x29c990: 0xac50000c  sw          $s0, 0xC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C9A4u;
            goto label_29c9a4;
        }
    }
    ctx->pc = 0x29C994u;
    // 0x29c994: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x29C994u;
    SET_GPR_U32(ctx, 31, 0x29C99Cu);
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x29C994u, 0x29C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C99Cu;
label_29c99c:
    // 0x29c99c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x29c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29c9a0: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x29c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_29c9a4:
    // 0x29c9a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x29c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x29c9a8: 0xc0a1b0c  jal         func_286C30
    ctx->pc = 0x29C9A8u;
    SET_GPR_U32(ctx, 31, 0x29C9B0u);
    ctx->pc = 0x29C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9A8u;
    // 0x29c9ac: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C30u, 0x29C9A8u, 0x29C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9B0u;
label_29c9b0:
    // 0x29c9b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9b4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29C9B4u;
    {
        const bool branch_taken_0x29c9b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9B4u;
        // 0x29c9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9b4) {
            ctx->pc = 0x29CA18u;
            goto label_29ca18;
        }
    }
    ctx->pc = 0x29C9BCu;
    // 0x29c9bc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x29c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29c9c0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x29c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29c9c4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C9C4u;
    {
        const bool branch_taken_0x29c9c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c9c4) {
            ctx->pc = 0x29C9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C9C4u;
            // 0x29c9c8: 0xac500010  sw          $s0, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C9DCu;
            goto label_29c9dc;
        }
    }
    ctx->pc = 0x29C9CCu;
    // 0x29c9cc: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x29C9CCu;
    SET_GPR_U32(ctx, 31, 0x29C9D4u);
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x29C9CCu, 0x29C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9D4u;
label_29c9d4:
    // 0x29c9d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x29c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29c9d8: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x29c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
label_29c9dc:
    // 0x29c9dc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x29c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x29c9e0: 0xc0a1b0c  jal         func_286C30
    ctx->pc = 0x29C9E0u;
    SET_GPR_U32(ctx, 31, 0x29C9E8u);
    ctx->pc = 0x29C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9E0u;
    // 0x29c9e4: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C30u, 0x29C9E0u, 0x29C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9E8u;
label_29c9e8:
    // 0x29c9e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9ec: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x29C9ECu;
    {
        const bool branch_taken_0x29c9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9ECu;
        // 0x29c9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9ec) {
            ctx->pc = 0x29CA18u;
            goto label_29ca18;
        }
    }
    ctx->pc = 0x29C9F4u;
    // 0x29c9f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x29c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29c9f8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x29c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29c9fc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C9FCu;
    {
        const bool branch_taken_0x29c9fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c9fc) {
            ctx->pc = 0x29CA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C9FCu;
            // 0x29ca00: 0xac500014  sw          $s0, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CA14u;
            goto label_29ca14;
        }
    }
    ctx->pc = 0x29CA04u;
    // 0x29ca04: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x29CA04u;
    SET_GPR_U32(ctx, 31, 0x29CA0Cu);
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x29CA04u, 0x29CA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA0Cu;
label_29ca0c:
    // 0x29ca0c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x29ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29ca10: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x29ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
label_29ca14:
    // 0x29ca14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ca18:
    // 0x29ca18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29ca18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ca1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29ca1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ca20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29ca20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ca24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ca24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ca28: 0x3e00008  jr          $ra
    ctx->pc = 0x29CA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA28u;
        // 0x29ca2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CA30u;
}
