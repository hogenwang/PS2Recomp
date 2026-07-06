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

// Function: sub_002D5398
// Address: 0x2d5398 - 0x2d5458
void sub_002D5398_0x2d5398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5398_0x2d5398");
#endif

    switch (ctx->pc) {
        case 0x2d53b4u: goto label_2d53b4;
        case 0x2d53c4u: goto label_2d53c4;
        case 0x2d5410u: goto label_2d5410;
        case 0x2d5420u: goto label_2d5420;
        default: break;
    }

    ctx->pc = 0x2d5398u;

    // 0x2d5398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d5398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d539c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d53a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d53a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d53a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d53ac: 0xc0b5414  jal         func_2D5050
    ctx->pc = 0x2D53ACu;
    SET_GPR_U32(ctx, 31, 0x2D53B4u);
    ctx->pc = 0x2D53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53ACu;
    // 0x2d53b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5050u, 0x2D53ACu, 0x2D53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53B4u;
label_2d53b4:
    // 0x2d53b4: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x2d53b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2d53b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d53b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53bc: 0xc0b5414  jal         func_2D5050
    ctx->pc = 0x2D53BCu;
    SET_GPR_U32(ctx, 31, 0x2D53C4u);
    ctx->pc = 0x2D53C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53BCu;
    // 0x2d53c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5050u, 0x2D53BCu, 0x2D53C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53C4u;
label_2d53c4:
    // 0x2d53c4: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x2d53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x2d53c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d53c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d53ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d53d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d53d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d53d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d53d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d53d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d53dc: 0x80b5414  j           func_2D5050
    ctx->pc = 0x2D53DCu;
    ctx->pc = 0x2D53E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53DCu;
    // 0x2d53e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5050u;
    sub_002D5050_0x2d5050(rdram, ctx, runtime); return;
    ctx->pc = 0x2D53E4u;
    // 0x2d53e4: 0x0  nop
    ctx->pc = 0x2d53e4u;
    // NOP
    // 0x2d53e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d53e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d53ec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d53f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d53f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d53f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d53f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d53f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d53f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d53fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d5400: 0x245195b0  addiu       $s1, $v0, -0x6A50
    ctx->pc = 0x2d5400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940080));
    // 0x2d5404: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d5404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d5408: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d5408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d540c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d5410:
    // 0x2d5410: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2d5410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2d5414: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d5414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5418: 0xc0b60ac  jal         func_2D82B0
    ctx->pc = 0x2D5418u;
    SET_GPR_U32(ctx, 31, 0x2D5420u);
    ctx->pc = 0x2D541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5418u;
    // 0x2d541c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82B0u, 0x2D5418u, 0x2D5420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5420u;
label_2d5420:
    // 0x2d5420: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5420u;
    {
        const bool branch_taken_0x2d5420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5420u;
        // 0x2d5424: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5420) {
            ctx->pc = 0x2D5430u;
            goto label_2d5430;
        }
    }
    ctx->pc = 0x2D5428u;
    // 0x2d5428: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5428u;
    {
        const bool branch_taken_0x2d5428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5428u;
        // 0x2d542c: 0x24020222  addiu       $v0, $zero, 0x222 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5428) {
            ctx->pc = 0x2D5440u;
            goto label_2d5440;
        }
    }
    ctx->pc = 0x2D5430u;
label_2d5430:
    // 0x2d5430: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x2d5430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d5434: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D5434u;
    {
        const bool branch_taken_0x2d5434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5434u;
        // 0x2d5438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5434) {
            ctx->pc = 0x2D5410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5410;
        }
    }
    ctx->pc = 0x2D543Cu;
    // 0x2d543c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d543cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5440:
    // 0x2d5440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5448: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d544c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d544cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5450: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5450u;
        // 0x2d5454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5458u;
}
